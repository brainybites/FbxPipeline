#pragma once

#include <GraphicsDevice.Vulkan.h>
#include <TInfoStruct.Vulkan.h>
#include <NativeDispatchableHandles.Vulkan.h>

namespace apemodevk
{
    class CommandBuffer;
    class RenderPass;
    class PipelineLayout;
    class PipelineState;
    class PipelineStateDescription;

    enum ShaderType
    {
        kShaderType_Vertex = 0,
        kShaderType_TesselationControl,
        kShaderType_TesselationEvaluation,
        kShaderType_Geometry,
        kShaderType_Fragment,
        kShaderType_Compute,
        kShaderType_Unknown,
    };

    class ShaderBytecode : public apemodevk::ScalableAllocPolicy,
                                                       public apemodevk::NoCopyAssignPolicy
    {
    public:
        uint64_t                      Hash;
        ShaderType                    eType;
        std::string                  Id;
        std::string                  MainFn;
        std::vector<uint8_t> Bytecode;

    public:
        ShaderBytecode ();
        ShaderBytecode (ShaderBytecode && Other);
        ShaderBytecode (ShaderBytecode const & Other);

        /**
         * Must end with 4 chars, that denote shader stage:
         * - 'vert' -> kShaderType_Vertex
         * - 'tesc' -> kShaderType_TesselationControl
         * - 'tese' -> kShaderType_TesselationEvaluation
         * - 'geom' -> kShaderType_Geometry
         * - 'frag' -> kShaderType_Fragment
         * - 'comp' -> kShaderType_Compute
         */
        void SetIdAndType (const char * pId);
        void SetMainFn (const char * pMainFn);
        void SetBytecode (const void * pBytecode, size_t BytecodeLength);

    public:
        apemodevk::ShaderBytecode & operator= (ShaderBytecode && Other);
        apemodevk::ShaderBytecode & operator= (ShaderBytecode const & Other);
    };

    class PipelineStateDescription : public apemodevk::ScalableAllocPolicy,
                                                                 public apemodevk::NoCopyAssignPolicy
    {
    public:
        uint64_t                 Hash;
        bool                     bIsGraphics;
        RenderPass const *       pRenderPass;
        PipelineLayout const *    pPipelineLayout;

        apemodevk::TInfoStruct<VkPipelineVertexInputStateCreateInfo>   VertexInputState;
        apemodevk::TInfoStruct<VkPipelineInputAssemblyStateCreateInfo> InputAssemblyState;
        std::vector<VkVertexInputBindingDescription>     InputBindings;
        std::vector<VkVertexInputAttributeDescription>   InputAttributes;

        VkSampleMask                                              SampleMask;
        apemodevk::TInfoStruct<VkPipelineMultisampleStateCreateInfo>   MultisampleState;
        apemodevk::TInfoStruct<VkPipelineRasterizationStateCreateInfo> RasterizationState;

        apemodevk::TInfoStruct<VkPipelineViewportStateCreateInfo> ViewportState;
        std::vector<VkViewport>                     Viewports;
        std::vector<VkRect2D>                       ScissorRects;

        apemodevk::TInfoStruct<VkPipelineDepthStencilStateCreateInfo> DepthStencilState;
        apemodevk::TInfoStruct<VkPipelineColorBlendStateCreateInfo>   ColorBlendState;
        VkPipelineColorBlendAttachmentState                      ColorBlendAttachmentStates[8];

        apemodevk::TInfoStruct<VkPipelineDynamicStateCreateInfo> DynamicState;
        VkDynamicState EnabledDynamicStates[VK_DYNAMIC_STATE_RANGE_SIZE];

        apemodevk::TInfoStruct<VkPipelineShaderStageCreateInfo> ShaderStages[5];
        ShaderBytecode                                     ShaderBytecodes[5];
        VkSpecializationInfo                               ShaderSpecializations[5];

    public:
        TInfoStruct<VkGraphicsPipelineCreateInfo> Graphics;
        TInfoStruct<VkComputePipelineCreateInfo>  Compute;
        TInfoStruct<VkPipelineCacheCreateInfo>    Cache;

    public:
        void Reset();
        uint64_t UpdateHash();
        bool IsDynamicStateEnabled(VkDynamicState eDynamicState) const;
    };

    class PipelineState : public apemodevk::ScalableAllocPolicy,
                                                      public apemodevk::NoCopyAssignPolicy
    {
    public:
        uint64_t                                   Hash;
        VkPipelineBindPoint                        eBindPoint;
        apemodevk::TDispatchableHandle<VkPipeline>      hPipeline;
        apemodevk::TDispatchableHandle<VkPipelineCache> hPipelineCache;
        apemodevk::PipelineStateDescription const *     pDesc;
        apemodevk::RenderPass const *                   pRenderPass;
        apemodevk::PipelineLayout const *                pPipelineLayout;
        apemodevk::GraphicsDevice const *               pNode;

    public:
        PipelineState();
        ~PipelineState();

        void BindTo(apemodevk::CommandBuffer & CmdBuffer);

    public:
        operator VkPipeline() const;
        operator VkPipelineCache() const;
    };

    class PipelineStateBuilder : public apemodevk::ScalableAllocPolicy,
                                                             public apemodevk::NoCopyAssignPolicy
    {
    public:
        class InputLayoutBuilder;
        friend InputLayoutBuilder;

    public:
        class InputLayoutBuilder : public apemodevk::ScalableAllocPolicy,
                                                               public apemodevk::NoCopyAssignPolicy
        {
            PipelineStateBuilder &            Bilder;
            VkVertexInputBindingDescription * pBinding;
            uint32_t                          AttributeLocation;
            uint32_t                          AttributeOffset;
            uint32_t                          AttributeCount;

        public:
            InputLayoutBuilder (PipelineStateBuilder & Bilder);

            InputLayoutBuilder & Reserve (uint32_t InputElementCount,
                                          uint32_t TotalInputAttributeCount);

            /** Sets current input element. */
            InputLayoutBuilder & AddInputElement (uint32_t          VertexStride,
                                                  VkVertexInputRate InputRate,
                                                  uint32_t          InputAttributeCount);

            /** Sets current input element. */
            template <typename TVertex>
            InputLayoutBuilder & AddInputElement (VkVertexInputRate InputRate,
                                                  uint32_t          InputAttributeCount)
            {
                static const uint32_t VertexStride = static_cast<uint32_t> (sizeof (TVertex));
                return AddInputElement (VertexStride, InputRate, InputAttributeCount);
            }

            /** Adds attribute to the current input element. */
            InputLayoutBuilder & AddAttribute (VkFormat Fmt);

            void ShrinkToFit ();
        };

    public:
        // Does Reset()
        PipelineStateBuilder ();
        ~PipelineStateBuilder ();

        void Reset();

        apemodevk::PipelineStateDescription & GetDesc();

        //
        // DynamicState
        //

        void EnableDynamicState (VkDynamicState eDynamicState);
        void DisableDynamicState (VkDynamicState eDynamicState);

        //
        // RasterizationState
        // DynamicState
        //

        void SetLineWidth (float LineWidth);
        void ResetLineWidth ();

        void SetBlendContants (float BlendContantR,
                               float BlendContantG,
                               float BlendContantB,
                               float BlendContantA);
        void ResetBlendContants ();

        void SetDepthBias (float DepthBiasConstantFactor,
                           float DepthBiasClamp,
                           float DepthBiasSlopeFactor);
        void ResetDepthBias ();

        //
        // DepthStencilState
        // DynamicState
        //

        void SetDepthBounds (float MinDepthBounds,
                             float MaxDepthBounds,
                             bool  bEnableDepthBoundsTest = true);
        void ResetDepthBounds ();

        void SetStencilCompareMask (uint32_t FrontFaceStencilCompareMask,
                                    uint32_t BackFaceStencilCompareMask);
        void ResetStencilCompareMask ();

        void SetStencilWriteMask (uint32_t FrontFaceStencilWriteMask,
                                  uint32_t BackFaceStencilWriteMask);
        void ResetStencilWriteMask ();

        void SetStencilReference (uint32_t FrontFaceStencilReference,
                                  uint32_t BackFaceStencilReference);
        void ResetStencilReference ();

        //
        // ViewportState
        // DynamicState
        //

        void SetViewports (VkViewport const * pViewports, size_t ViewportCount);
        void ResetViewports ();

        void SetScissorRects (VkRect2D const * pScissorRects, size_t ScissorRectCount);
        void ResetScissorRects ();

        void SetRenderPass (apemodevk::RenderPass const & RenderPass, uint32_t SubpassId);
        void SetPipelineLayout (apemodevk::PipelineLayout const & PipelineLayout);

        //
        // Stages
        //

        void SetShader (const char * pId,
                        const char * pMainFn,
                        const void * pBytecode,
                        size_t       BytecodeLength);

        //
        // VertexInputState
        //

        InputLayoutBuilder & EditInputLayout (uint32_t InputElementCount,
                                              uint32_t TotalInputAttributeCount);

        void ClearInputLayout (uint32_t InputElementCount, uint32_t TotalInputAttributeCount);

        void AddInputElement (uint32_t                                  VertexStride,
                              VkVertexInputRate                         InputRate,
                              VkVertexInputAttributeDescription const * InputAttributes,
                              uint32_t                                  InputAttributeCount);

        template <typename TVertexInputElement>
        void AddInputElement (VkVertexInputRate                         InputRate,
                              VkVertexInputAttributeDescription const * InputAttributes,
                              uint32_t                                  InputAttributeCount)
        {
            AddInputElement (static_cast<uint32_t> (sizeof (TVertexInputElement)),
                             InputRate,
                             InputAttributes,
                             InputAttributeCount);
        }

        //
        // InputAssemblyState
        //

        void SetPrimitiveTopology (VkPrimitiveTopology Topology, bool bEnableRestart);

    public:
        apemodevk::PipelineState const * RecreatePipelineState (apemodevk::GraphicsDevice & GraphicsNode);

    private:
        InputLayoutBuilder       InputEditor;
        PipelineStateDescription TemporaryDesc;
    };

    class PipelineStateManager : public apemodevk::ScalableAllocPolicy,
                                                             public apemodevk::NoCopyAssignPolicy
    {
        friend apemodevk::GraphicsDevice;
        friend apemodevk::PipelineStateBuilder;
        struct PipelineStateContent;
        struct PrivateContent;

        PrivateContent * pContent;

    public:
        PipelineStateManager ();
        ~PipelineStateManager ();

        void AddNewPipelineStateObject (apemodevk::PipelineState & PipelineState);
        apemodevk::PipelineState const * TryGetPipelineStateObjectByHash (uint64_t Hash);
    };

    class PipelineCache : public apemodevk::ScalableAllocPolicy, public apemodevk::NoCopyAssignPolicy {
        apemodevk::TDispatchableHandle< VkPipelineCache > hPipelineCache;

    };
} // namespace apemodevk
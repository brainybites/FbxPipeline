#pragma once

#include <Resource.Vulkan.h>

namespace apemodevk
{
    class BufferResourceView
        : public ResourceView
    {
    public:
        static std::shared_ptr<BufferResourceView> MakeNewLinked();
        static std::unique_ptr<BufferResourceView> MakeNewUnique();

    public:
        BufferResourceView();
        ~BufferResourceView();

        uint32_t GetElementCount () const;
        uint32_t GetElementSizeInBytes () const;
        uint32_t GetTotalSizeInBytes () const;

        void SetState (apemodevk::CommandBuffer &  CmdBuffer,
                       VkPipelineStageFlags PipelineStageFlags,
                       VkAccessFlags        AccessMask,
                       uint32_t             BufferSize,
                       uint32_t             BufferOffset,
                       uint32_t             QueueFamily = VK_QUEUE_FAMILY_IGNORED);

    public:
        uint32_t                                ElementCount;
        uint32_t                                ElementStride;
        VkDescriptorBufferInfo                  BufferInfo;
        apemodevk::TDispatchableHandle<VkBufferView> BufferViewHandle;
        apemodevk::TDispatchableHandle<VkBuffer>     BufferHandle;
    };
}
// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCENE_FBXP_FB_H_
#define FLATBUFFERS_GENERATED_SCENE_FBXP_FB_H_

#include "flatbuffers/flatbuffers.h"

namespace fbxp {
namespace fb {

struct vec2;

struct vec3;

struct vec4;

struct StaticVertexFb;

struct PackedVertexFb;

struct TextureFb;

struct SubmeshFb;

struct SubsetFb;

struct NameFb;

struct TransformFb;

struct MeshFb;

struct MaterialPropFb;

struct MaterialFb;

struct NodeFb;

struct SceneFb;

enum EVersion {
  EVersion_Value = 2,
  EVersion_MIN = EVersion_Value,
  EVersion_MAX = EVersion_Value
};

inline const char **EnumNamesEVersion() {
  static const char *names[] = {
    "Value",
    nullptr
  };
  return names;
}

inline const char *EnumNameEVersion(EVersion e) {
  const size_t index = static_cast<int>(e) - static_cast<int>(EVersion_Value);
  return EnumNamesEVersion()[index];
}

enum ECullingType {
  ECullingType_CullingOff = 0,
  ECullingType_CullingOnCCW = 1,
  ECullingType_CullingOnCW = 2,
  ECullingType_MIN = ECullingType_CullingOff,
  ECullingType_MAX = ECullingType_CullingOnCW
};

inline const char **EnumNamesECullingType() {
  static const char *names[] = {
    "CullingOff",
    "CullingOnCCW",
    "CullingOnCW",
    nullptr
  };
  return names;
}

inline const char *EnumNameECullingType(ECullingType e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesECullingType()[index];
}

enum EWrapMode {
  EWrapMode_Repeat = 0,
  EWrapMode_Clamp = 1,
  EWrapMode_MIN = EWrapMode_Repeat,
  EWrapMode_MAX = EWrapMode_Clamp
};

inline const char **EnumNamesEWrapMode() {
  static const char *names[] = {
    "Repeat",
    "Clamp",
    nullptr
  };
  return names;
}

inline const char *EnumNameEWrapMode(EWrapMode e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesEWrapMode()[index];
}

enum EBlendMode {
  EBlendMode_Translucent = 0,
  EBlendMode_Additive = 1,
  EBlendMode_Modulate = 2,
  EBlendMode_Modulate2 = 3,
  EBlendMode_Over = 4,
  EBlendMode_MIN = EBlendMode_Translucent,
  EBlendMode_MAX = EBlendMode_Over
};

inline const char **EnumNamesEBlendMode() {
  static const char *names[] = {
    "Translucent",
    "Additive",
    "Modulate",
    "Modulate2",
    "Over",
    nullptr
  };
  return names;
}

inline const char *EnumNameEBlendMode(EBlendMode e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesEBlendMode()[index];
}

enum EVertexFormat {
  EVertexFormat_Static = 0,
  EVertexFormat_Packed = 1,
  EVertexFormat_MIN = EVertexFormat_Static,
  EVertexFormat_MAX = EVertexFormat_Packed
};

inline const char **EnumNamesEVertexFormat() {
  static const char *names[] = {
    "Static",
    "Packed",
    nullptr
  };
  return names;
}

inline const char *EnumNameEVertexFormat(EVertexFormat e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesEVertexFormat()[index];
}

enum EIndexTypeFb {
  EIndexTypeFb_UInt16 = 0,
  EIndexTypeFb_UInt16Compressed = 1,
  EIndexTypeFb_UInt32 = 2,
  EIndexTypeFb_UInt32Compressed = 3,
  EIndexTypeFb_Count = 4,
  EIndexTypeFb_MIN = EIndexTypeFb_UInt16,
  EIndexTypeFb_MAX = EIndexTypeFb_Count
};

inline const char **EnumNamesEIndexTypeFb() {
  static const char *names[] = {
    "UInt16",
    "UInt16Compressed",
    "UInt32",
    "UInt32Compressed",
    "Count",
    nullptr
  };
  return names;
}

inline const char *EnumNameEIndexTypeFb(EIndexTypeFb e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesEIndexTypeFb()[index];
}

enum EMaterialPropTypeFb {
  EMaterialPropTypeFb_Scalar = 0,
  EMaterialPropTypeFb_Color = 1,
  EMaterialPropTypeFb_Texture = 2,
  EMaterialPropTypeFb_Video = 3,
  EMaterialPropTypeFb_MIN = EMaterialPropTypeFb_Scalar,
  EMaterialPropTypeFb_MAX = EMaterialPropTypeFb_Video
};

inline const char **EnumNamesEMaterialPropTypeFb() {
  static const char *names[] = {
    "Scalar",
    "Color",
    "Texture",
    "Video",
    nullptr
  };
  return names;
}

inline const char *EnumNameEMaterialPropTypeFb(EMaterialPropTypeFb e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesEMaterialPropTypeFb()[index];
}

MANUALLY_ALIGNED_STRUCT(4) vec2 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;

 public:
  vec2() {
    memset(this, 0, sizeof(vec2));
  }
  vec2(const vec2 &_o) {
    memcpy(this, &_o, sizeof(vec2));
  }
  vec2(float _x, float _y)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
};
STRUCT_END(vec2, 8);

MANUALLY_ALIGNED_STRUCT(4) vec3 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;

 public:
  vec3() {
    memset(this, 0, sizeof(vec3));
  }
  vec3(const vec3 &_o) {
    memcpy(this, &_o, sizeof(vec3));
  }
  vec3(float _x, float _y, float _z)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
};
STRUCT_END(vec3, 12);

MANUALLY_ALIGNED_STRUCT(4) vec4 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;
  float w_;

 public:
  vec4() {
    memset(this, 0, sizeof(vec4));
  }
  vec4(const vec4 &_o) {
    memcpy(this, &_o, sizeof(vec4));
  }
  vec4(float _x, float _y, float _z, float _w)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)),
        w_(flatbuffers::EndianScalar(_w)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
  float w() const {
    return flatbuffers::EndianScalar(w_);
  }
};
STRUCT_END(vec4, 16);

MANUALLY_ALIGNED_STRUCT(4) StaticVertexFb FLATBUFFERS_FINAL_CLASS {
 private:
  vec3 position_;
  vec3 normal_;
  vec4 tangent_;
  vec2 texCoords_;

 public:
  StaticVertexFb() {
    memset(this, 0, sizeof(StaticVertexFb));
  }
  StaticVertexFb(const StaticVertexFb &_o) {
    memcpy(this, &_o, sizeof(StaticVertexFb));
  }
  StaticVertexFb(const vec3 &_position, const vec3 &_normal, const vec4 &_tangent, const vec2 &_texCoords)
      : position_(_position),
        normal_(_normal),
        tangent_(_tangent),
        texCoords_(_texCoords) {
  }
  const vec3 &position() const {
    return position_;
  }
  const vec3 &normal() const {
    return normal_;
  }
  const vec4 &tangent() const {
    return tangent_;
  }
  const vec2 &texCoords() const {
    return texCoords_;
  }
};
STRUCT_END(StaticVertexFb, 48);

MANUALLY_ALIGNED_STRUCT(4) PackedVertexFb FLATBUFFERS_FINAL_CLASS {
 private:
  vec3 position_;
  uint32_t normal_;
  uint32_t tangent_;
  uint32_t texCoords_;

 public:
  PackedVertexFb() {
    memset(this, 0, sizeof(PackedVertexFb));
  }
  PackedVertexFb(const PackedVertexFb &_o) {
    memcpy(this, &_o, sizeof(PackedVertexFb));
  }
  PackedVertexFb(const vec3 &_position, uint32_t _normal, uint32_t _tangent, uint32_t _texCoords)
      : position_(_position),
        normal_(flatbuffers::EndianScalar(_normal)),
        tangent_(flatbuffers::EndianScalar(_tangent)),
        texCoords_(flatbuffers::EndianScalar(_texCoords)) {
  }
  const vec3 &position() const {
    return position_;
  }
  uint32_t normal() const {
    return flatbuffers::EndianScalar(normal_);
  }
  uint32_t tangent() const {
    return flatbuffers::EndianScalar(tangent_);
  }
  uint32_t texCoords() const {
    return flatbuffers::EndianScalar(texCoords_);
  }
};
STRUCT_END(PackedVertexFb, 24);

MANUALLY_ALIGNED_STRUCT(8) TextureFb FLATBUFFERS_FINAL_CLASS {
 private:
  uint32_t id_;
  int32_t padding0__;
  uint64_t name_id_;
  uint64_t source_id_;
  uint32_t blend_mode_;
  uint32_t wrap_mode_u_;
  uint32_t wrap_mode_v_;
  float offset_u_;
  float offset_v_;
  float scale_u_;
  float scale_v_;
  int32_t padding1__;

 public:
  TextureFb() {
    memset(this, 0, sizeof(TextureFb));
  }
  TextureFb(const TextureFb &_o) {
    memcpy(this, &_o, sizeof(TextureFb));
  }
  TextureFb(uint32_t _id, uint64_t _name_id, uint64_t _source_id, EBlendMode _blend_mode, EWrapMode _wrap_mode_u, EWrapMode _wrap_mode_v, float _offset_u, float _offset_v, float _scale_u, float _scale_v)
      : id_(flatbuffers::EndianScalar(_id)),
        padding0__(0),
        name_id_(flatbuffers::EndianScalar(_name_id)),
        source_id_(flatbuffers::EndianScalar(_source_id)),
        blend_mode_(flatbuffers::EndianScalar(static_cast<uint32_t>(_blend_mode))),
        wrap_mode_u_(flatbuffers::EndianScalar(static_cast<uint32_t>(_wrap_mode_u))),
        wrap_mode_v_(flatbuffers::EndianScalar(static_cast<uint32_t>(_wrap_mode_v))),
        offset_u_(flatbuffers::EndianScalar(_offset_u)),
        offset_v_(flatbuffers::EndianScalar(_offset_v)),
        scale_u_(flatbuffers::EndianScalar(_scale_u)),
        scale_v_(flatbuffers::EndianScalar(_scale_v)),
        padding1__(0) {
    (void)padding0__;(void)padding1__;
  }
  uint32_t id() const {
    return flatbuffers::EndianScalar(id_);
  }
  uint64_t name_id() const {
    return flatbuffers::EndianScalar(name_id_);
  }
  uint64_t source_id() const {
    return flatbuffers::EndianScalar(source_id_);
  }
  EBlendMode blend_mode() const {
    return static_cast<EBlendMode>(flatbuffers::EndianScalar(blend_mode_));
  }
  EWrapMode wrap_mode_u() const {
    return static_cast<EWrapMode>(flatbuffers::EndianScalar(wrap_mode_u_));
  }
  EWrapMode wrap_mode_v() const {
    return static_cast<EWrapMode>(flatbuffers::EndianScalar(wrap_mode_v_));
  }
  float offset_u() const {
    return flatbuffers::EndianScalar(offset_u_);
  }
  float offset_v() const {
    return flatbuffers::EndianScalar(offset_v_);
  }
  float scale_u() const {
    return flatbuffers::EndianScalar(scale_u_);
  }
  float scale_v() const {
    return flatbuffers::EndianScalar(scale_v_);
  }
};
STRUCT_END(TextureFb, 56);

MANUALLY_ALIGNED_STRUCT(4) SubmeshFb FLATBUFFERS_FINAL_CLASS {
 private:
  uint32_t base_vertex_;
  uint32_t vertex_count_;
  uint32_t base_index_;
  uint32_t index_count_;
  uint16_t base_subset_;
  uint16_t subset_count_;
  uint32_t vertex_format_;
  uint16_t vertex_stride_;
  int16_t padding0__;

 public:
  SubmeshFb() {
    memset(this, 0, sizeof(SubmeshFb));
  }
  SubmeshFb(const SubmeshFb &_o) {
    memcpy(this, &_o, sizeof(SubmeshFb));
  }
  SubmeshFb(uint32_t _base_vertex, uint32_t _vertex_count, uint32_t _base_index, uint32_t _index_count, uint16_t _base_subset, uint16_t _subset_count, EVertexFormat _vertex_format, uint16_t _vertex_stride)
      : base_vertex_(flatbuffers::EndianScalar(_base_vertex)),
        vertex_count_(flatbuffers::EndianScalar(_vertex_count)),
        base_index_(flatbuffers::EndianScalar(_base_index)),
        index_count_(flatbuffers::EndianScalar(_index_count)),
        base_subset_(flatbuffers::EndianScalar(_base_subset)),
        subset_count_(flatbuffers::EndianScalar(_subset_count)),
        vertex_format_(flatbuffers::EndianScalar(static_cast<uint32_t>(_vertex_format))),
        vertex_stride_(flatbuffers::EndianScalar(_vertex_stride)),
        padding0__(0) {
    (void)padding0__;
  }
  uint32_t base_vertex() const {
    return flatbuffers::EndianScalar(base_vertex_);
  }
  uint32_t vertex_count() const {
    return flatbuffers::EndianScalar(vertex_count_);
  }
  uint32_t base_index() const {
    return flatbuffers::EndianScalar(base_index_);
  }
  uint32_t index_count() const {
    return flatbuffers::EndianScalar(index_count_);
  }
  uint16_t base_subset() const {
    return flatbuffers::EndianScalar(base_subset_);
  }
  uint16_t subset_count() const {
    return flatbuffers::EndianScalar(subset_count_);
  }
  EVertexFormat vertex_format() const {
    return static_cast<EVertexFormat>(flatbuffers::EndianScalar(vertex_format_));
  }
  uint16_t vertex_stride() const {
    return flatbuffers::EndianScalar(vertex_stride_);
  }
};
STRUCT_END(SubmeshFb, 28);

MANUALLY_ALIGNED_STRUCT(4) SubsetFb FLATBUFFERS_FINAL_CLASS {
 private:
  uint32_t material_id_;
  uint32_t base_index_;
  uint32_t index_count_;

 public:
  SubsetFb() {
    memset(this, 0, sizeof(SubsetFb));
  }
  SubsetFb(const SubsetFb &_o) {
    memcpy(this, &_o, sizeof(SubsetFb));
  }
  SubsetFb(uint32_t _material_id, uint32_t _base_index, uint32_t _index_count)
      : material_id_(flatbuffers::EndianScalar(_material_id)),
        base_index_(flatbuffers::EndianScalar(_base_index)),
        index_count_(flatbuffers::EndianScalar(_index_count)) {
  }
  uint32_t material_id() const {
    return flatbuffers::EndianScalar(material_id_);
  }
  uint32_t base_index() const {
    return flatbuffers::EndianScalar(base_index_);
  }
  uint32_t index_count() const {
    return flatbuffers::EndianScalar(index_count_);
  }
};
STRUCT_END(SubsetFb, 12);

MANUALLY_ALIGNED_STRUCT(4) TransformFb FLATBUFFERS_FINAL_CLASS {
 private:
  vec3 translation_;
  vec3 rotation_offset_;
  vec3 rotation_pivot_;
  vec3 pre_rotation_;
  vec3 post_rotation_;
  vec3 rotation_;
  vec3 scaling_offset_;
  vec3 scaling_pivot_;
  vec3 scaling_;
  vec3 geometric_translation_;
  vec3 geometric_rotation_;
  vec3 geometric_scaling_;

 public:
  TransformFb() {
    memset(this, 0, sizeof(TransformFb));
  }
  TransformFb(const TransformFb &_o) {
    memcpy(this, &_o, sizeof(TransformFb));
  }
  TransformFb(const vec3 &_translation, const vec3 &_rotation_offset, const vec3 &_rotation_pivot, const vec3 &_pre_rotation, const vec3 &_post_rotation, const vec3 &_rotation, const vec3 &_scaling_offset, const vec3 &_scaling_pivot, const vec3 &_scaling, const vec3 &_geometric_translation, const vec3 &_geometric_rotation, const vec3 &_geometric_scaling)
      : translation_(_translation),
        rotation_offset_(_rotation_offset),
        rotation_pivot_(_rotation_pivot),
        pre_rotation_(_pre_rotation),
        post_rotation_(_post_rotation),
        rotation_(_rotation),
        scaling_offset_(_scaling_offset),
        scaling_pivot_(_scaling_pivot),
        scaling_(_scaling),
        geometric_translation_(_geometric_translation),
        geometric_rotation_(_geometric_rotation),
        geometric_scaling_(_geometric_scaling) {
  }
  const vec3 &translation() const {
    return translation_;
  }
  const vec3 &rotation_offset() const {
    return rotation_offset_;
  }
  const vec3 &rotation_pivot() const {
    return rotation_pivot_;
  }
  const vec3 &pre_rotation() const {
    return pre_rotation_;
  }
  const vec3 &post_rotation() const {
    return post_rotation_;
  }
  const vec3 &rotation() const {
    return rotation_;
  }
  const vec3 &scaling_offset() const {
    return scaling_offset_;
  }
  const vec3 &scaling_pivot() const {
    return scaling_pivot_;
  }
  const vec3 &scaling() const {
    return scaling_;
  }
  const vec3 &geometric_translation() const {
    return geometric_translation_;
  }
  const vec3 &geometric_rotation() const {
    return geometric_rotation_;
  }
  const vec3 &geometric_scaling() const {
    return geometric_scaling_;
  }
};
STRUCT_END(TransformFb, 144);

MANUALLY_ALIGNED_STRUCT(8) MaterialPropFb FLATBUFFERS_FINAL_CLASS {
 private:
  uint64_t name_id_;
  uint32_t type_;
  vec3 value_;

 public:
  MaterialPropFb() {
    memset(this, 0, sizeof(MaterialPropFb));
  }
  MaterialPropFb(const MaterialPropFb &_o) {
    memcpy(this, &_o, sizeof(MaterialPropFb));
  }
  MaterialPropFb(uint64_t _name_id, EMaterialPropTypeFb _type, const vec3 &_value)
      : name_id_(flatbuffers::EndianScalar(_name_id)),
        type_(flatbuffers::EndianScalar(static_cast<uint32_t>(_type))),
        value_(_value) {
  }
  uint64_t name_id() const {
    return flatbuffers::EndianScalar(name_id_);
  }
  EMaterialPropTypeFb type() const {
    return static_cast<EMaterialPropTypeFb>(flatbuffers::EndianScalar(type_));
  }
  const vec3 &value() const {
    return value_;
  }
};
STRUCT_END(MaterialPropFb, 24);

struct NameFb FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_H = 4,
    VT_V = 6
  };
  uint64_t h() const {
    return GetField<uint64_t>(VT_H, 0);
  }
  bool KeyCompareLessThan(const NameFb *o) const {
    return h() < o->h();
  }
  int KeyCompareWithValue(uint64_t val) const {
    const auto key = h();
    if (key < val) {
      return -1;
    } else if (key > val) {
      return 1;
    } else {
      return 0;
    }
  }
  const flatbuffers::String *v() const {
    return GetPointer<const flatbuffers::String *>(VT_V);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_H) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_V) &&
           verifier.Verify(v()) &&
           verifier.EndTable();
  }
};

struct NameFbBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_h(uint64_t h) {
    fbb_.AddElement<uint64_t>(NameFb::VT_H, h, 0);
  }
  void add_v(flatbuffers::Offset<flatbuffers::String> v) {
    fbb_.AddOffset(NameFb::VT_V, v);
  }
  NameFbBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  NameFbBuilder &operator=(const NameFbBuilder &);
  flatbuffers::Offset<NameFb> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<NameFb>(end);
    return o;
  }
};

inline flatbuffers::Offset<NameFb> CreateNameFb(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t h = 0,
    flatbuffers::Offset<flatbuffers::String> v = 0) {
  NameFbBuilder builder_(_fbb);
  builder_.add_h(h);
  builder_.add_v(v);
  return builder_.Finish();
}

inline flatbuffers::Offset<NameFb> CreateNameFbDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t h = 0,
    const char *v = nullptr) {
  return CreateNameFb(
      _fbb,
      h,
      v ? _fbb.CreateString(v) : 0);
}

struct MeshFb FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_VERTICES = 4,
    VT_SUBMESHES = 6,
    VT_SUBSETS = 8,
    VT_SUBSET_INDICES = 10,
    VT_SUBSET_INDEX_TYPE = 12
  };
  const flatbuffers::Vector<uint8_t> *vertices() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_VERTICES);
  }
  const flatbuffers::Vector<const SubmeshFb *> *submeshes() const {
    return GetPointer<const flatbuffers::Vector<const SubmeshFb *> *>(VT_SUBMESHES);
  }
  const flatbuffers::Vector<const SubsetFb *> *subsets() const {
    return GetPointer<const flatbuffers::Vector<const SubsetFb *> *>(VT_SUBSETS);
  }
  const flatbuffers::Vector<uint8_t> *subset_indices() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_SUBSET_INDICES);
  }
  EIndexTypeFb subset_index_type() const {
    return static_cast<EIndexTypeFb>(GetField<uint32_t>(VT_SUBSET_INDEX_TYPE, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_VERTICES) &&
           verifier.Verify(vertices()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_SUBMESHES) &&
           verifier.Verify(submeshes()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_SUBSETS) &&
           verifier.Verify(subsets()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_SUBSET_INDICES) &&
           verifier.Verify(subset_indices()) &&
           VerifyField<uint32_t>(verifier, VT_SUBSET_INDEX_TYPE) &&
           verifier.EndTable();
  }
};

struct MeshFbBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_vertices(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> vertices) {
    fbb_.AddOffset(MeshFb::VT_VERTICES, vertices);
  }
  void add_submeshes(flatbuffers::Offset<flatbuffers::Vector<const SubmeshFb *>> submeshes) {
    fbb_.AddOffset(MeshFb::VT_SUBMESHES, submeshes);
  }
  void add_subsets(flatbuffers::Offset<flatbuffers::Vector<const SubsetFb *>> subsets) {
    fbb_.AddOffset(MeshFb::VT_SUBSETS, subsets);
  }
  void add_subset_indices(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> subset_indices) {
    fbb_.AddOffset(MeshFb::VT_SUBSET_INDICES, subset_indices);
  }
  void add_subset_index_type(EIndexTypeFb subset_index_type) {
    fbb_.AddElement<uint32_t>(MeshFb::VT_SUBSET_INDEX_TYPE, static_cast<uint32_t>(subset_index_type), 0);
  }
  MeshFbBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MeshFbBuilder &operator=(const MeshFbBuilder &);
  flatbuffers::Offset<MeshFb> Finish() {
    const auto end = fbb_.EndTable(start_, 5);
    auto o = flatbuffers::Offset<MeshFb>(end);
    return o;
  }
};

inline flatbuffers::Offset<MeshFb> CreateMeshFb(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> vertices = 0,
    flatbuffers::Offset<flatbuffers::Vector<const SubmeshFb *>> submeshes = 0,
    flatbuffers::Offset<flatbuffers::Vector<const SubsetFb *>> subsets = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> subset_indices = 0,
    EIndexTypeFb subset_index_type = EIndexTypeFb_UInt16) {
  MeshFbBuilder builder_(_fbb);
  builder_.add_subset_index_type(subset_index_type);
  builder_.add_subset_indices(subset_indices);
  builder_.add_subsets(subsets);
  builder_.add_submeshes(submeshes);
  builder_.add_vertices(vertices);
  return builder_.Finish();
}

inline flatbuffers::Offset<MeshFb> CreateMeshFbDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint8_t> *vertices = nullptr,
    const std::vector<const SubmeshFb *> *submeshes = nullptr,
    const std::vector<const SubsetFb *> *subsets = nullptr,
    const std::vector<uint8_t> *subset_indices = nullptr,
    EIndexTypeFb subset_index_type = EIndexTypeFb_UInt16) {
  return CreateMeshFb(
      _fbb,
      vertices ? _fbb.CreateVector<uint8_t>(*vertices) : 0,
      submeshes ? _fbb.CreateVector<const SubmeshFb *>(*submeshes) : 0,
      subsets ? _fbb.CreateVector<const SubsetFb *>(*subsets) : 0,
      subset_indices ? _fbb.CreateVector<uint8_t>(*subset_indices) : 0,
      subset_index_type);
}

struct MaterialFb FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_NAME_ID = 6,
    VT_PROPS = 8
  };
  uint32_t id() const {
    return GetField<uint32_t>(VT_ID, 0);
  }
  uint64_t name_id() const {
    return GetField<uint64_t>(VT_NAME_ID, 0);
  }
  bool KeyCompareLessThan(const MaterialFb *o) const {
    return name_id() < o->name_id();
  }
  int KeyCompareWithValue(uint64_t val) const {
    const auto key = name_id();
    if (key < val) {
      return -1;
    } else if (key > val) {
      return 1;
    } else {
      return 0;
    }
  }
  const flatbuffers::Vector<const MaterialPropFb *> *props() const {
    return GetPointer<const flatbuffers::Vector<const MaterialPropFb *> *>(VT_PROPS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           VerifyField<uint64_t>(verifier, VT_NAME_ID) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_PROPS) &&
           verifier.Verify(props()) &&
           verifier.EndTable();
  }
};

struct MaterialFbBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) {
    fbb_.AddElement<uint32_t>(MaterialFb::VT_ID, id, 0);
  }
  void add_name_id(uint64_t name_id) {
    fbb_.AddElement<uint64_t>(MaterialFb::VT_NAME_ID, name_id, 0);
  }
  void add_props(flatbuffers::Offset<flatbuffers::Vector<const MaterialPropFb *>> props) {
    fbb_.AddOffset(MaterialFb::VT_PROPS, props);
  }
  MaterialFbBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MaterialFbBuilder &operator=(const MaterialFbBuilder &);
  flatbuffers::Offset<MaterialFb> Finish() {
    const auto end = fbb_.EndTable(start_, 3);
    auto o = flatbuffers::Offset<MaterialFb>(end);
    return o;
  }
};

inline flatbuffers::Offset<MaterialFb> CreateMaterialFb(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t id = 0,
    uint64_t name_id = 0,
    flatbuffers::Offset<flatbuffers::Vector<const MaterialPropFb *>> props = 0) {
  MaterialFbBuilder builder_(_fbb);
  builder_.add_name_id(name_id);
  builder_.add_props(props);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<MaterialFb> CreateMaterialFbDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t id = 0,
    uint64_t name_id = 0,
    const std::vector<const MaterialPropFb *> *props = nullptr) {
  return CreateMaterialFb(
      _fbb,
      id,
      name_id,
      props ? _fbb.CreateVector<const MaterialPropFb *>(*props) : 0);
}

struct NodeFb FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_CHILD_IDS = 6,
    VT_MATERIAL_IDS = 8,
    VT_MESH_ID = 10,
    VT_NAME_ID = 12,
    VT_CULLING_TYPE = 14
  };
  uint32_t id() const {
    return GetField<uint32_t>(VT_ID, 0);
  }
  const flatbuffers::Vector<uint32_t> *child_ids() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_CHILD_IDS);
  }
  const flatbuffers::Vector<uint32_t> *material_ids() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_MATERIAL_IDS);
  }
  uint32_t mesh_id() const {
    return GetField<uint32_t>(VT_MESH_ID, 0);
  }
  uint64_t name_id() const {
    return GetField<uint64_t>(VT_NAME_ID, 0);
  }
  ECullingType culling_type() const {
    return static_cast<ECullingType>(GetField<uint32_t>(VT_CULLING_TYPE, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_CHILD_IDS) &&
           verifier.Verify(child_ids()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_MATERIAL_IDS) &&
           verifier.Verify(material_ids()) &&
           VerifyField<uint32_t>(verifier, VT_MESH_ID) &&
           VerifyField<uint64_t>(verifier, VT_NAME_ID) &&
           VerifyField<uint32_t>(verifier, VT_CULLING_TYPE) &&
           verifier.EndTable();
  }
};

struct NodeFbBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) {
    fbb_.AddElement<uint32_t>(NodeFb::VT_ID, id, 0);
  }
  void add_child_ids(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> child_ids) {
    fbb_.AddOffset(NodeFb::VT_CHILD_IDS, child_ids);
  }
  void add_material_ids(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> material_ids) {
    fbb_.AddOffset(NodeFb::VT_MATERIAL_IDS, material_ids);
  }
  void add_mesh_id(uint32_t mesh_id) {
    fbb_.AddElement<uint32_t>(NodeFb::VT_MESH_ID, mesh_id, 0);
  }
  void add_name_id(uint64_t name_id) {
    fbb_.AddElement<uint64_t>(NodeFb::VT_NAME_ID, name_id, 0);
  }
  void add_culling_type(ECullingType culling_type) {
    fbb_.AddElement<uint32_t>(NodeFb::VT_CULLING_TYPE, static_cast<uint32_t>(culling_type), 0);
  }
  NodeFbBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  NodeFbBuilder &operator=(const NodeFbBuilder &);
  flatbuffers::Offset<NodeFb> Finish() {
    const auto end = fbb_.EndTable(start_, 6);
    auto o = flatbuffers::Offset<NodeFb>(end);
    return o;
  }
};

inline flatbuffers::Offset<NodeFb> CreateNodeFb(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t id = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> child_ids = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> material_ids = 0,
    uint32_t mesh_id = 0,
    uint64_t name_id = 0,
    ECullingType culling_type = ECullingType_CullingOff) {
  NodeFbBuilder builder_(_fbb);
  builder_.add_name_id(name_id);
  builder_.add_culling_type(culling_type);
  builder_.add_mesh_id(mesh_id);
  builder_.add_material_ids(material_ids);
  builder_.add_child_ids(child_ids);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<NodeFb> CreateNodeFbDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t id = 0,
    const std::vector<uint32_t> *child_ids = nullptr,
    const std::vector<uint32_t> *material_ids = nullptr,
    uint32_t mesh_id = 0,
    uint64_t name_id = 0,
    ECullingType culling_type = ECullingType_CullingOff) {
  return CreateNodeFb(
      _fbb,
      id,
      child_ids ? _fbb.CreateVector<uint32_t>(*child_ids) : 0,
      material_ids ? _fbb.CreateVector<uint32_t>(*material_ids) : 0,
      mesh_id,
      name_id,
      culling_type);
}

struct SceneFb FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TRANSFORMS = 4,
    VT_NODES = 6,
    VT_MESHES = 8,
    VT_MATERIALS = 10,
    VT_TEXTURES = 12,
    VT_NAMES = 14
  };
  const flatbuffers::Vector<const TransformFb *> *transforms() const {
    return GetPointer<const flatbuffers::Vector<const TransformFb *> *>(VT_TRANSFORMS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<NodeFb>> *nodes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<NodeFb>> *>(VT_NODES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<MeshFb>> *meshes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<MeshFb>> *>(VT_MESHES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<MaterialFb>> *materials() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<MaterialFb>> *>(VT_MATERIALS);
  }
  const flatbuffers::Vector<const TextureFb *> *textures() const {
    return GetPointer<const flatbuffers::Vector<const TextureFb *> *>(VT_TEXTURES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<NameFb>> *names() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<NameFb>> *>(VT_NAMES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_TRANSFORMS) &&
           verifier.Verify(transforms()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_NODES) &&
           verifier.Verify(nodes()) &&
           verifier.VerifyVectorOfTables(nodes()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_MESHES) &&
           verifier.Verify(meshes()) &&
           verifier.VerifyVectorOfTables(meshes()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_MATERIALS) &&
           verifier.Verify(materials()) &&
           verifier.VerifyVectorOfTables(materials()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_TEXTURES) &&
           verifier.Verify(textures()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_NAMES) &&
           verifier.Verify(names()) &&
           verifier.VerifyVectorOfTables(names()) &&
           verifier.EndTable();
  }
};

struct SceneFbBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_transforms(flatbuffers::Offset<flatbuffers::Vector<const TransformFb *>> transforms) {
    fbb_.AddOffset(SceneFb::VT_TRANSFORMS, transforms);
  }
  void add_nodes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<NodeFb>>> nodes) {
    fbb_.AddOffset(SceneFb::VT_NODES, nodes);
  }
  void add_meshes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<MeshFb>>> meshes) {
    fbb_.AddOffset(SceneFb::VT_MESHES, meshes);
  }
  void add_materials(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<MaterialFb>>> materials) {
    fbb_.AddOffset(SceneFb::VT_MATERIALS, materials);
  }
  void add_textures(flatbuffers::Offset<flatbuffers::Vector<const TextureFb *>> textures) {
    fbb_.AddOffset(SceneFb::VT_TEXTURES, textures);
  }
  void add_names(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<NameFb>>> names) {
    fbb_.AddOffset(SceneFb::VT_NAMES, names);
  }
  SceneFbBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SceneFbBuilder &operator=(const SceneFbBuilder &);
  flatbuffers::Offset<SceneFb> Finish() {
    const auto end = fbb_.EndTable(start_, 6);
    auto o = flatbuffers::Offset<SceneFb>(end);
    return o;
  }
};

inline flatbuffers::Offset<SceneFb> CreateSceneFb(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<const TransformFb *>> transforms = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<NodeFb>>> nodes = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<MeshFb>>> meshes = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<MaterialFb>>> materials = 0,
    flatbuffers::Offset<flatbuffers::Vector<const TextureFb *>> textures = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<NameFb>>> names = 0) {
  SceneFbBuilder builder_(_fbb);
  builder_.add_names(names);
  builder_.add_textures(textures);
  builder_.add_materials(materials);
  builder_.add_meshes(meshes);
  builder_.add_nodes(nodes);
  builder_.add_transforms(transforms);
  return builder_.Finish();
}

inline flatbuffers::Offset<SceneFb> CreateSceneFbDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<const TransformFb *> *transforms = nullptr,
    const std::vector<flatbuffers::Offset<NodeFb>> *nodes = nullptr,
    const std::vector<flatbuffers::Offset<MeshFb>> *meshes = nullptr,
    const std::vector<flatbuffers::Offset<MaterialFb>> *materials = nullptr,
    const std::vector<const TextureFb *> *textures = nullptr,
    const std::vector<flatbuffers::Offset<NameFb>> *names = nullptr) {
  return CreateSceneFb(
      _fbb,
      transforms ? _fbb.CreateVector<const TransformFb *>(*transforms) : 0,
      nodes ? _fbb.CreateVector<flatbuffers::Offset<NodeFb>>(*nodes) : 0,
      meshes ? _fbb.CreateVector<flatbuffers::Offset<MeshFb>>(*meshes) : 0,
      materials ? _fbb.CreateVector<flatbuffers::Offset<MaterialFb>>(*materials) : 0,
      textures ? _fbb.CreateVector<const TextureFb *>(*textures) : 0,
      names ? _fbb.CreateVector<flatbuffers::Offset<NameFb>>(*names) : 0);
}

inline const fbxp::fb::SceneFb *GetSceneFb(const void *buf) {
  return flatbuffers::GetRoot<fbxp::fb::SceneFb>(buf);
}

inline const char *SceneFbIdentifier() {
  return "FBXP";
}

inline bool SceneFbBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, SceneFbIdentifier());
}

inline bool VerifySceneFbBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<fbxp::fb::SceneFb>(SceneFbIdentifier());
}

inline const char *SceneFbExtension() {
  return "fbxp";
}

inline void FinishSceneFbBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<fbxp::fb::SceneFb> root) {
  fbb.Finish(root, SceneFbIdentifier());
}

}  // namespace fb
}  // namespace fbxp

#endif  // FLATBUFFERS_GENERATED_SCENE_FBXP_FB_H_

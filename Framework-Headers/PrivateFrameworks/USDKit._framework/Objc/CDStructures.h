//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MISSING_TYPE;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ArAsset;

struct Handle {
    unsigned int value;
};

struct SdfAssetPath {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _assetPath;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _resolvedPath;
};

struct SdfLayerOffset {
    double _offset;
    double _scale;
};

struct SdfPath {
    struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> _primPart;
    struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> _propPart;
};

struct SdfTimeCode {
    double _time;
};

struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> {
    struct Handle _poolHandle;
};

struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> {
    struct Handle _poolHandle;
};

struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> {
    struct _Rep *_ptrAndBits;
};

struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::VtValue::_TypeInfo> {
    struct _TypeInfo *_ptrAndBits;
};

struct TfRefBase;

struct TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::Tf_Remnant> {
    struct TfRefBase *_field1;
};

struct TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage> {
    struct TfRefBase *_refBase;
};

struct TfToken {
    struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> _rep;
};

struct TfWeakPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage> {
    struct UsdStage *_field1;
    struct TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::Tf_Remnant> _field2;
};

struct UsdPrim {
    int _type;
    struct Usd_PrimDataHandle _prim;
    struct SdfPath _proxyPrimPath;
    struct TfToken _propName;
};

struct UsdPrimRange {
    struct Usd_PrimData *_begin;
    struct Usd_PrimData *_end;
    struct SdfPath _initProxyPrimPath;
    struct Usd_PrimFlagsPredicate _predicate;
    unsigned int _initDepth;
    BOOL _postOrder;
};

struct UsdPrimSiblingIterator {
    struct Usd_PrimData *m_iterator;
    struct SdfPath _proxyPrimPath;
    struct Usd_PrimFlagsPredicate _predicate;
};

struct UsdProperty {
    int _type;
    struct Usd_PrimDataHandle _prim;
    struct SdfPath _proxyPrimPath;
    struct TfToken _propName;
};

struct UsdStage;

struct Usd_PrimData;

struct Usd_PrimDataHandle {
    struct intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> _p;
};

struct Usd_PrimFlagsPredicate {
    struct bitset<13> _mask;
    struct bitset<13> _values;
    BOOL _negate;
};

struct VtValue {
    struct type _storage;
    struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::VtValue::_TypeInfo> _info;
};

struct _Rep;

struct _TypeInfo;

struct __shared_weak_count;

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct bitset<13> {
    unsigned long long __first_;
};

struct intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> {
    struct Usd_PrimData *px;
};

struct iterator {
    struct Usd_PrimData *m_iterator;
    struct UsdPrimRange *_range;
    struct SdfPath _proxyPrimPath;
    unsigned int _depth;
    BOOL _pruneChildrenFlag;
    BOOL _isPost;
};

struct iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator> {
    struct UsdPrimSiblingIterator m_Begin;
    struct UsdPrimSiblingIterator m_End;
};

struct shared_ptr<const char> {
    char *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<pxrInternal_v0_20__pxrReserved__usdkit__::ArAsset> {
    struct ArAsset *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct type {
    unsigned char __lx[8];
};

struct vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty>> {
    struct UsdProperty *__begin_;
    struct UsdProperty *__end_;
    struct __compressed_pair<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty>> {
        struct UsdProperty *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *_field1[4];
} CDStruct_f1db2b5e;

// Template types
typedef struct TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage> {
    struct TfRefBase *_refBase;
} TfRefPtr_8a332644;

typedef struct TfWeakPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage> {
    struct UsdStage *_field1;
    struct TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::Tf_Remnant> _field2;
} TfWeakPtr_163a6a2f;

typedef struct iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator> {
    struct UsdPrimSiblingIterator m_Begin;
    struct UsdPrimSiblingIterator m_End;
} iterator_range_68be7782;

typedef struct vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty>> {
    struct UsdProperty *__begin_;
    struct UsdProperty *__end_;
    struct __compressed_pair<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty>> {
        struct UsdProperty *__value_;
    } __end_cap_;
} vector_6f2ba469;

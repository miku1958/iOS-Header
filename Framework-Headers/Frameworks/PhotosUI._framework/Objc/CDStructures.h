//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct NSArray {
    Class _field1;
};

struct NSObject {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct PXDisplayVelocity {
    double x;
    double y;
    double scale;
    double rotation;
};

struct PXFaceTileImageParams {
    struct CGSize targetSize;
    unsigned long long cropFactor;
    BOOL round;
    BOOL cropBounded;
};

struct PXMagazineOrigin {
    long long _field1;
    long long _field2;
};

struct PXMagazineRect {
    struct PXMagazineOrigin _field1;
    struct PXMagazineSize _field2;
};

struct PXMagazineSize {
    long long _field1;
    long long _field2;
};

struct PXMemoryFontsSpecIdentifier {
    long long _field1;
    long long _field2;
    long long _field3;
    double _field4;
};

struct PXProtectedTileState {
    BOOL _field1;
    struct PXTileIdentifier _field2;
    struct PXTileIdentifier _field3;
    struct PXTileIdentifier _field4;
    unsigned long long _field5;
    BOOL _field6;
    struct PXTileGeometry _field7;
    struct PXTileGeometry _field8;
    BOOL _field9;
    BOOL _field10;
    void *_field11;
    void *_field12;
    void *_field13;
    unsigned long long _field14;
};

struct PXSimpleIndexPath {
    unsigned long long dataSourceIdentifier;
    long long section;
    long long item;
    long long subitem;
};

struct PXTileGeometry {
    struct CGRect frame;
    struct CGPoint center;
    struct CGSize size;
    struct CGAffineTransform transform;
    double alpha;
    double zPosition;
    BOOL hidden;
    struct CGSize contentSize;
    struct CGRect contentsRect;
    void *coordinateSpaceIdentifier;
};

struct PXTileIdentifier {
    unsigned long long length;
    unsigned long long index[10];
};

struct PXTileInfo {
    long long index;
    struct CGSize imageSize;
    struct CGSize minimumSize;
    BOOL hasCaption;
    BOOL isBatchStart;
};

struct PXTileState {
    BOOL _field1;
    struct PXTileIdentifier _field2;
    struct PXTileIdentifier _field3;
    struct PXTileIdentifier _field4;
    unsigned long long _field5;
    BOOL _field6;
    struct PXTileGeometry _field7;
    struct PXTileGeometry _field8;
    BOOL _field9;
    BOOL _field10;
    void *_field11;
    void *_field12;
    void *_field13;
    unsigned long long _field14;
};

struct PXViewSpecDescriptor {
    long long _field1;
    unsigned long long _field2;
    struct CGSize _field3;
};

struct UIColor {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIFont {
    Class _field1;
};

struct UIOffset {
    double _field1;
    double _field2;
};

struct _LayoutContext {
    struct UIEdgeInsets contentInsets;
    struct CGSize itemSize;
    struct CGSize interitemSpacing;
    struct CGSize size;
    unsigned long long numberOfColumns;
    unsigned long long numberOfRows;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PXLRUMemoryCacheList {
    unsigned long long _field1;
    struct _PXLRUMemoryCacheListElement *_field2;
    struct _PXLRUMemoryCacheListElement *_field3;
};

struct _PXLRUMemoryCacheListElement {
    id _field1;
    struct _PXLRUMemoryCacheListElement *_field2;
    struct _PXLRUMemoryCacheListElement *_field3;
};

struct _PXLayoutGeometry {
    long long _field1;
    struct CGPoint _field2;
    struct CGSize _field3;
    struct CGAffineTransform _field4;
    float _field5;
    long long _field6;
};

struct _PXValueAnimationSpec {
    long long type;
    double epsilon;
    double stiffness;
    double dampingRatio;
    double initialVelocity;
};

struct __hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>;

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<PXTileIdentifier, unsigned long, std::__1::hash<PXTileIdentifier>, std::__1::equal_to<PXTileIdentifier>, std::__1::allocator<std::__1::pair<const PXTileIdentifier, unsigned long>>> {
    struct __hash_table<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true>, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true>, std::__1::allocator<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct CLLocationCoordinate2D _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_26e8d939;

// Ambiguous groups
typedef struct {
    BOOL button;
} CDStruct_6d279c03;

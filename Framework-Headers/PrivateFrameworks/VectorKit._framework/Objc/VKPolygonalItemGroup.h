//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet, VKVectorTile;

__attribute__((visibility("hidden")))
@interface VKPolygonalItemGroup : NSObject
{
    unsigned int _cullingMask;
    struct MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo> _fillMeshInfo;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _fillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _strokeCullingGroups;
    struct unordered_map<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>, std::__1::hash<SectionKey>, std::__1::equal_to<std::__1::pair<void *, unsigned long>>, std::__1::allocator<std::__1::pair<const std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>>>> _polygonEdges;
    struct Box<float, 3> _boundingBox;
    VKVectorTile *_tile;
    float _contentScale;
    struct vector<ggl::RenderItemBatcher, std::__1::allocator<ggl::RenderItemBatcher>> _fillRenderItemBatchers;
    struct vector<ggl::RenderItemBatcher, std::__1::allocator<ggl::RenderItemBatcher>> _strokeRenderItemBatchers;
    Matrix_8746f91e _centroid;
    NSMutableOrderedSet *_attributeSets;
    vector_2cb66512 _styleQueries;
    shared_ptr_a3c46825 _styleManager;
    struct PolygonRouteAttributes _routeAttributes;
    BOOL _isFixedSize;
    BOOL _stylesUpToDate;
    BOOL _hasRouteAttributes;
}

@property (readonly, nonatomic) NSOrderedSet *attributeSets;
@property (readonly, nonatomic) Matrix_8746f91e centroid; // @synthesize centroid=_centroid;
@property (readonly, nonatomic) unsigned int cullingMask; // @synthesize cullingMask=_cullingMask;
@property (readonly, nonatomic) vector_3f17ee4c *fillMeshes;
@property (readonly, nonatomic) BOOL isFixedSize; // @synthesize isFixedSize=_isFixedSize;
@property (readonly, nonatomic) const Matrix_811b2232 *maxPoint;
@property (readonly, nonatomic) const Matrix_811b2232 *origin;
@property (readonly, nonatomic) Matrix_811b2232 size;
@property (readonly, nonatomic) vector_2cb66512 *styleQueries;
@property (readonly, nonatomic) float tileZoom;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRangesToFillRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (BOOL)canAcceptPolygon:(CDStruct_6ac9d495 *)arg1;
- (void)clearRouteAttributes;
- (void)computeUnitVectors:(vector_1a7ef145 *)arg1 forPoints:(Matrix_8746f91e *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)didFinishAddingData;
- (unsigned char)indexForGeoFeatureAttributes:(id)arg1;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee *)arg1 tile:(id)arg2 fixedAroundCentroid:(const Matrix_8746f91e *)arg3 contentScale:(float)arg4;
- (unsigned char)maxAttributeSetsPerGroup;
- (void)setRouteAttributes:(const struct PolygonRouteAttributes *)arg1;
- (void)updateCachedStyles;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;

@end

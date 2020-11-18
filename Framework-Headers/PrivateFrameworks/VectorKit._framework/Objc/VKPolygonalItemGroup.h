//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface VKPolygonalItemGroup : NSObject
{
    unsigned int _cullingMask;
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> _fillMeshInfo;
    vector_74364602 _fillMeshes;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _fillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _strokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueEndCapCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueWallHorizontalStrokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueWallVerticalStrokeCullingGroups;
    struct unordered_map<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>, std::__1::hash<SectionKey>, std::__1::equal_to<std::__1::pair<void *, unsigned long>>, std::__1::allocator<std::__1::pair<const std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>>>> _polygonEdges;
    unordered_set_bb7a56cc _featureIds;
    struct Box<float, 3> _boundingBox;
    float _tileZoom;
    float _contentScale;
    struct vector<ggl::Batcher, std::__1::allocator<ggl::Batcher>> _fillRenderItemBatchers;
    struct vector<ggl::Batcher, std::__1::allocator<ggl::Batcher>> _strokeRenderItemBatchers;
    Matrix_8746f91e _centroid;
    NSMutableOrderedSet *_attributeSets;
    struct unordered_map<StyleQueryOverride, std::__1::vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, (anonymous namespace)::StyleQueryOverrideHash, std::__1::equal_to<StyleQueryOverride>, std::__1::allocator<std::__1::pair<const StyleQueryOverride, std::__1::vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>>> _styleQueries;
    shared_ptr_a3c46825 _styleManager;
    struct PolygonRouteAttributes _routeAttributes;
    BOOL _isFixedSize;
    BOOL _stylesUpToDate;
    BOOL _hasRouteAttributes;
}

@property (readonly, nonatomic) NSOrderedSet *attributeSets;
@property (readonly, nonatomic) Matrix_8746f91e centroid; // @synthesize centroid=_centroid;
@property (readonly, nonatomic) unsigned int cullingMask; // @synthesize cullingMask=_cullingMask;
@property (readonly, nonatomic) const unordered_set_bb7a56cc *featureIds;
@property (readonly, nonatomic) vector_74364602 *fillMeshes;
@property (readonly, nonatomic) BOOL isFixedSize; // @synthesize isFixedSize=_isFixedSize;
@property (readonly, nonatomic) const Matrix_811b2232 *maxPoint;
@property (readonly, nonatomic) const Matrix_811b2232 *origin;
@property (readonly, nonatomic) Matrix_811b2232 size;
@property (readonly, nonatomic) float tileZoom;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)canAcceptPolygon:(CDStruct_887e071c *)arg1;
- (void)clearRouteAttributes;
- (const MultiRange_4bdc93a8 *)commitRangesToFillRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_5fd0b804)arg4;
- (const MultiRange_4bdc93a8 *)commitRangesToHorizontalVenueWallStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_5fd0b804)arg4;
- (const MultiRange_4bdc93a8 *)commitRangesToVenueWallEndCapRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToVenueWallRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToVerticalVenueWallStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)dealloc;
- (void)didFinishAddingData;
- (BOOL)hasFeatureId:(unsigned long long)arg1;
- (unsigned char)indexForGeoFeatureAttributes:(id)arg1;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const Matrix_8746f91e *)arg3 contentScale:(float)arg4;
- (unsigned char)maxAttributeSetsPerGroup;
- (void)setRouteAttributes:(const struct PolygonRouteAttributes *)arg1;
- (vector_b346fa92 *)styleQueries:(const struct StyleQueryOverride *)arg1;
- (void)updateCachedStyles;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;

@end

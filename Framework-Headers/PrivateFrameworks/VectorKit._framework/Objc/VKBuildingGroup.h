//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKPolygonalItemGroup.h>

__attribute__((visibility("hidden")))
@interface VKBuildingGroup : VKPolygonalItemGroup
{
    struct MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo> _strokeMeshInfo;
    struct MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo> _fillMeshInfoForPointyRoofs;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> _extrusionFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _extrusionStrokeMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> _pointyRoofFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _pointyRoofStrokeMeshVendor;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _extrusionFillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _extrusionStrokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _fillCullingGroupsForPointyRoofs;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _pointyRoofFillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _pointyRoofStrokeCullingGroups;
    vector_2cb66512 _styleQueries;
    vector_2cb66512 _flatRoofStyleQueries;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addBuilding:(CDStruct_de1a80f1 *)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3 accessor:(struct ResourceAccessor *)arg4 triangulator:(id)arg5 prepareExtrusion:(BOOL)arg6 forRoofStyle:(unsigned char)arg7 scaleThreshold:(float)arg8;
- (void)addExtrusionForBuilding:(CDStruct_de1a80f1 *)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3 triangulator:(id)arg4;
- (BOOL)addPointyRoofForBuilding:(CDStruct_de1a80f1 *)arg1 buildingModel:(unsigned char)arg2 scaleThreshold:(float)arg3 styleIndex:(float)arg4;
- (void)addRangesToExtrusionFillRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToExtrusionStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToPointyRoofFillRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToPointyRoofStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToPointyRoofTopRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (BOOL)canConstructPointyRoofForPolygon:(CDStruct_6ac9d495 *)arg1 building:(CDStruct_de1a80f1 *)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4;
- (void)didFinishAddingData;
- (const MeshVendor_396e6e4f *)extrusionFillMeshVendor;
- (const MeshVendor_8027e961 *)extrusionStrokeMeshVendor;
- (vector_3f17ee4c *)fillMeshesForPointyRoofs;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee *)arg1 tile:(id)arg2 fixedAroundCentroid:(const Matrix_8746f91e *)arg3 contentScale:(float)arg4;
- (unsigned char)maxAttributeSetsPerGroup;
- (const MeshVendor_c6d8e5cd *)pointyRoofFillMeshVendor;
- (const MeshVendor_8027e961 *)pointyRoofStrokeMeshVendor;
- (void)prepareForBuilding:(CDStruct_de1a80f1 *)arg1 forRoofStyle:(unsigned char)arg2 scaleThreshold:(float)arg3;
- (vector_8a1db405 *)strokeMeshes;
- (vector_2cb66512 *)styleQueriesForPointyRoofs:(BOOL)arg1;
- (void)updateWithStyleManager:(shared_ptr_a3c46825 *)arg1;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLObject.h>

@class MISSING_TYPE;

@interface MDLVoxelArray : MDLObject
{
    struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> _voxels;
    struct {
        MISSING_TYPE *minimumExtent__maximumExtent;
    } _extent;
    struct MDLAABB _bounds;
    float _voxelExtent;
    struct MortonCode mortonCoder;
    struct unique_ptr<ModelIO::Octree, std::__1::default_delete<ModelIO::Octree>> _octreeData;
    BOOL _levelSet;
    float _interiorThickness;
    float _exteriorThickness;
    MISSING_TYPE *_originatingOffset;
}

@property (readonly, nonatomic) struct boundingBox;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL isValidSignedShellField;
@property (nonatomic) float shellFieldExteriorThickness; // @synthesize shellFieldExteriorThickness=_exteriorThickness;
@property (nonatomic) float shellFieldInteriorThickness; // @synthesize shellFieldInteriorThickness=_interiorThickness;
@property (readonly, nonatomic) struct voxelIndexExtent; // @synthesize voxelIndexExtent=_extent;

- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_3203cf93)boxesPerLayer;
- (id)coarseMesh;
- (id)coarseMeshUsingAllocator:(id)arg1;
- (id)coarseVoxelMeshWithStyle:(unsigned long long)arg1;
- (void)convertToSignedShellField;
- (void)differenceWithVoxels:(id)arg1;
- (void)dilateNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2;
- (void)erodeNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2;
- (MISSING_TYPE *)indexOfSpatialLocation: /* Error: Ran out of types for this method. */;
- (id)init;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3;
- (id)initWithData:(id)arg1 boundingBox:(struct)arg2 voxelExtent:(float)arg3;
- (void)intersectWithVoxels:(id)arg1;
- (id)meshUsingAllocator:(id)arg1;
- (void)recalculateExtents;
- (void)setVoxelAtIndex: /* Error: Ran out of types for this method. */;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3;
- (MISSING_TYPE *)spatialLocationOfIndex: /* Error: Ran out of types for this method. */;
- (void)unionWithVoxels:(id)arg1;
- (struct)voxelBoundingBoxAtIndex: /* Error: Ran out of types for this method. */;
- (BOOL)voxelExistsAtIndex:(BOOL)arg1 allowAnyX:(BOOL)arg2 allowAnyY:(BOOL)arg3 allowAnyZ:(BOOL)arg4 allowAnyShell: /* Error: Ran out of types for this method. */;
- (id)voxelIndices;
- (id)voxelsWithinExtent:(struct)arg1;

@end


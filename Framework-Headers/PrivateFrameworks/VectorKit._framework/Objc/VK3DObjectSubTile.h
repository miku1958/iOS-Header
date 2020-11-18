//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOVectorTile, VKSharedResources;

__attribute__((visibility("hidden")))
@interface VK3DObjectSubTile : NSObject
{
    vector_fbcf581f _objectGroups;
    GEOVectorTile *_modelTile;
    shared_ptr_a3c46825 _styleManager;
    VKSharedResources *_sharedResources;
    long long _vectorType;
    double _contentScale;
    struct vector<VKBuildingHeightMap, std::__1::allocator<VKBuildingHeightMap>> _heights;
}

@property (nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property (strong, nonatomic) GEOVectorTile *modelTile; // @synthesize modelTile=_modelTile;
@property (readonly, nonatomic) vector_fbcf581f *objectGroups;
@property (strong, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
@property (nonatomic) shared_ptr_a3c46825 styleManager; // @synthesize styleManager=_styleManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_createMeshForObjects:(CDStruct_2da3f85a *)arg1 count:(unsigned long long)arg2;
- (void)_read3DObjects:(vector_25c79282 *)arg1 fromDiskForTileKey:(const struct _GEOTileKey *)arg2;
- (void)_replaceThreeBuldingsInModelTile:(id)arg1 objects:(vector_25c79282 *)arg2;
- (void)dealloc;
- (void)fillShadowAreasInContext:(struct CGContext *)arg1;
- (BOOL)heightAtPoint:(const Matrix_8746f91e *)arg1 outZ:(float *)arg2;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 styleManager:(shared_ptr_a3c46825)arg3 sharedResources:(id)arg4 contentScale:(double)arg5;
- (Box_3fb92e00)shadowBounds;

@end


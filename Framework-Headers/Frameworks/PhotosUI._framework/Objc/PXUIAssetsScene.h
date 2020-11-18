//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsScene.h>

#import <PhotosUICore/PXTilingControllerPreheatHandler-Protocol.h>

@class NSMapTable, NSMutableSet, NSString, PXDebugAssetBadgeManager, PXUIMediaProvider, PXUIScrollViewController;

@interface PXUIAssetsScene : PXAssetsScene <PXTilingControllerPreheatHandler>
{
    NSMutableSet *_tilesInUse;
    NSMapTable *_imageRequesterByAssetReference;
    struct {
        BOOL preheating;
    } _needsUpdateFlags;
    BOOL __supressingColorSettings;
    PXDebugAssetBadgeManager *__debugBadgeManager;
}

@property (strong, nonatomic, setter=_setDebugBadgeManager:) PXDebugAssetBadgeManager *_debugBadgeManager; // @synthesize _debugBadgeManager=__debugBadgeManager;
@property (nonatomic, setter=_setSupressingColorSettings:) BOOL _supressingColorSettings; // @synthesize _supressingColorSettings=__supressingColorSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @dynamic mediaProvider;
@property (readonly, nonatomic) PXUIScrollViewController *scrollViewController;
@property (readonly) Class superclass;

+ (void)preloadResources;
- (void).cxx_destruct;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3;
- (id)_imageRequesterForAssetReference:(id)arg1;
- (id)_imageRequesterForIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(id)arg2;
- (void)_invalidatePreheating;
- (void)_registerDefaultTiles;
- (void)_transitionImageRequestersToDataSource:(id)arg1;
- (void)_updatePreheatingIfNeeded;
- (id)badgeManager;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)dealloc;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5;
- (BOOL)needsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)updateIfNeeded;
- (void)willTransitionToDataSource:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXTilingControllerZoomAnimationCoordinator, PXTilingLayout;
@protocol PXZoomAnimationContext;

@protocol PXTilingControllerZoomAnimationCoordinatorDelegate <NSObject>
- (void)tilingControllerZoomAnimationCoordinator:(PXTilingControllerZoomAnimationCoordinator *)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(PXTilingLayout *)arg3 zoomAnimationContext:(id<PXZoomAnimationContext>)arg4 usingBlock:(void (^)(struct PXTileIdentifier, PXTileZoomAnimationOptions *))arg5;
@end


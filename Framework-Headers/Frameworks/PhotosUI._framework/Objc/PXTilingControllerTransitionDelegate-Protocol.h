//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXTilingChange, PXTilingController;
@protocol PXTileIdentifierConverter, PXTileTransitionAnimationCoordinator;

@protocol PXTilingControllerTransitionDelegate <NSObject>

@optional
- (void)tilingController:(PXTilingController *)arg1 prepareForChange:(PXTilingChange *)arg2;
- (id<PXTileIdentifierConverter>)tilingController:(PXTilingController *)arg1 tileIdentifierConverterForChange:(PXTilingChange *)arg2;
- (id<PXTileTransitionAnimationCoordinator>)tilingController:(PXTilingController *)arg1 transitionAnimationCoordinatorForChange:(PXTilingChange *)arg2;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUTileController, PUTilingView;

@protocol PUTilingViewTileUseDelegate <NSObject>

@optional
- (void)tilingView:(PUTilingView *)arg1 didStopUsingTileController:(PUTileController *)arg2;
- (void)tilingView:(PUTilingView *)arg1 willStartUsingTileController:(PUTileController *)arg2;
- (void)tilingViewDidEndAnimatingTileControllers:(PUTilingView *)arg1;
- (void)tilingViewDidUpdateTileControllers:(PUTilingView *)arg1;
@end


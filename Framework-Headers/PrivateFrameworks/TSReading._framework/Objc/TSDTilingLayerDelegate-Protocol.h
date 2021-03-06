//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/CALayerDelegate-Protocol.h>

@class TSDTileProvider, TSDTilingBackgroundQueue, TSDTilingLayer;

@protocol TSDTilingLayerDelegate <CALayerDelegate>

@optional
- (BOOL)canDrawTilingLayerInBackground:(TSDTilingLayer *)arg1;
- (void)didEndDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1 withToken:(id)arg2;
- (BOOL)mustDrawTilingLayerOnMainThread:(TSDTilingLayer *)arg1;
- (TSDTileProvider *)providerForTilingLayer:(TSDTilingLayer *)arg1;
- (TSDTilingBackgroundQueue *)queueForDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1;
- (BOOL)shouldBeginDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1 returningToken:(id *)arg2 andQueue:(id *)arg3;
- (BOOL)shouldLayoutTilingLayer:(TSDTilingLayer *)arg1;
- (void)tilingLayerWillSetNeedsDisplay:(TSDTilingLayer *)arg1;
- (void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(TSDTilingLayer *)arg1;
- (void)tilingLayerWillSetNeedsLayout:(TSDTilingLayer *)arg1;
- (struct CGRect)visibleBoundsForTilingLayer:(TSDTilingLayer *)arg1;
@end


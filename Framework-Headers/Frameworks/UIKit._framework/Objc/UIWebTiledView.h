//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class WAKWindow;

@interface UIWebTiledView : UIView
{
    WAKWindow *_wakWindow;
    int _inGestureType;
    int _tilingArea;
    BOOL _didFirstTileLayout;
    BOOL _layoutTilesInMainThread;
    BOOL _tilingModeIsLocked;
    BOOL _allowsPaintingAndScriptsWhilePanning;
    BOOL _editingTilingModeEnabled;
}

- (void)_didScroll;
- (void)_screenChanged:(id)arg1;
- (void)_updateForScreen:(id)arg1;
- (unsigned int)adjustedMaxTileCount;
- (BOOL)allowsPaintingAndScriptsWhilePanning;
- (void)dealloc;
- (void)drawImageIntoTiles:(struct CGImage *)arg1;
- (BOOL)drawsGrid;
- (void)dumpTiles;
- (BOOL)editingTilingModeEnabled;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isTilingEnabled;
- (BOOL)keepsZoomedOutTiles;
- (void)layoutSubviews;
- (BOOL)layoutTilesInMainThread;
- (void)layoutTilesNow;
- (void)layoutTilesNowForRect:(struct CGRect)arg1;
- (void)layoutTilesNowOnWebThread;
- (void)lockTilingMode;
- (BOOL)logsTilingChanges;
- (unsigned int)maxTileCount;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)removeForegroundTiles;
- (void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)arg1;
- (void)setDrawsGrid:(BOOL)arg1;
- (void)setEditingTilingModeEnabled:(BOOL)arg1;
- (void)setInGesture:(int)arg1;
- (void)setKeepsZoomedOutTiles:(BOOL)arg1;
- (void)setLayoutTilesInMainThread:(BOOL)arg1;
- (void)setLogsTilingChanges:(BOOL)arg1;
- (void)setMaxTileCount:(unsigned int)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)setTileDrawingEnabled:(BOOL)arg1;
- (void)setTileSize:(struct CGSize)arg1;
- (void)setTilesOpaque:(BOOL)arg1;
- (void)setTilingArea:(int)arg1;
- (void)setTilingEnabled:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setWAKWindow:(id)arg1;
- (BOOL)tileDrawingEnabled;
- (struct CGSize)tileSize;
- (BOOL)tilesOpaque;
- (int)tilingArea;
- (void)unlockTilingMode;
- (void)updateTilingMode;
- (struct CGRect)visibleRect;
- (id)wakWindow;
- (void)willMoveToWindow:(id)arg1;

@end

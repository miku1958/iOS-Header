//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIDrawsTextInRect-Protocol.h>
#import <UIKitCore/_UITextTiledLayerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, _UISceneDisplayLink, _UITextTiledLayer;
@protocol _UITextCanvasViewContext;

__attribute__((visibility("hidden")))
@interface _UITextCanvasView : UIView <_UITextTiledLayerDelegate, _UIDrawsTextInRect>
{
    NSMutableSet *_ghostedRanges;
    NSMutableSet *_invisibleRanges;
    NSArray *_maskedRects;
    _UISceneDisplayLink *_sceneDisplayLink;
    id<_UITextCanvasViewContext> _context;
}

@property (nonatomic, setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
@property (weak, nonatomic) id<_UITextCanvasViewContext> context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) _UITextTiledLayer *layer; // @dynamic layer;
@property (nonatomic) double maxTileHeight;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTilingEnabled) BOOL tilingEnabled;

+ (Class)layerClass;
- (void).cxx_destruct;
- (BOOL)_enableAutoConstraining;
- (id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(struct CGRect)arg2;
- (void)_updateTilingViewportBookkeeping;
- (void)_updateTilingViewportLayer;
- (void)_windowDidMoveToScreen;
- (void)addGhostedRange:(struct _NSRange)arg1;
- (void)addInvisibleRange:(struct _NSRange)arg1;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)removeAllGhostedRanges;
- (void)removeInvisibleRange:(struct _NSRange)arg1;
- (void)resumeTiling;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)suspendTiling;
- (void)willMoveToWindow:(id)arg1;

@end

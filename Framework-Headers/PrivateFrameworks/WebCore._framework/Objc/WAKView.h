//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKResponder.h>

@class NSMutableSet;

@interface WAKView : WAKResponder
{
    struct _WKViewContext viewContext;
    struct _WKView *viewRef;
    NSMutableSet *subviewReferences;
    BOOL _isHidden;
    BOOL _drawsOwnDescendants;
}

+ (void)_setInterpolationQuality:(int)arg1;
+ (id)_wrapperForViewRef:(struct _WKView *)arg1;
+ (id)focusView;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_drawRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 lockFocus:(BOOL)arg3;
- (BOOL)_handleResponderCall:(int)arg1;
- (id)_initWithViewRef:(struct _WKView *)arg1;
- (void)_lockFocusViewInContext:(struct CGContext *)arg1;
- (BOOL)_selfHandleEvent:(id)arg1;
- (void)_setDrawsOwnDescendants:(BOOL)arg1;
- (id)_subviewReferences;
- (void)_unlockFocusViewInContext:(struct CGContext *)arg1;
- (struct _WKView *)_viewRef;
- (BOOL)accessibilityIsIgnored;
- (void)addSubview:(id)arg1;
- (unsigned int)autoresizingMask;
- (struct CGRect)bounds;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)display;
- (void)displayIfNeeded;
- (void)displayRect:(struct CGRect)arg1;
- (void)displayRectIgnoringOpacity:(struct CGRect)arg1;
- (void)displayRectIgnoringOpacity:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)frameSizeChanged;
- (void)handleEvent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)inLiveResize;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateGState;
- (BOOL)isDescendantOf:(id)arg1;
- (BOOL)isHiddenOrHasHiddenAncestor;
- (id)lastScrollableAncestor;
- (void)layout;
- (void)layoutIfNeeded;
- (void)lockFocus;
- (BOOL)mouse:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (BOOL)needsDisplay;
- (BOOL)needsPanelToBecomeKey;
- (id)nextKeyView;
- (id)nextResponder;
- (id)nextValidKeyView;
- (id)previousKeyView;
- (id)previousValidKeyView;
- (void)releaseGState;
- (void)removeFromSuperview;
- (float)scale;
- (void)scrollPoint:(struct CGPoint)arg1;
- (BOOL)scrollRectToVisible:(struct CGRect)arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setNextKeyView:(id)arg1;
- (void)setScale:(float)arg1;
- (id)subviews;
- (id)superview;
- (void)unlockFocus;
- (void)viewDidMoveToWindow;
- (void)viewWillDraw;
- (struct CGRect)visibleRect;
- (void)willRemoveSubview:(id)arg1;
- (id)window;

@end


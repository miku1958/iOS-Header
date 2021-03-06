//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSTimer, UIWebDocumentView, UIWebSelection, UIWebSelectionGraph, UIWebSelectionHandle, UIWebSelectionNode, UIWebSelectionOutline, UIWebTextRangeView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionView : UIView
{
    UIView *_center;
    struct CGRect _selectionFrame;
    UIWebSelectionHandle *_top;
    UIWebSelectionHandle *_right;
    UIWebSelectionHandle *_bottom;
    UIWebSelectionHandle *_left;
    UIWebSelectionOutline *_outline;
    UIWebTextRangeView *_textRangeView;
    UIWebDocumentView *_documentView;
    UIWebSelectionNode *_selectionNode;
    UIWebSelectionGraph *_selectionGraph;
    double _growThreshold;
    double _shrinkThreshold;
    struct {
        UIWebSelectionHandle *scrollingHandle;
        double startTime;
        int direction;
        NSTimer *timer;
    } _autoscrollData;
    struct {
        UIWebSelectionHandle *start;
        UIWebSelectionHandle *end;
        struct CGSize startingOffset;
        BOOL anchorAtStart;
        struct {
            BOOL flipPossible;
            BOOL rectsChanged;
            struct CGRect originalSelectionRect;
        } flipData;
    } _rangedSelectionData;
    int _nestedLayoutCalls;
    BOOL _calloutBarIsHiddenBeforeRotation;
    BOOL _rotating;
    int _selectionInFixedPosition;
    BOOL _creatingSelection;
}

@property (nonatomic) BOOL creatingSelection; // @synthesize creatingSelection=_creatingSelection;
@property (readonly, nonatomic) UIWebSelection *selection;
@property (nonatomic) struct CGRect selectionFrame;
@property (strong, nonatomic) UIWebSelectionNode *selectionNode; // @synthesize selectionNode=_selectionNode;

- (void)_didScroll;
- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg1;
- (id)activeHandle;
- (BOOL)activelyManipulatingTextSelectionHandle;
- (void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2;
- (int)autoscrollDirectionsForHandle:(id)arg1;
- (void)autoscrollTimerFired:(id)arg1;
- (void)calloutBar:(id)arg1 selectedCommand:(id)arg2;
- (BOOL)canFlip;
- (void)clearSelection;
- (void)considerFlipping;
- (void)dealloc;
- (void)didEndScrollingOrZoomingPage;
- (void)didEndScrollingOverflow;
- (void)endSelectionCreationWithPoint:(struct CGPoint)arg1;
- (struct CGRect)fetchSelectionBoundingRect;
- (struct CGRect)fetchSelectionBoundingTextSelectionRect;
- (id)handleWithPosition:(int)arg1;
- (id)handles;
- (void)hideControls;
- (void)hideControlsBeforeRotation;
- (void)hideCopyCallout;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithWebDocumentView:(id)arg1;
- (BOOL)isHorizontalWritingMode;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (id)nodeInPristineGraphAtPoint:(struct CGPoint)arg1;
- (void)onAfterScrollOrZoomShowingSelection:(BOOL)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(BOOL)arg1;
- (void)removeFromSuperview;
- (void)resetSelection;
- (void)scaleChanged;
- (id)scroller;
- (struct CGRect)selectionBoundingRect;
- (void)selectionChanged;
- (void)setOrientationOfMagnifier:(id)arg1 forHandleInText:(id)arg2;
- (void)setSelectionFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)shiftWebRangeSelectionAnimationDidStop;
- (void)showControls;
- (void)showControlsAfterRotation;
- (void)showCopyCalloutWithAnimation:(BOOL)arg1;
- (void)showRangeSelection;
- (void)startSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)stopAnyAutoscrolling;
- (id)tintView;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (void)updateAutoscrollForHandle:(id)arg1;
- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
- (void)updateFrameAndHandlesWithAnimation:(BOOL)arg1;
- (BOOL)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (void)updateSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)updateSelectionRects;
- (void)updateTextRangeViewSelectionRects;
- (struct CGRect)visibleRect;
- (void)willStartScrollingOrZoomingPage;
- (void)willStartScrollingOverflow;

@end


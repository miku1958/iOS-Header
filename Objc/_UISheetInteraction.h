//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/_UIScrollViewScrollableAncestor-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIPanGestureRecognizer, UIView, UIViewPropertyAnimator;
@protocol UITimingCurveProvider, _UISheetInteractionDelegate;

@interface _UISheetInteraction : NSObject <_UIScrollViewScrollableAncestor, UIGestureRecognizerDelegate, UIInteraction>
{
    BOOL _enabled;
    BOOL _horizontalRubberBandingEnabled;
    BOOL _verticalPanningEnabled;
    NSArray *_detents;
    long long _indexOfCurrentDetent;
    double _rubberBandExtentBeyondMinimumOffset;
    double _rubberBandExtentBeyondMaximumOffset;
    id<UITimingCurveProvider> _timingCurve;
    id<_UISheetInteractionDelegate> _delegate;
    UIView *_view;
    NSMutableArray *_registeredPanGestureRecognizers;
    UIPanGestureRecognizer *_backgroundGestureRecognizer;
    id _dragSource;
    double _offsetWhenGestureBegan;
    double _unconstrainedOffset;
    UIViewPropertyAnimator *_propertyAnimator;
    struct CGPoint _currentOffset;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) struct CGPoint attachmentPoint;
@property (readonly, nonatomic) UIPanGestureRecognizer *backgroundGestureRecognizer; // @synthesize backgroundGestureRecognizer=_backgroundGestureRecognizer;
@property (nonatomic) struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UISheetInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *detents; // @synthesize detents=_detents;
@property (strong, nonatomic) id dragSource; // @synthesize dragSource=_dragSource;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL horizontalRubberBandingEnabled; // @synthesize horizontalRubberBandingEnabled=_horizontalRubberBandingEnabled;
@property (nonatomic) long long indexOfCurrentDetent; // @synthesize indexOfCurrentDetent=_indexOfCurrentDetent;
@property (readonly, nonatomic) double maximumOffset;
@property (readonly, nonatomic) double minimumOffset;
@property (readonly, nonatomic) double offsetAtCurrentDetent;
@property (nonatomic) double offsetWhenGestureBegan; // @synthesize offsetWhenGestureBegan=_offsetWhenGestureBegan;
@property (strong, nonatomic) UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
@property (readonly, nonatomic) NSMutableArray *registeredPanGestureRecognizers; // @synthesize registeredPanGestureRecognizers=_registeredPanGestureRecognizers;
@property (nonatomic) double rubberBandExtentBeyondMaximumOffset; // @synthesize rubberBandExtentBeyondMaximumOffset=_rubberBandExtentBeyondMaximumOffset;
@property (nonatomic) double rubberBandExtentBeyondMinimumOffset; // @synthesize rubberBandExtentBeyondMinimumOffset=_rubberBandExtentBeyondMinimumOffset;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<UITimingCurveProvider> timingCurve; // @synthesize timingCurve=_timingCurve;
@property (nonatomic) double unconstrainedOffset; // @synthesize unconstrainedOffset=_unconstrainedOffset;
@property (nonatomic) BOOL verticalPanningEnabled; // @synthesize verticalPanningEnabled=_verticalPanningEnabled;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (id)_currentDragPanGesture;
- (double)_currentRubberBandCoefficient;
- (BOOL)_descendentScrollView:(id)arg1 shouldPreserveStartOffset:(struct CGPoint)arg2;
- (void)_descendentScrollViewDidCancelDragging:(id)arg1;
- (void)_descendentScrollViewDidEndDragging:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (struct CGPoint)_scrollView:(id)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(struct CGPoint)arg2 startOffset:(struct CGPoint)arg3 horizontalVelocity:(inout double *)arg4 verticalVelocity:(inout double *)arg5 animator:(out id *)arg6;
- (void)_setCurrentOffsetX:(double)arg1;
- (void)_setCurrentOffsetY:(double)arg1;
- (BOOL)_shouldInteractWithDescendentScrollView:(id)arg1 startOffset:(struct CGPoint)arg2 maxTopOffset:(double)arg3;
- (void)cancelDraggingIfNeeded;
- (double)constrainedOffsetForUnconstrainedOffset:(double)arg1;
- (double)detentAtIndex:(long long)arg1;
- (void)didMoveToView:(id)arg1;
- (void)draggingBeganFromSource:(id)arg1;
- (void)draggingCancelledInSource:(id)arg1;
- (void)draggingChangedInSource:(id)arg1 withTranslation:(struct CGPoint)arg2 animateChange:(BOOL)arg3;
- (void)draggingEndedInSource:(id)arg1 withVelocity:(double)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (long long)indexOfDetentClosestToOffset:(double)arg1;
- (id)init;
- (void)registerPanGestureRecognizer:(id)arg1;
- (double)rubberBandExtentForOffset:(double)arg1;
- (void)sendCurrentOffsetDidChange;
- (void)unregisterPanGestureRecognizer:(id)arg1;
- (void)updateCurrentOffsetToCurrentDetent;
- (void)updateRegisteredPanGestureRecognizerEnabled:(id)arg1;
- (void)willMoveToView:(id)arg1;

@end


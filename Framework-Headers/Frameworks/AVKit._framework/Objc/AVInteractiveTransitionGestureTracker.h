//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVTransitionDriver-Protocol.h>
#import <AVKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UIView;
@protocol AVTransitionDriverDelegate;

__attribute__((visibility("hidden")))
@interface AVInteractiveTransitionGestureTracker : NSObject <UIGestureRecognizerDelegate, AVTransitionDriver>
{
    BOOL _enabled;
    BOOL _pinchToDismissEnabled;
    BOOL _pinchToPresentEnabled;
    BOOL _panToDismissEnabled;
    BOOL _waitingForTransition;
    BOOL _waitingForBoundsChange;
    BOOL _waitingForLocationChangeAfterBoundsChange;
    BOOL _hasContinued;
    BOOL _hasRotated;
    BOOL _lastNonZeroVelocityWasDownward;
    UIPanGestureRecognizer *_contentTransitioningViewGestureRecognizer;
    id<AVTransitionDriverDelegate> _transitionDriverDelegate;
    double _previousPinchScale;
    double __rotation;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    NSArray *_recognizers;
    double _timestampOfTouchWithLocationChangeAfterBoundsChange;
    long long _initialInterfaceOrientation;
    long long _transitionInteraction;
    UIView *_view;
    struct CGPoint _gestureLocationAfterBoundsChange;
    struct CGPoint _lastReportedLocationInWindow;
    struct CGPoint _anchorLocationInWindow;
    struct CGRect _initialCoordinateSpaceBounds;
}

@property (nonatomic, setter=_setRotation:) double _rotation; // @synthesize _rotation=__rotation;
@property (nonatomic) struct CGPoint anchorLocationInWindow; // @synthesize anchorLocationInWindow=_anchorLocationInWindow;
@property (weak, nonatomic) UIPanGestureRecognizer *contentTransitioningViewGestureRecognizer; // @synthesize contentTransitioningViewGestureRecognizer=_contentTransitioningViewGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic) struct CGPoint gestureLocationAfterBoundsChange; // @synthesize gestureLocationAfterBoundsChange=_gestureLocationAfterBoundsChange;
@property (nonatomic) BOOL hasContinued; // @synthesize hasContinued=_hasContinued;
@property (nonatomic) BOOL hasRotated; // @synthesize hasRotated=_hasRotated;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect initialCoordinateSpaceBounds; // @synthesize initialCoordinateSpaceBounds=_initialCoordinateSpaceBounds;
@property (nonatomic) long long initialInterfaceOrientation; // @synthesize initialInterfaceOrientation=_initialInterfaceOrientation;
@property (nonatomic) BOOL lastNonZeroVelocityWasDownward; // @synthesize lastNonZeroVelocityWasDownward=_lastNonZeroVelocityWasDownward;
@property (nonatomic) struct CGPoint lastReportedLocationInWindow; // @synthesize lastReportedLocationInWindow=_lastReportedLocationInWindow;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property (nonatomic, getter=isPanToDismissEnabled) BOOL panToDismissEnabled; // @synthesize panToDismissEnabled=_panToDismissEnabled;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property (readonly, nonatomic) double pinchScale;
@property (nonatomic, getter=isPinchToDismissEnabled) BOOL pinchToDismissEnabled; // @synthesize pinchToDismissEnabled=_pinchToDismissEnabled;
@property (nonatomic, getter=isPinchToPresentEnabled) BOOL pinchToPresentEnabled; // @synthesize pinchToPresentEnabled=_pinchToPresentEnabled;
@property (readonly, nonatomic) double pinchVelocity;
@property (nonatomic) double previousPinchScale; // @synthesize previousPinchScale=_previousPinchScale;
@property (readonly, nonatomic) NSArray *recognizers; // @synthesize recognizers=_recognizers;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // @synthesize rotationGestureRecognizer=_rotationGestureRecognizer;
@property (readonly, nonatomic) double rotationVelocity;
@property (readonly) Class superclass;
@property (nonatomic) double timestampOfTouchWithLocationChangeAfterBoundsChange; // @synthesize timestampOfTouchWithLocationChangeAfterBoundsChange=_timestampOfTouchWithLocationChangeAfterBoundsChange;
@property (weak, nonatomic) id<AVTransitionDriverDelegate> transitionDriverDelegate; // @synthesize transitionDriverDelegate=_transitionDriverDelegate;
@property (nonatomic) long long transitionInteraction; // @synthesize transitionInteraction=_transitionInteraction;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;
@property (nonatomic, getter=isWaitingForBoundsChange) BOOL waitingForBoundsChange; // @synthesize waitingForBoundsChange=_waitingForBoundsChange;
@property (nonatomic, getter=isWaitingForLocationChangeAfterBoundsChange) BOOL waitingForLocationChangeAfterBoundsChange; // @synthesize waitingForLocationChangeAfterBoundsChange=_waitingForLocationChangeAfterBoundsChange;
@property (nonatomic, getter=isWaitingForTransition) BOOL waitingForTransition; // @synthesize waitingForTransition=_waitingForTransition;

- (void).cxx_destruct;
- (void)_beginTracking:(long long)arg1;
- (void)_cancel;
- (struct CGPoint)_filteredUntranslatedLocationInWindow;
- (void)_finish;
- (void)_handlePanGesture:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleRotationGesture:(id)arg1;
- (BOOL)_isWaitingToContinue;
- (id)_locationRecognizer;
- (void)_reset;
- (void)_resetGesturesIfPossible;
- (void)_setHasContinuedIfNeeded;
- (struct CGPoint)_untranslatedUnfilteredLocationInFixedCoordinateSpace;
- (void)_updateLastNonZeroVelocityDirection;
- (void)addRecognizersToView:(id)arg1;
- (double)angleOfVelocityInWindow;
- (void)dealloc;
- (void)didMoveToView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (BOOL)isTracking;
- (struct CGPoint)locationInWindow;
- (BOOL)transitionDriver:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (struct CGPoint)translationInWindow;
- (struct CGPoint)velocityInWindow;
- (void)willMoveToView:(id)arg1;

@end

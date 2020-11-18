//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDragInteractionDriving-Protocol.h>

@class NSArray, NSString, UIView;
@protocol _UIDragInteractionDriverDelegate;

__attribute__((visibility("hidden")))
@interface _UIDragInteractionDriver : NSObject <_UIDragInteractionDriving>
{
    struct _UIDragInteractionDriverStateMachine _stateMachine;
    BOOL _enabled;
    BOOL _additionalTouchesCancelLift;
    BOOL _allowsSimultaneousRecognitionDuringLift;
    BOOL _shouldAnimateLift;
    BOOL _cancellationTimerEnabled;
    BOOL _competingLongPressOnLift;
    BOOL _automaticallyAddsFailureRelationships;
    id<_UIDragInteractionDriverDelegate> _delegate;
    UIView *_view;
    double _liftDelay;
    double _cancellationDelay;
    double _competingLongPressDelay;
    double _liftMoveHysteresis;
    NSArray *_allowedTouchTypes;
    struct CGPoint _initialLocationInWindow;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL additionalTouchesCancelLift; // @synthesize additionalTouchesCancelLift=_additionalTouchesCancelLift;
@property (copy, nonatomic) NSArray *allowedTouchTypes; // @synthesize allowedTouchTypes=_allowedTouchTypes;
@property (nonatomic) BOOL allowsSimultaneousRecognitionDuringLift; // @synthesize allowsSimultaneousRecognitionDuringLift=_allowsSimultaneousRecognitionDuringLift;
@property (nonatomic) BOOL automaticallyAddsFailureRelationships; // @synthesize automaticallyAddsFailureRelationships=_automaticallyAddsFailureRelationships;
@property (nonatomic) double cancellationDelay; // @synthesize cancellationDelay=_cancellationDelay;
@property (nonatomic) BOOL cancellationTimerEnabled; // @synthesize cancellationTimerEnabled=_cancellationTimerEnabled;
@property (nonatomic) double competingLongPressDelay; // @synthesize competingLongPressDelay=_competingLongPressDelay;
@property (nonatomic) BOOL competingLongPressOnLift; // @synthesize competingLongPressOnLift=_competingLongPressOnLift;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIDragInteractionDriverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint initialLocationInWindow; // @synthesize initialLocationInWindow=_initialLocationInWindow;
@property (nonatomic) double liftDelay; // @synthesize liftDelay=_liftDelay;
@property (nonatomic) double liftMoveHysteresis; // @synthesize liftMoveHysteresis=_liftMoveHysteresis;
@property (nonatomic) BOOL shouldAnimateLift; // @synthesize shouldAnimateLift=_shouldAnimateLift;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)attachToView:(id)arg1;
- (void)cancel;
- (void)detachFromView:(id)arg1;
- (void)didTransitionToBeginState;
- (void)didTransitionToCancelState;
- (void)didTransitionToDeferred;
- (void)didTransitionToInactiveState;
- (void)didTransitionToInflightState;
- (void)didTransitionToPreparing;
- (id)init;
- (BOOL)isGestureRecognizerForDragInitiation:(id)arg1;

@end

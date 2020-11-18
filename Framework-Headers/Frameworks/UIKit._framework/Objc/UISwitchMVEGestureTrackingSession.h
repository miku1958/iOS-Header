//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIGestureRecognizer, UIView;
@protocol UISwitchMVEGestureTrackingSessionElement;

__attribute__((visibility("hidden")))
@interface UISwitchMVEGestureTrackingSession : NSObject
{
    BOOL _displayedOnValue;
    BOOL _pendingDisplayedOnValue;
    BOOL _lastCommitedOnValue;
    UIView<UISwitchMVEGestureTrackingSessionElement> *_visualElement;
    double _naturalLayoutDirection;
    double _movementVectorForPanInitiatedChangeY;
    double _movementVectorForPanInitiatedChangeTargetOnValue;
    UIGestureRecognizer *_pendingDisplayedOnValueInitiatingGesture;
}

@property (nonatomic) BOOL displayedOnValue; // @synthesize displayedOnValue=_displayedOnValue;
@property (readonly, nonatomic) BOOL lastCommitedOnValue; // @synthesize lastCommitedOnValue=_lastCommitedOnValue;
@property (readonly, nonatomic) double movementVectorForPanInitiatedChangeTargetOnValue; // @synthesize movementVectorForPanInitiatedChangeTargetOnValue=_movementVectorForPanInitiatedChangeTargetOnValue;
@property (readonly, nonatomic) double movementVectorForPanInitiatedChangeY; // @synthesize movementVectorForPanInitiatedChangeY=_movementVectorForPanInitiatedChangeY;
@property (readonly, nonatomic) double naturalLayoutDirection; // @synthesize naturalLayoutDirection=_naturalLayoutDirection;
@property (readonly, nonatomic) BOOL pendingDisplayedOnValue; // @synthesize pendingDisplayedOnValue=_pendingDisplayedOnValue;
@property (readonly, nonatomic) UIGestureRecognizer *pendingDisplayedOnValueInitiatingGesture; // @synthesize pendingDisplayedOnValueInitiatingGesture=_pendingDisplayedOnValueInitiatingGesture;
@property (weak, nonatomic) UIView<UISwitchMVEGestureTrackingSessionElement> *visualElement; // @synthesize visualElement=_visualElement;

+ (BOOL)gestureIsInEndState:(long long)arg1;
- (void).cxx_destruct;
- (void)_applyPendingChangesIfNecessary;
- (BOOL)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(double)arg1;
- (BOOL)_isMovementDirectionTrackableForPossibleOnOffChange:(double)arg1;
- (void)_sendStateChangeActionsIfNecessary;
- (void)_updateMovementVectorForPanInitiatedChanges;
- (void)applyPendingDisplayedOnValueAndSendActions;
- (void)applyPendingDisplayedOnValueWithoutSendingActions;
- (BOOL)canApplyPendingOnValueForGesture:(id)arg1;
- (id)initWithVisualElement:(id)arg1;
- (void)invalidatePendingOnValue;
- (BOOL)pendingDisplayedOnValueIsValid;
- (void)reset;
- (void)setPendingDisplayedOnValue:(BOOL)arg1 forGesture:(id)arg2;
- (BOOL)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(double)arg1 forGesture:(id)arg2;

@end


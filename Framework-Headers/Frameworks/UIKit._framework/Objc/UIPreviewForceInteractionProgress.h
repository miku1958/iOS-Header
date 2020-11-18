//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInteractionProgress.h>

#import <UIKitCore/_UIForceLevelClassifierDelegate-Protocol.h>

@class NSObservation, NSString, _UIForceLevelClassifier, _UITouchForceObservable;

@interface UIPreviewForceInteractionProgress : UIInteractionProgress <_UIForceLevelClassifierDelegate>
{
    _UITouchForceObservable *_observable;
    long long _targetState;
    long long _minimumState;
    BOOL _updateMinimumStateWithTargetState;
    _UIForceLevelClassifier *_classifier;
    NSObservation *_classifierObservation;
    BOOL _enteredMinimumState;
    BOOL _didEnd;
    NSObservation *_progressObservation;
    NSObservation *_targetStateUpdateObservation;
    NSObservation *_gestureBeganObservation;
    BOOL _completesAtTargetState;
}

@property (nonatomic, setter=_setClassifierShouldRespectSystemGestureTouchFiltering:) BOOL _classifierShouldRespectSystemGestureTouchFiltering;
@property (nonatomic, setter=_setTargetState:) long long _targetState; // @synthesize _targetState;
@property (nonatomic) BOOL completesAtTargetState; // @synthesize completesAtTargetState=_completesAtTargetState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2;
- (void)_forceLevelClassifierDidReset:(id)arg1;
- (void)_gestureRecognizerBegan:(BOOL)arg1;
- (id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3;
- (id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(BOOL)arg4;
- (id)_initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(BOOL)arg4;
- (void)_installProgressObserver;
- (void)_setGestureBeginObservable:(id)arg1;
- (BOOL)didEnd;
- (BOOL)enteredMinimumState;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1 minimumRequiredState:(long long)arg2;
- (id)initWithView:(id)arg1 targetState:(long long)arg2;
- (id)initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3;

@end


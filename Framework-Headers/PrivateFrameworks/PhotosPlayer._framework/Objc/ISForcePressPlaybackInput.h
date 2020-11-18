//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISGestureInput.h>

#import <PhotosPlayer/UIInteractionProgressObserver-Protocol.h>

@class NSString, UIPreviewForceInteractionProgress;

@interface ISForcePressPlaybackInput : ISGestureInput <UIInteractionProgressObserver>
{
    BOOL __isTouchActive;
    BOOL __aboveTimeoutThreshold;
    BOOL __forceAboveThresholdLongEnough;
    BOOL __hasCrossedHintThreshold;
    long long __currentTimeoutRequestId;
    UIPreviewForceInteractionProgress *__interactionProgress;
}

@property (nonatomic, setter=_setAboveTimeoutThreshold:) BOOL _aboveTimeoutThreshold; // @synthesize _aboveTimeoutThreshold=__aboveTimeoutThreshold;
@property (nonatomic, setter=_setCurrentTimeoutRequestId:) long long _currentTimeoutRequestId; // @synthesize _currentTimeoutRequestId=__currentTimeoutRequestId;
@property (nonatomic, setter=_setForceAboveThresholdLongEnough:) BOOL _forceAboveThresholdLongEnough; // @synthesize _forceAboveThresholdLongEnough=__forceAboveThresholdLongEnough;
@property (nonatomic, setter=_setHasCrossedHintThreshold:) BOOL _hasCrossedHintThreshold; // @synthesize _hasCrossedHintThreshold=__hasCrossedHintThreshold;
@property (strong, nonatomic, setter=_setInteractionProgress:) UIPreviewForceInteractionProgress *_interactionProgress; // @synthesize _interactionProgress=__interactionProgress;
@property (nonatomic, setter=_setTouchActive:) BOOL _isTouchActive; // @synthesize _isTouchActive=__isTouchActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePress:(id)arg1;
- (void)_updateValue;
- (void)gestureRecognizerDidChange;
- (void)gestureRecognizerViewDidChange;
- (long long)inputType;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)newGestureRecognizer;

@end


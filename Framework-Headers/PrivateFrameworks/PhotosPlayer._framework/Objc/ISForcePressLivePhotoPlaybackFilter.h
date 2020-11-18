//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISLivePhotoPlaybackFilter.h>

@interface ISForcePressLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter
{
    struct {
        BOOL respondsToHintWithProgress;
        BOOL respondsToStartPlayback;
        BOOL respondsToStopPlayback;
    } _delegateFlags;
    BOOL _didReachMaxForce;
    BOOL _touchActive;
    BOOL __aboveTimeoutThreshold;
    BOOL __forceAboveThresholdLongEnough;
    BOOL __hasCrossedHintThreshold;
    double _forceProgress;
    long long __currentTimeoutRequestId;
}

@property (nonatomic, setter=_setAboveTimeoutThreshold:) BOOL _aboveTimeoutThreshold; // @synthesize _aboveTimeoutThreshold=__aboveTimeoutThreshold;
@property (nonatomic, setter=_setCurrentTimeoutRequestId:) long long _currentTimeoutRequestId; // @synthesize _currentTimeoutRequestId=__currentTimeoutRequestId;
@property (nonatomic, setter=_setForceAboveThresholdLongEnough:) BOOL _forceAboveThresholdLongEnough; // @synthesize _forceAboveThresholdLongEnough=__forceAboveThresholdLongEnough;
@property (nonatomic, setter=_setHasCrossedHintThreshold:) BOOL _hasCrossedHintThreshold; // @synthesize _hasCrossedHintThreshold=__hasCrossedHintThreshold;
@property (nonatomic) double forceProgress; // @synthesize forceProgress=_forceProgress;
@property (nonatomic, getter=isTouchActive) BOOL touchActive; // @synthesize touchActive=_touchActive;

- (void)didPerformChanges;
- (void)setState:(long long)arg1;

@end


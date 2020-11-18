//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISettings.h>

@interface _UIMotionAnalyzerSettings : _UISettings
{
    BOOL _showIdleIndicator;
    BOOL _jumpEnabled;
    BOOL _playJumpSound;
    BOOL _directionalLockEnabled;
    BOOL _showDirectionalLockIndicators;
    BOOL _referenceShiftEnabled;
    double _inputSmoothingFactor;
    double _referenceShiftSpeed;
    double _idleLeeway;
    double _delayBeforeIdle;
    double _jumpThreshold;
    double _directionalLockThreshold;
    double _directionalLockStickiness;
    double _directionalLockSharpness;
    double _referenceShiftDistanceDependence;
}

@property double delayBeforeIdle; // @synthesize delayBeforeIdle=_delayBeforeIdle;
@property BOOL directionalLockEnabled; // @synthesize directionalLockEnabled=_directionalLockEnabled;
@property double directionalLockSharpness; // @synthesize directionalLockSharpness=_directionalLockSharpness;
@property double directionalLockStickiness; // @synthesize directionalLockStickiness=_directionalLockStickiness;
@property double directionalLockThreshold; // @synthesize directionalLockThreshold=_directionalLockThreshold;
@property double idleLeeway; // @synthesize idleLeeway=_idleLeeway;
@property double inputSmoothingFactor; // @synthesize inputSmoothingFactor=_inputSmoothingFactor;
@property BOOL jumpEnabled; // @synthesize jumpEnabled=_jumpEnabled;
@property double jumpThreshold; // @synthesize jumpThreshold=_jumpThreshold;
@property BOOL playJumpSound; // @synthesize playJumpSound=_playJumpSound;
@property double referenceShiftDistanceDependence; // @synthesize referenceShiftDistanceDependence=_referenceShiftDistanceDependence;
@property BOOL referenceShiftEnabled; // @synthesize referenceShiftEnabled=_referenceShiftEnabled;
@property double referenceShiftSpeed; // @synthesize referenceShiftSpeed=_referenceShiftSpeed;
@property BOOL showDirectionalLockIndicators; // @synthesize showDirectionalLockIndicators=_showDirectionalLockIndicators;
@property BOOL showIdleIndicator; // @synthesize showIdleIndicator=_showIdleIndicator;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setDefaultValues;

@end


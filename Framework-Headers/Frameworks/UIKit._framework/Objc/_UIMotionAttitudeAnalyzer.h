//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIMotionAnalyzer.h>

#import <UIKitCore/_UISettingsKeyObserver-Protocol.h>

@class NSString, UILabel, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIMotionAttitudeAnalyzer : _UIMotionAnalyzer <_UISettingsKeyObserver>
{
    double _smoothingDegree;
    double _referenceShiftSpeed;
    double _distanceMultiplier;
    BOOL _hasReferenceQuaternion;
    union _GLKQuaternion _referenceQuaternion;
    union _GLKQuaternion _absoluteQuaternion;
    double _lastUpdate;
    double _idleStartTime;
    struct UIOffset _idleStartOffset;
    double _jumpThreshold;
    double _idleLeeway;
    double _secondsBeforeIdle;
    double _lockValue;
    double _lockStrength;
    UIWindow *_diagnosticsWindow;
    UILabel *_idleIndicator;
    UIView *_horizontalLockIndicator;
    UIView *_verticalLockIndicator;
    BOOL _hasHistory;
    struct UIOffset _lastAppliedViewerOffset;
    union _GLKQuaternion _lastAppliedRelativeQuaternion;
    BOOL _isApplyingHysteresis;
    union _GLKQuaternion _relativeQuaternionOnHysteresisEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createDiagnosticsWindow;
- (void)_createDirectionLockIndicators;
- (void)_createIdleIndicator;
- (struct UIOffset)_currentRawOffset:(union _GLKQuaternion)arg1;
- (long long)_directionLockStatus;
- (double)_directionLockStrength;
- (BOOL)_isIdleGivenTimestamp:(double)arg1;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (union _GLKQuaternion)_relativeQuaternion;
- (void)_resetDirectionalLockWithViewerOffset:(struct UIOffset)arg1;
- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion)arg1;
- (BOOL)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(struct UIOffset)arg1 wasSuspendingApplicationForHysteresis:(BOOL)arg2;
- (void)_showIdleUI:(BOOL)arg1;
- (void)_tearDownDiagnosticsWindow;
- (void)_tearDownDirectionLockIndicators;
- (void)_tearDownIdleIndicator;
- (void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset)arg1;
- (void)_updateDirectionalLockIndicators;
- (void)_updateIdleStateForRawOffset:(struct UIOffset)arg1 timestamp:(double)arg2;
- (void)_updateReferenceAttitude:(union _GLKQuaternion)arg1 timestamp:(double)arg2;
- (void)_updateSettings;
- (void)_updateSmoothedOffsetForRawOffset:(struct UIOffset)arg1;
- (BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL *)arg4 logger:(id)arg5;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (void)reset;
- (void)resetHysteresis;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateHistory;
- (void)updateWithEvent:(id)arg1;

@end


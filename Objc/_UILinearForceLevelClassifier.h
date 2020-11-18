//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIForceLevelClassifier.h>

@interface _UILinearForceLevelClassifier : _UIForceLevelClassifier
{
    double _smoothedForce;
    BOOL _anyForceObservations;
    double _smoothedImpulse;
    long long _impulseObservationState;
    double _lastForceForImpulse;
    double _lastTimestampForImpulse;
    double _revealThreshold;
    double _standardThreshold;
    double _strongThreshold;
    double _smoothingFactor;
    double _impulseSmoothingFactor;
}

@property (readonly, nonatomic) double currentImpulse;
@property (nonatomic) double impulseSmoothingFactor; // @synthesize impulseSmoothingFactor=_impulseSmoothingFactor;
@property (nonatomic) double revealThreshold; // @synthesize revealThreshold=_revealThreshold;
@property (nonatomic) double smoothingFactor; // @synthesize smoothingFactor=_smoothingFactor;
@property (nonatomic) double standardThreshold; // @synthesize standardThreshold=_standardThreshold;
@property (nonatomic) double strongThreshold; // @synthesize strongThreshold=_strongThreshold;

- (double)_calculateProgressOfTouchForceValue:(double)arg1 toForceLevel:(long long)arg2 minimumRequiredForceLevel:(long long)arg3;
- (long long)_forceLevelForTouchForceValue:(double)arg1;
- (double)_instantaneousImpulseForTouchForceValue:(double)arg1 atTimestamp:(double)arg2;
- (double)_thresholdForForceLevel:(long long)arg1;
- (void)_updateForceWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2;
- (void)_updateImpulseWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2;
- (void)dealloc;
- (void)debuggingPropertyForKey:(id)arg1 changedToValue:(id)arg2;
- (id)init;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (void)reset;
- (void)touchForceMultiplierDidChange;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;

@end


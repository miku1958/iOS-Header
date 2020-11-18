//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, _UIFeedbackGeneratorConfiguration;
@protocol OS_dispatch_source, UICoordinateSpace;

@interface UIFeedbackGenerator : NSObject
{
    long long _styleActivationCount[3];
    long long _autoDeactivationCount[3];
    NSObject<OS_dispatch_source> *_autoDeactivateTimer;
    NSMutableDictionary *_preparationTimers;
    double _currentDelay;
    NSSet *_usedFeedbacks;
    BOOL _muted;
    BOOL _hasMutableFeedbackKeyPaths;
    long long _activationCount;
    long long _externalActivationCount;
    id<UICoordinateSpace> _coordinateSpace;
    _UIFeedbackGeneratorConfiguration *_configuration;
    NSSet *_engines;
}

@property (readonly, nonatomic) NSString *_stats_key;
@property (nonatomic) long long activationCount; // @synthesize activationCount=_activationCount;
@property (readonly, nonatomic, getter=_isAutoDeactivated) BOOL autoDeactivated;
@property (readonly, nonatomic, getter=_autoDeactivationTimeout) double autoDeactivationTimeout;
@property (strong, nonatomic, getter=_configuration, setter=_setConfiguration:) _UIFeedbackGeneratorConfiguration *configuration; // @synthesize configuration=_configuration;
@property (weak, nonatomic) id<UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property (readonly, nonatomic, getter=_effectiveCoordinateSpace) id<UICoordinateSpace> effectiveCoordinateSpace;
@property (readonly, nonatomic, getter=_isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSSet *engines; // @synthesize engines=_engines;
@property (nonatomic) long long externalActivationCount; // @synthesize externalActivationCount=_externalActivationCount;
@property (readonly, nonatomic, getter=_hasMutableFeedbackKeyPaths) BOOL hasMutableFeedbackKeyPaths; // @synthesize hasMutableFeedbackKeyPaths=_hasMutableFeedbackKeyPaths;
@property (nonatomic, getter=_isMuted, setter=_setMuted:) BOOL muted; // @synthesize muted=_muted;

+ (Class)_configurationClass;
+ (void)_resetAutoDeactivateTimeout;
+ (void)_resetPreparationTimeouts;
+ (void)_setAutoDeactivateTimeout:(double)arg1;
+ (void)_setPreparationTimeout:(double)arg1 forStyle:(long long)arg2;
+ (void)_setRunningTests:(BOOL)arg1;
+ (id)behaviorWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
+ (id)behaviorWithCoordinateSpace:(id)arg1;
- (void).cxx_destruct;
- (void)__activateWithStyle:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)__deactivateWithStyle:(long long)arg1;
- (void)_activateWithStyle:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_activated;
- (id)_activationCountStatistics;
- (id)_activationDurationStatistics;
- (id)_activationTimeOutCountStatistics;
- (void)_autoDeactivate;
- (void)_clientDidUpdateGeneratorWithSelector:(SEL)arg1;
- (void)_deactivateWithStyle:(long long)arg1;
- (void)_deactivated;
- (void)_forceDeactivationForStyle:(long long)arg1;
- (id)_playCountStatistics;
- (void)_playFeedback:(id)arg1;
- (void)_playFeedback:(id)arg1 withMinimumIntervalPassed:(double)arg2 since:(double *)arg3 prefersRegularPace:(BOOL)arg4;
- (id)_preparationCountStatistics;
- (double)_preparationTimeoutForStyle:(long long)arg1;
- (id)_preparationTimerForStyle:(long long)arg1;
- (void)_prepare;
- (void)_prepareWithStyle:(long long)arg1;
- (void)_resetAutoDeactivationTimeout;
- (void)_setPreparationTimer:(id)arg1 forStyle:(long long)arg2;
- (void)_setupAutoDeactivateTimer;
- (void)_setupEnginesIfNeeded;
- (id)_statsSuffix;
- (void)_stats_activationDidChangeTo:(BOOL)arg1;
- (void)_stats_activationTimedOut;
- (void)_stats_playedFeedback;
- (void)_stats_prepared;
- (void)_stopAutoDeactivateTimer;
- (void)_stopPreparationForAllStyles;
- (void)_stopPreparationForStyle:(long long)arg1;
- (void)_updatePreparationTimer:(id)arg1 withTimeout:(double)arg2;
- (void)activateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
- (BOOL)isActive;
- (void)performFeedbackWithDelay:(double)arg1 insideBlock:(CDUnknownBlockType)arg2;
- (void)prepare;
- (void)prepareForFeedback;

@end


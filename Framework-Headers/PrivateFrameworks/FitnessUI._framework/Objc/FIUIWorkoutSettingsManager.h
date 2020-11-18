//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIUIWorkoutActivityType, NPSDomainAccessor, NPSManager, NSMutableArray, NSMutableDictionary;

@interface FIUIWorkoutSettingsManager : NSObject
{
    FIUIWorkoutActivityType *_workoutActivityType;
    NSMutableDictionary *_settingsByActivityType;
    NSMutableDictionary *_settingOverridesByMetric;
    NSMutableArray *_enabledMetrics;
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
}

@property (strong, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
@property (strong, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;

- (void).cxx_destruct;
- (void)_migratePaceViewSettingIfNeeded;
- (void)_readFromDomain;
- (void)_writeToDomain;
- (long long)disabledIndexForMetricType:(unsigned long long)arg1;
- (id)init;
- (id)initWithWorkoutActivityType:(id)arg1;
- (BOOL)isMetricEnabled:(unsigned long long)arg1;
- (void)moveMetricType:(unsigned long long)arg1 toEnabledIndex:(long long)arg2;
- (id)orderedDisabledMetrics;
- (id)orderedEnabledAndSupportedMetrics;
- (id)orderedEnabledMetrics;
- (id)orderedSupportedMetrics;
- (void)reloadMetrics;
- (void)setEnabled:(BOOL)arg1 forMetricType:(unsigned long long)arg2 didChange:(BOOL *)arg3;
- (id)supportedMetrics;

@end

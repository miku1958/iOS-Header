//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKHearingFeatures : NSObject
{
}

+ (BOOL)_boolForPreferenceKey:(id)arg1 defaultValue:(BOOL)arg2 fromValues:(id)arg3;
+ (id)_numbersForPreferenceKeys:(id)arg1 error:(id *)arg2;
+ (id)_sharedAudioDataAnalysisManager;
+ (BOOL)isHeadphoneExposureNotificationsEnabled;
+ (id)sharedInstance;
+ (BOOL)unitTesting_forceDefaultHeadphoneDataCollectionInterval;
+ (void)unitTesting_overrideForceDefaultHeadphoneDataCollectionInterval:(id)arg1;
+ (void)unitTesting_overrideIsHeadphoneExposureNotificationsEnabled:(id)arg1;
+ (void)unitTesting_overrideSimulateLocalHeadphonePlayback:(id)arg1;
+ (BOOL)unitTesting_simulateLocalHeadphonePlayback;
- (void)_adasPreferenceDidChange:(id)arg1;
- (void)_startObservingForChanges;
- (void)_stopObserveringForChanges;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isHeadphoneExposureNotificationsEnabled;

@end

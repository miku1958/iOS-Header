//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKObserverSet, NSArray, NSDate, NSDateComponents, NSString, NSUserDefaults;

@interface HKMCSettingsManager : NSObject
{
    NSUserDefaults *_menstrualCyclesDefaults;
    HKObserverSet *_observers;
    NSArray *_allSettingsToObserve;
    int _hiddenDisplayTypesNotifyToken;
    int _analysisSettingsNotifyToken;
    int _notificationSettingsNotifyToken;
    int _algorithmVersionMismatchSettingsNotifyToken;
}

@property (strong, nonatomic) NSDate *cycleTrackingOnboardingTileDismissedDate;
@property (strong, nonatomic) NSDateComponents *fertileWindowNotificationTimeOfDay;
@property (nonatomic) BOOL fertileWindowNotificationsEnabled;
@property (nonatomic) BOOL fertileWindowProjectionsDisabledForVersionMismatch;
@property (nonatomic) BOOL fertileWindowProjectionsEnabled;
@property (strong, nonatomic) NSString *localizedTextForVersionMismatchAndDisabledProjections;
@property (strong, nonatomic) NSDateComponents *menstruationNotificationTimeOfDay;
@property (nonatomic) BOOL menstruationNotificationsEnabled;
@property (nonatomic) BOOL menstruationProjectionsDisabledForVersionMismatch;
@property (nonatomic) BOOL menstruationProjectionsEnabled;
@property (nonatomic) long long minimumAnalysisStartDayIndex;
@property (readonly, nonatomic) BOOL notificationsEnabled;

- (void).cxx_destruct;
- (void)_algorithmVersionMismatchSettingsDidUpdate;
- (void)_analysisSettingsDidUpdate;
- (void)_hiddenDisplayTypesDidUpdate;
- (void)_notificationSettingsDidUpdate;
- (void)_setTestDefaults:(id)arg1;
- (void)_startObservingDefaults;
- (void)_startObservingNPSNotifications;
- (void)_stopObservingAllDefaults;
- (void)_stopObservingNPSNotifications;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (BOOL)hiddenForDisplayTypeIdentifier:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (void)resetAllSettings;
- (void)setFertilityTrackingDisplayTypesHidden:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1 forDisplayTypeIdentifier:(id)arg2;
- (void)setHidden:(BOOL)arg1 forDisplayTypeIdentifiers:(id)arg2;
- (void)setMenstruationTrackingDisplayTypesHidden:(BOOL)arg1;

@end


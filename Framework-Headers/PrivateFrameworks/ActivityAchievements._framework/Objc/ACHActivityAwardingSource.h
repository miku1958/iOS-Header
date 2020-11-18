//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHAchievementProgressProviding-Protocol.h>
#import <ActivityAchievements/ACHDataStorePropertyProviding-Protocol.h>
#import <ActivityAchievements/ACHEarnedInstanceAwarding-Protocol.h>
#import <ActivityAchievements/HDCurrentActivitySummaryHelperObserver-Protocol.h>
#import <ActivityAchievements/HDHealthDaemonReadyObserver-Protocol.h>

@class ACHAchievementProgressEngine, ACHActivityAwardingDataProvider, ACHActivityAwardingEnvironment, ACHActivitySummaryUtility, ACHActivityTriggerGenerator, ACHDataStore, ACHEarnedInstanceAwardingEngine, ACHTemplateStore, HDProfile, HKActivitySummary, NSArray, NSCalendar, NSDictionary, NSMutableArray, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface ACHActivityAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, ACHDataStorePropertyProviding, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>
{
    BOOL _isObservingSummaryUpdates;
    NSCalendar *_gregorianUTCCalendar;
    HDProfile *_profile;
    ACHEarnedInstanceAwardingEngine *_engine;
    ACHAchievementProgressEngine *_progressProvider;
    ACHDataStore *_dataStore;
    ACHTemplateStore *_templateStore;
    ACHActivityAwardingDataProvider *_dataProvider;
    ACHActivityTriggerGenerator *_triggerGenerator;
    ACHActivityAwardingEnvironment *_environment;
    NSMutableArray *_currentTemplates;
    ACHActivityAwardingDataProvider *_progressDataProvider;
    ACHActivityAwardingEnvironment *_progressEnvironment;
    HKActivitySummary *_todayActivitySummary;
    HKActivitySummary *_yesterdayActivitySummary;
    ACHActivitySummaryUtility *_activitySummaryUtility;
    CDUnknownBlockType _incrementalUpdateCompletionHandler;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSNumber *_overrideIsAppleWatch;
    NSString *_overrideWatchCountryCode;
    NSString *_watchCountryCode;
}

@property (strong, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility; // @synthesize activitySummaryUtility=_activitySummaryUtility;
@property (strong, nonatomic) NSMutableArray *currentTemplates; // @synthesize currentTemplates=_currentTemplates;
@property (strong, nonatomic) ACHActivityAwardingDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property (weak, nonatomic) ACHDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property (strong, nonatomic) NSDictionary *dataStoreProperties;
@property (readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine; // @synthesize engine=_engine;
@property (strong, nonatomic) ACHActivityAwardingEnvironment *environment; // @synthesize environment=_environment;
@property (strong, nonatomic) NSCalendar *gregorianUTCCalendar; // @synthesize gregorianUTCCalendar=_gregorianUTCCalendar;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType incrementalUpdateCompletionHandler; // @synthesize incrementalUpdateCompletionHandler=_incrementalUpdateCompletionHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (nonatomic) BOOL isObservingSummaryUpdates; // @synthesize isObservingSummaryUpdates=_isObservingSummaryUpdates;
@property (strong, nonatomic) NSNumber *overrideIsAppleWatch; // @synthesize overrideIsAppleWatch=_overrideIsAppleWatch;
@property (strong, nonatomic) NSString *overrideWatchCountryCode; // @synthesize overrideWatchCountryCode=_overrideWatchCountryCode;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) ACHActivityAwardingDataProvider *progressDataProvider; // @synthesize progressDataProvider=_progressDataProvider;
@property (strong, nonatomic) ACHActivityAwardingEnvironment *progressEnvironment; // @synthesize progressEnvironment=_progressEnvironment;
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider; // @synthesize progressProvider=_progressProvider;
@property (readonly) Class superclass;
@property (weak, nonatomic) ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
@property (strong, nonatomic) HKActivitySummary *todayActivitySummary; // @synthesize todayActivitySummary=_todayActivitySummary;
@property (strong, nonatomic) ACHActivityTriggerGenerator *triggerGenerator; // @synthesize triggerGenerator=_triggerGenerator;
@property (readonly, nonatomic) NSString *uniqueName;
@property (strong, nonatomic) NSString *watchCountryCode; // @synthesize watchCountryCode=_watchCountryCode;
@property (strong, nonatomic) HKActivitySummary *yesterdayActivitySummary; // @synthesize yesterdayActivitySummary=_yesterdayActivitySummary;

- (void).cxx_destruct;
- (unsigned char)_creatorDevice;
- (id)_queue_companionProgressEnvironment;
- (id)_queue_evaluateTriggers:(unsigned long long)arg1 activitySummary:(id)arg2 templates:(id)arg3 shouldLog:(BOOL)arg4;
- (void)_queue_observeSummaries;
- (id)_queue_progressEnvironment;
- (unsigned long long)_queue_triggersWithChangedSummaryFields:(unsigned long long)arg1 dataProvider:(id)arg2;
- (void)_queue_updateDataProvider:(id)arg1 forDateInterval:(id)arg2 awardingBlock:(CDUnknownBlockType)arg3;
- (void)_runIncrementallyForChangedSummaryFields:(unsigned long long)arg1;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (id)currentGoalQuantityForTemplate:(id)arg1;
- (id)currentProgressQuantityForTemplate:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)dataStoreDidClearAllProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 templateStore:(id)arg3 awardingEngine:(id)arg4 progressProvider:(id)arg5;
- (BOOL)providesProgressForTemplate:(id)arg1;

@end


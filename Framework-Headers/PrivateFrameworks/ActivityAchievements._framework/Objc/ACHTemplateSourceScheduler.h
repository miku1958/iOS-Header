//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHAchievementStoreObserving-Protocol.h>
#import <ActivityAchievements/HDDatabaseProtectedDataObserver-Protocol.h>
#import <ActivityAchievements/HDHealthDaemonReadyObserver-Protocol.h>

@class ACHAchievementStore, ACHTemplateStore, HDProfile, NSCalendar, NSDate, NSDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface ACHTemplateSourceScheduler : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHAchievementStoreObserving>
{
    int _significantTimeChangeToken;
    BOOL _initialRunComplete;
    BOOL _achievementStoreDidFinishInitialFetch;
    BOOL _shouldScheduleAfterInitialFetch;
    HDProfile *_profile;
    ACHTemplateStore *_templateStore;
    ACHAchievementStore *_achievementStore;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSSet *_templateSources;
    NSDictionary *_lastRunDateByTemplateSourceIdentifier;
    NSCalendar *_gregorianCalendar;
    NSDate *_currentDateOverride;
}

@property (readonly, nonatomic) unsigned long long _sourceCount;
@property (strong, nonatomic) ACHAchievementStore *achievementStore; // @synthesize achievementStore=_achievementStore;
@property (nonatomic) BOOL achievementStoreDidFinishInitialFetch; // @synthesize achievementStoreDidFinishInitialFetch=_achievementStoreDidFinishInitialFetch;
@property (strong, nonatomic) NSDate *currentDateOverride; // @synthesize currentDateOverride=_currentDateOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL initialRunComplete; // @synthesize initialRunComplete=_initialRunComplete;
@property (strong, nonatomic) NSDictionary *lastRunDateByTemplateSourceIdentifier; // @synthesize lastRunDateByTemplateSourceIdentifier=_lastRunDateByTemplateSourceIdentifier;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (nonatomic) BOOL shouldScheduleAfterInitialFetch; // @synthesize shouldScheduleAfterInitialFetch=_shouldScheduleAfterInitialFetch;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSSet *templateSources; // @synthesize templateSources=_templateSources;
@property (strong, nonatomic) ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;

- (void).cxx_destruct;
- (id)_currentDate;
- (BOOL)_queue_runTemplateSources:(id)arg1 requiringRunnnableForDate:(BOOL)arg2;
- (void)_runAllTemplateSources;
- (void)_runSynchronously;
- (id)_runnableSourcesInSources:(id)arg1 forDate:(id)arg2 calendar:(id)arg3;
- (void)achievementStore:(id)arg1 didAddAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2;
- (void)achievementStoreDidFinishInitialFetch:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)deregisterTemplateSource:(id)arg1;
- (id)initWithProfile:(id)arg1 templateStore:(id)arg2 achievementStore:(id)arg3;
- (void)registerTemplateSource:(id)arg1;
- (void)runImmediatelyForTemplateSource:(id)arg1;

@end


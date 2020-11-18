//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAchievementEvaluationDelegate-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDAchievementDataStoreV2, HDAchievementDetective, HDCompanionDailyGoalCompletionManager, HDKeyValueDomain, HDPeriodicActivity, HDProfile, NSCalendar, NSDate, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface HDCompanionAchievementManager : NSObject <HDDiagnosticObject, HDPeriodicActivityDelegate, HDAchievementEvaluationDelegate, HDHealthDaemonReadyObserver>
{
    int _fitnessWeekRedefined;
    BOOL _waitingToRun;
    BOOL _deleteAchievementsNeedsRetry;
    HDProfile *_profile;
    HDPeriodicActivity *_scheduler;
    NSCalendar *_calendar;
    HDAchievementDataStoreV2 *_achievementStore;
    HDCompanionDailyGoalCompletionManager *_dailyGoalCompletionManager;
    HDAchievementDetective *_detective;
    HDAchievementDetective *_progressDetective;
    HDKeyValueDomain *_defaultsDomain;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastRunDate;
    NSNumber *_waitingToRunBackingNumber;
}

@property (strong, nonatomic) HDAchievementDataStoreV2 *achievementStore; // @synthesize achievementStore=_achievementStore;
@property (strong, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (strong, nonatomic) HDCompanionDailyGoalCompletionManager *dailyGoalCompletionManager; // @synthesize dailyGoalCompletionManager=_dailyGoalCompletionManager;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) HDKeyValueDomain *defaultsDomain; // @synthesize defaultsDomain=_defaultsDomain;
@property (nonatomic) BOOL deleteAchievementsNeedsRetry; // @synthesize deleteAchievementsNeedsRetry=_deleteAchievementsNeedsRetry;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HDAchievementDetective *detective; // @synthesize detective=_detective;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *lastRunDate; // @synthesize lastRunDate=_lastRunDate;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) HDAchievementDetective *progressDetective; // @synthesize progressDetective=_progressDetective;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) HDPeriodicActivity *scheduler; // @synthesize scheduler=_scheduler;
@property (readonly) Class superclass;
@property (nonatomic, getter=isWaitingToRun) BOOL waitingToRun; // @synthesize waitingToRun=_waitingToRun;
@property (strong, nonatomic) NSNumber *waitingToRunBackingNumber; // @synthesize waitingToRunBackingNumber=_waitingToRunBackingNumber;

- (void).cxx_destruct;
- (void)_applicationsInstalled:(id)arg1;
- (void)_applicationsUninstalled:(id)arg1;
- (void)_queue_deleteAllAchievements;
- (BOOL)_queue_performDetectiveRun;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (id)createEvaluatedAchievementWithDefinition:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)evaluateAchievementExpression:(id)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (BOOL)periodicActivityRequiresProtectedData:(id)arg1;
- (void)requestRun;
- (id)runImmediately;

@end

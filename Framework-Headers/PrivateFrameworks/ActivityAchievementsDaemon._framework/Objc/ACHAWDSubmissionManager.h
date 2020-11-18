//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class ACHEarnedInstanceStore, HDPeriodicActivity, HDProfile, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ACHAWDSubmissionManager : NSObject <HDPeriodicActivityDelegate>
{
    HDProfile *_profile;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    HDPeriodicActivity *_scheduler;
    NSMutableDictionary *_serverConnectionsByComponentId;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // @synthesize earnedInstanceStore=_earnedInstanceStore;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) HDPeriodicActivity *scheduler; // @synthesize scheduler=_scheduler;
@property (strong, nonatomic) NSMutableDictionary *serverConnectionsByComponentId; // @synthesize serverConnectionsByComponentId=_serverConnectionsByComponentId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_computeAndSubmitAchievementCountMetric;
- (id)_serverConnectionForComponentId:(unsigned int)arg1;
- (BOOL)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3;
- (id)initWithProfile:(id)arg1 earnedInstanceStore:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;

@end

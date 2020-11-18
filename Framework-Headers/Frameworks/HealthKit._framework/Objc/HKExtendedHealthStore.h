//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKExtendedClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class NSString, _HKXPCConnection;
@protocol OS_dispatch_queue;

@interface HKExtendedHealthStore : NSObject <HKExtendedClientInterface, _HKXPCExportable>
{
    CDUnknownBlockType _achievementsAddedOrRemovedHandler;
    CDUnknownBlockType _unviewedAchievementDefinitionsChangedHandler;
    _HKXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (copy, nonatomic) CDUnknownBlockType achievementsAddedOrRemovedHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType unviewedAchievementDefinitionsChangedHandler;

- (void).cxx_destruct;
- (void)achievementAssetAvailabilityOnPairedDeviceForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAchievement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientRemote_achievementDefinitionUnviewedCountChanged;
- (void)clientRemote_achievementsWereAddedOrRemoved;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)createMonthlyChallengeAchievementForMonth:(long long)arg1 year:(long long)arg2 predicateString:(id)arg3 progressExpressionString:(id)arg4 goalExpressionString:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)daemonDidStart;
- (void)dealloc;
- (void)deleteAchievementWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (id)exportedInterface;
- (void)expressionValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAchievementAssetsServerURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchDynamicAchievementDefinitionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNumberOfUnviewedAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)markAchievementAsViewed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAchievementDefinitionIdentifierAlertViewed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAchievementsAlerted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)nextScheduledAchievementDefinitionAlertTaskDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)progressAchievementWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remoteInterface;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)resetAchievementDefinitionAlertedStates:(BOOL)arg1 availabilityStates:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runAchievementsFixupAsDryRun:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runCompanionAchievementManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAchievementAssetsServerURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAllAchievementAssetsWithCompletion:(CDUnknownBlockType)arg1;

@end

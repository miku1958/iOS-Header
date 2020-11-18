//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, NSURL, NSUUID, _HKAchievement;

@protocol HKExtendedServerInterface <NSObject>
- (void)remote_achievementAssetAvailabilityOnPairedDeviceForIdentifiers:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_addAchievement:(_HKAchievement *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_deleteAchievementWithUUID:(NSUUID *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_deleteAllAchievementsWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_fetchAchievementAssetsServerURLWithCompletion:(void (^)(NSURL *, NSError *))arg1;
- (void)remote_fetchAchievementsWithCompletedDateBetweenStart:(NSDate *)arg1 end:(NSDate *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)remote_fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_fetchNumberOfUnviewedAchievementsWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)remote_fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_markAchievementAsViewed:(_HKAchievement *)arg1 completion:(void (^)(_HKAchievement *, NSError *))arg2;
- (void)remote_markAchievementDefinitionIdentifierAlertViewed:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_markAchievementsAlerted:(NSArray *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_nextScheduledAchievementDefinitionAlertTaskDateWithCompletion:(void (^)(NSDate *, NSError *))arg1;
- (void)remote_registerForAchievementDefinitionNotificationsWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)remote_resetAchievementDefinitionAlertedStates:(BOOL)arg1 availabilityStates:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_runAchievementsFixupAsDryRun:(BOOL)arg1 completion:(void (^)(NSArray *, BOOL, NSError *))arg2;
- (void)remote_setAchievementAssetsServerURL:(NSURL *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_setCurrentActivityCacheOverrideDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_updateAllAchievementAssetsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end


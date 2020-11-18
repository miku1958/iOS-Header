//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPrivateZoneController.h>

#import <NewsCore/FCTagSettingsDelegate-Protocol.h>

@class FCTagSettings, NSDate, NSNumber, NSString;

@interface FCUserInfo : FCPrivateZoneController <FCTagSettingsDelegate>
{
    BOOL _useParsecResults;
    BOOL _iCloudAccountChanged;
    FCTagSettings *_tagSettings;
    NSNumber *_totalMeteredCount;
    NSDate *_dateLastResetMeteredCount;
}

@property (copy, nonatomic) NSDate *dateLastOpened;
@property (copy, nonatomic) NSDate *dateLastResetMeteredCount; // @synthesize dateLastResetMeteredCount=_dateLastResetMeteredCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *feldsparID;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL iCloudAccountChanged; // @synthesize iCloudAccountChanged=_iCloudAccountChanged;
@property (readonly, nonatomic) BOOL mightNeedToUpdateOnboardingVersion;
@property (copy, nonatomic) NSNumber *monthlyMeteredCount;
@property (readonly, copy, nonatomic) NSString *notificationsUserID;
@property (copy, nonatomic) NSNumber *onboardingVersionNumber;
@property (readonly, nonatomic) BOOL shouldShowDefaultForYou;
@property (readonly) Class superclass;
@property (strong, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
@property (copy, nonatomic) NSNumber *totalMeteredCount; // @synthesize totalMeteredCount=_totalMeteredCount;
@property (readonly, nonatomic) BOOL useParsecResults; // @synthesize useParsecResults=_useParsecResults;
@property (copy, nonatomic) NSDate *userStartDate;

+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)iCloudDataKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresPushNotificationSupport;
- (void).cxx_destruct;
- (void)_persistNotificationsUserID:(id)arg1;
- (void)_removeiCloudDataValues;
- (void)accessTokenAddedForTagID:(id)arg1;
- (void)accessTokenDidChangeForTagID:(id)arg1;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)handleSyncWithUserInfoRecord:(id)arg1;
- (void)incrementMonthlyMeteredCountByOneWithArticleID:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4 iCloudAccountChanged:(BOOL)arg5;
- (void)loadLocalCachesFromStore;
- (void)maybeUpdateOnboardingVersion:(CDUnknownBlockType)arg1;
- (void)prepareForUse;
- (void)removeObserver:(id)arg1;
- (void)syncLocalNotificationsUserID:(id)arg1 withRemoteNotificationsUserID:(id)arg2;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateIsMeteredLimitReachedWithArticleID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


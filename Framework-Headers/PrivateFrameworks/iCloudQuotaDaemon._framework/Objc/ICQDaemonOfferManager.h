//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FLFollowUpController, NSNumber, NSURLSession, _ICQAccountManager;

@interface ICQDaemonOfferManager : NSObject
{
    NSURLSession *_sharedURLSession;
    FLFollowUpController *_followUpController;
    _ICQAccountManager *_accountManager;
}

@property (readonly) _ICQAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property (nonatomic, getter=isBuddyOfferEnabled) BOOL buddyOfferEnabled;
@property (nonatomic, getter=isLegacyDeviceStorageLevelNotificationEnabled) BOOL legacyDeviceStorageLevelNotificationEnabled;
@property (readonly) NSURLSession *sharedURLSession; // @synthesize sharedURLSession=_sharedURLSession;
@property (nonatomic) BOOL shouldDirectToStorageManagement;
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) BOOL simulatedDeviceStorageAlmostFull;
@property (strong, nonatomic) NSNumber *simulatedPhotosLibrarySize;

+ (id)ckBackupDeviceID;
+ (id)sharedDaemonOfferManager;
- (void).cxx_destruct;
- (id)URLForAccount:(id)arg1 quotaKey:(id)arg2;
- (void)_addCommonHeadersToRequest:(id)arg1 account:(id)arg2;
- (void)_addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2;
- (BOOL)_attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2;
- (void)_clearStorageManagementFollowup;
- (void)_daemonOfferStubsDictionaryForAccount:(id)arg1 isForBuddy:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchDaemonOfferForAccount:(id)arg1 stub:(id)arg2 notificationID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchDaemonOfferStubsForAccount:(id)arg1 isForBuddy:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchDictionaryForAccount:(id)arg1 quotaKey:(id)arg2 stub:(id)arg3 notificationID:(id)arg4 contextDictionary:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)_isBackupEnabledForAccount:(id)arg1;
- (void)_mockFetchDictionaryForAccount:(id)arg1 quotaKey:(id)arg2 stub:(id)arg3 notificationID:(id)arg4 contextDictionary:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_placeholderOfferForAccount:(id)arg1 isForBuddy:(BOOL)arg2 error:(id)arg3;
- (void)_postDaemonOfferChangedDueToPushDarwinNotification;
- (void)_postFollowupForDaemonOffer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postOfferType:(id)arg1 isForBuddy:(BOOL)arg2;
- (void)_postStorageManagementFollowup;
- (void)_processPushNotificationDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_pushNotificationDictionary;
- (void)_reconsiderOffersForAccount:(id)arg1 isForBuddy:(BOOL)arg2 choiceHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_sanitizedNotificationDictionary:(id)arg1 account:(id)arg2;
- (void)_showDaemonAlertForOffer:(id)arg1 notificationDictionary:(id)arg2 store:(id)arg3 account:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_storageManagementFollowupActions;
- (id)_storageManagementFollowupItem;
- (id)_storageManagementFollowupNotification;
- (void)_teardownCachedBuddyOffer;
- (void)_teardownCachedOfferAndNotify:(BOOL)arg1;
- (void)_teardownCachedOffersAndNotify:(BOOL)arg1;
- (void)_updateOffer:(id)arg1 buttonId:(id)arg2 info:(id)arg3 account:(id)arg4 accountStore:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_updateQuotaForAccount:(id)arg1 withServerDictionary:(id)arg2;
- (BOOL)_useFetchOffersDataDirectly;
- (void)addCommonHeadersToRequest:(id)arg1;
- (void)clearFollowupsWithCompletion:(CDUnknownBlockType)arg1;
- (void)daemonBuddyOfferDictionaryForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)daemonOfferDictionaryForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)daemonOfferSource;
- (void)forcePostFollowup;
- (id)init;
- (id)initWithAccountManager:(id)arg1;
- (void)postBuddyOfferType:(id)arg1;
- (void)postOfferType:(id)arg1;
- (void)processPushNotificationDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reconsiderOffersWithCompletion:(CDUnknownBlockType)arg1;
- (void)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (id)soonestOfferOrStubExpirationDate;
- (void)startDirectingToStorageManagement;
- (void)stopDirectingToStorageManagement;
- (void)teardownCachedBuddyOffer;
- (void)teardownCachedOffer;
- (void)teardownCachedOffers;
- (void)teardownOffersForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PDCloudStoreManagerDelegate-Protocol.h>
#import <PassKitCore/PDPushNotificationConsumer-Protocol.h>
#import <PassKitCore/PDScheduledActivityClient-Protocol.h>

@class CKServerChangeToken, NSHashTable, NSSet, NSString, PDCloudStoreManager, PDPushNotificationManager, PKPaymentTransactionProcessor;
@protocol OS_dispatch_queue, PDCloudStoreDataSource;

@interface PDCloudStoreNotificationCoordinator : NSObject <PDPushNotificationConsumer, PDCloudStoreManagerDelegate, PDScheduledActivityClient>
{
    NSHashTable *_observers;
    PDPushNotificationManager *_pushNotificationManager;
    id<PDCloudStoreDataSource> _cloudStoreDataSource;
    PKPaymentTransactionProcessor *_transactionProcessor;
    PDCloudStoreManager *_cloudStoreManager;
    CKServerChangeToken *_currentServerChangeToken;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_proactiveFetchQueue;
    NSSet *_pushTopics;
    BOOL _isProcessingCloudStorePushNotification;
    BOOL _shouldProcessCloudStoreNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)canInitalizeCloudStoreWithWebService:(id)arg1;
- (void).cxx_destruct;
- (id)_backgroundActivityNameForBackgroundInterval:(unsigned long long)arg1;
- (void)_cloudStoreInitializationAndShouldTryToScheudleBackgroundActivities:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cloudStoreInitializationWithCompletion:(CDUnknownBlockType)arg1;
- (double)_nextTimeIntervalForBackgroundInterval:(unsigned long long)arg1;
- (void)_performCloudStoreContainerInitalizationBackgroundActivityWithCurrentInterval:(unsigned long long)arg1 nextBackgroundInterval:(unsigned long long)arg2;
- (void)_processCloudStorePushNotification;
- (void)_recordAggdCloudStoreBackgroundContainerSetupResult:(BOOL)arg1 forCurrentBackgroundInterval:(unsigned long long)arg2;
- (void)_registerForPushNotifications;
- (void)_scheduleCloudStoreContainerSetupBackgroundActivityWithNextInterval:(unsigned long long)arg1;
- (void)_scheduleFirstCloudStoreContainerSetupBackgroundActivityIfNeccessary;
- (BOOL)_shouldScheduleInitalCloudStoreContainerSetupBackgroundActivity;
- (void)_unregisterForPushNotifications;
- (void)_unscheduleBackgroundContainerSetupActivities;
- (void)allItemsOfClassType:(Class)arg1 storeLocally:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyPushNotificationToken:(id)arg1;
- (BOOL)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (BOOL)canSyncTransactionToCloudKitWithBackingData:(BOOL)arg1 passUniqueIdentifier:(id)arg2 serviceIdentifier:(id)arg3;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreManager:(id)arg1 createdZoneWithName:(id)arg2;
- (void)cloudStoreManager:(id)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreManagerShouldUnscheduleAllBackgroundActivities:(id)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAndStoreChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2 transactionProcessor:(id)arg3;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2 transactionProcessor:(id)arg3 initalizeCloudStoreManager:(BOOL)arg4;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)invalidateCloudStore;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;
- (id)pushNotificationTopics;
- (void)registerObserver:(id)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestUpdatesForPassUniqueIdenitifer:(id)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithHandler:(CDUnknownBlockType)arg1;
- (void)simulateCloudStorePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import <PassKitCore/PDCloudStoreServiceExportedInterface-Protocol.h>

@class NSString, PDCloudStoreNotificationCoordinator, PKEntitlementWhitelist;

@interface PDCloudStoreService : PDXPCService <PDCloudStoreServiceExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;
}

@property (strong, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator; // @synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptShareInvitation:(id)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusForContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)declineInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deleteZone:(id)arg1 containerName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConnection:(id)arg1;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)noteAccountDeletedWithHandler:(CDUnknownBlockType)arg1;
- (void)noteCloudSyncPassesSwitchChangedWithHandler:(CDUnknownBlockType)arg1;
- (void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recreateZone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithIdentifier:(id)arg1 zoneNames:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendShareInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)serviceResumed;
- (void)serviceSuspended;
- (void)setupCloudDatabaseForContainerName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareForZoneName:(id)arg1 containerName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 includeServerData:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)uploadTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 includeServerData:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;

@end


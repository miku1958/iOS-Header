//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/IDSServiceDelegate-Protocol.h>

@class IDSService, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, PKProximityAdvertiser;
@protocol OS_dispatch_queue, PKIDSManagerDataSource, PKIDSManagerDelegate;

@interface PKIDSManager : NSObject <IDSServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_idsQueue;
    NSMutableArray *_remoteDevices;
    NSMutableArray *_paymentRequests;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_thumbnailCompletionHandlers;
    PKProximityAdvertiser *_proximityAdvertiser;
    NSHashTable *_delegates;
    NSObject<OS_dispatch_queue> *_stateQueue;
    id<PKIDSManagerDataSource> _dataSource;
    NSMutableArray *_pendingCancellations;
    NSMutableDictionary *_pendingDiscoveries;
    IDSService *_service;
    NSMutableDictionary *_recentlySeenUUIDs;
}

@property (nonatomic) id<PKIDSManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSArray<PKIDSManagerDelegate> *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) NSArray *paymentRequests;
@property (strong, nonatomic) NSMutableArray *pendingCancellations; // @synthesize pendingCancellations=_pendingCancellations;
@property (strong, nonatomic) NSMutableDictionary *pendingDiscoveries; // @synthesize pendingDiscoveries=_pendingDiscoveries;
@property (strong, nonatomic) NSMutableDictionary *recentlySeenUUIDs; // @synthesize recentlySeenUUIDs=_recentlySeenUUIDs;
@property (readonly, weak, nonatomic) NSArray *remoteDevices;
@property (strong, nonatomic) IDSService *service; // @synthesize service=_service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_archiveDevicesToDisk;
- (BOOL)_deviceIsRegistered:(id)arg1;
- (id)_fetchPaymentInstruments;
- (BOOL)_hasRegisteredAccounts;
- (void)_logCloudPairingState;
- (void)_paymentCancellationReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentClientUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentDiscoveryRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentDiscoveryResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentHostUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentSetupRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_populateDevicesIfNeeded;
- (id)_preparePaymentDeviceResponse;
- (void)_queue_addThumbnailCompletionHandler:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)_queue_removeThumbnailCompletionHandlersForKeys:(id)arg1;
- (void)_registerListeners;
- (id)_remoteDevicesWithArchive;
- (void)_sendDeviceDiscoveryRequestWithProximity:(BOOL)arg1 devices:(id)arg2;
- (void)_sendDiscoveryResponse:(id)arg1 toDeviceWithFromID:(id)arg2;
- (void)_thumbnailRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_thumbnailResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)addDelegate:(id)arg1;
- (id)cancelRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deleteArchivedDevices;
- (void)discoverRemoteDevices;
- (void)discoverRemoteDevicesWithProximity:(BOOL)arg1;
- (BOOL)hasRemoteDevices;
- (id)init;
- (id)initWithIDSService:(id)arg1;
- (id)initWithTargetQueue:(id)arg1;
- (void)invalidateMessage:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)requestForIdentifier:(id)arg1;
- (id)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (id)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)sendSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;

@end


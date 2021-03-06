//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/IDSServiceDelegate-Protocol.h>

@class BLTPBProtobufSequenceNumberManager, BLTSimpleCache, NSLock, NSMutableDictionary, NSString;
@protocol BLTAbstractIDSDevice, BLTAbstractIDSService, OS_dispatch_queue;

@interface BLTRemoteObject : NSObject <IDSServiceDelegate>
{
    NSMutableDictionary *_idsSendIDToCompletionHandler;
    NSMutableDictionary *_idsSendIDToResponseHandler;
    NSMutableDictionary *_idsFileIDToResponseHandler;
    NSString *_serviceName;
    BOOL _full;
    NSObject<OS_dispatch_queue> *_idsQueue;
    id<BLTAbstractIDSDevice> _defaultPairedDevice;
    NSMutableDictionary *_idsRequestMessageTypeToSelector;
    NSLock *_sequenceNumberSendLock;
    NSObject<OS_dispatch_queue> *_connectionStatusQueue;
    unsigned long long _stateHandler;
    unsigned long long _simConnectionState;
    id _simConnectionStateHandlerToken;
    BOOL _pairedDeviceReady;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned long long _lastKnownConnectionStatus;
    id<BLTAbstractIDSService> _service;
    BLTPBProtobufSequenceNumberManager *_sequenceNumberManager;
    BLTSimpleCache *_mruCacheOfSends;
    BLTSimpleCache *_mruCacheOfReceives;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastKnownConnectionStatus; // @synthesize lastKnownConnectionStatus=_lastKnownConnectionStatus;
@property (strong, nonatomic) BLTSimpleCache *mruCacheOfReceives; // @synthesize mruCacheOfReceives=_mruCacheOfReceives;
@property (strong, nonatomic) BLTSimpleCache *mruCacheOfSends; // @synthesize mruCacheOfSends=_mruCacheOfSends;
@property (getter=isPairedDeviceReady) BOOL pairedDeviceReady; // @synthesize pairedDeviceReady=_pairedDeviceReady;
@property (readonly, nonatomic) BLTPBProtobufSequenceNumberManager *sequenceNumberManager; // @synthesize sequenceNumberManager=_sequenceNumberManager;
@property (readonly, nonatomic) id<BLTAbstractIDSService> service; // @synthesize service=_service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_callSendCompletionHandlerWithSuccess:(BOOL)arg1 identifier:(id)arg2 error:(id)arg3;
- (void)_deviceConnectionStatusChanged:(id)arg1;
- (void)_handleNewSessionState:(unsigned long long)arg1;
- (BOOL)_idsQueueCallSendCompletionHandlerWithSuccess:(BOOL)arg1 identifier:(id)arg2 error:(id)arg3;
- (void)_queueHandleIDSProtobuf:(id)arg1;
- (void)_queuePerformSend:(CDUnknownBlockType)arg1 responseToRequest:(id)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 shortDescription:(id)arg5 onlyOneFor:(id)arg6 allowCloudDelivery:(BOOL)arg7 nonWaking:(BOOL)arg8 didSend:(CDUnknownBlockType)arg9 andResponse:(CDUnknownBlockType)arg10;
- (void)_queueSendRequest:(id)arg1;
- (void)_queueUpdateConnectionStatusWithResetDefaulteDevice:(BOOL)arg1;
- (void)_removeAndHandleResponseHandler:(id)arg1;
- (void)_sendAckInitialSequenceNumberForSession:(id)arg1 sessionState:(unsigned long long)arg2;
- (void)_sendAckInitialSequenceNumberForSession:(id)arg1 withAssert:(BOOL)arg2 sessionState:(unsigned long long *)arg3;
- (void)_sendAssertForSession;
- (BOOL)_sequenceErrorDidHappenAndHandled:(long long)arg1 service:(id)arg2 incomingIdentifier:(id)arg3;
- (void)_setStandaloneTestModeEnabled:(BOOL)arg1;
- (void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(long long)arg3;
- (void)_updateConnectionStatus;
- (void)_updateConnectionStatusWithResetDefaulteDevice:(BOOL)arg1;
- (id)_wrapError:(id)arg1 identifier:(id)arg2;
- (unsigned long long)connectionStatus;
- (void)dealloc;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4;
- (void)handleAckInitialSequenceNumberRequest:(id)arg1;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (void)handleIDSProtobuf:(id)arg1;
- (void)handleIncomingMessage:(id)arg1;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2 andClientQueue:(id)arg3;
- (void)registerProtobufHandlers;
- (void)sendFileURL:(id)arg1 withTimeout:(id)arg2 extraMetadata:(id)arg3 responseHandlers:(id)arg4 didSend:(CDUnknownBlockType)arg5 didQueue:(CDUnknownBlockType)arg6;
- (void)sendRequest:(id)arg1;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(CDUnknownBlockType)arg3;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(CDUnknownBlockType)arg4;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(CDUnknownBlockType)arg4 didQueue:(CDUnknownBlockType)arg5;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 didSend:(CDUnknownBlockType)arg5;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(CDUnknownBlockType)arg6 andResponse:(CDUnknownBlockType)arg7;
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(CDUnknownBlockType)arg7;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;

@end


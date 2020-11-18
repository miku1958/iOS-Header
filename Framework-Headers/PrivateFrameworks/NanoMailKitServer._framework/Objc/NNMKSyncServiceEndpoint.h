//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NNMKSyncServiceEndpoint : NSObject <IDSServiceDelegate>
{
    BOOL _isConnected;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    IDSService *_idsService;
    NSString *_idsServiceName;
    NSMutableDictionary *_repeatPreventionRecords;
    NSObject<OS_dispatch_source> *_repeatPreventionCleanupTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property (strong, nonatomic) NSString *idsServiceName; // @synthesize idsServiceName=_idsServiceName;
@property (nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *repeatPreventionCleanupTimer; // @synthesize repeatPreventionCleanupTimer=_repeatPreventionCleanupTimer;
@property (strong, nonatomic) NSMutableDictionary *repeatPreventionRecords; // @synthesize repeatPreventionRecords=_repeatPreventionRecords;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectivityChange;
- (BOOL)_isConnected;
- (void)_removeExpiredRepeatPreventionRecords;
- (id)_sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 shortTimeout:(BOOL)arg4;
- (void)_storeRepeatPreventionId:(id)arg1 priority:(unsigned long long)arg2;
- (BOOL)_willIdRepeat:(id)arg1;
- (void)connectivityChanged;
- (void)dealloc;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)initWithIDSServiceName:(id)arg1 queue:(id)arg2;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)resetRepeatPreventionHistory;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 repeatPreventionId:(id)arg4 shortTimeout:(BOOL)arg5;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 shortTimeout:(BOOL)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)serviceSpaceDidBecomeAvailable:(id)arg1;
- (void)spaceBecameAvailable;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;

@end


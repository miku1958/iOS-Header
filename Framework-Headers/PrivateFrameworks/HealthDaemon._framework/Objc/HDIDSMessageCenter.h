//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/IDSServiceDelegate-Protocol.h>

@class HDDaemon, HDIDSPersistentDictionary, IDSService, NSMutableDictionary, NSString, NSUUID;
@protocol HDIDSMessageCenterDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HDIDSMessageCenter : NSObject <IDSServiceDelegate>
{
    HDDaemon *_daemon;
    NSString *_serviceIdentifier;
    NSString *_shortServiceIdentifier;
    NSUUID *_pairingUUID;
    IDSService *_service;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    HDIDSPersistentDictionary *_persistentContextStore;
    double _nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    _Atomic BOOL _invalidated;
    id<HDIDSMessageCenterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HDIDSMessageCenterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) IDSService *idsService;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property (readonly) Class superclass;

+ (id)createPersistentDictionaryWithURL:(id)arg1;
- (void).cxx_destruct;
- (void)_expireMessages;
- (void)_handleError:(id)arg1 context:(id)arg2;
- (id)_logPrefix;
- (id)_mockDeviceWithNRDevice:(id)arg1;
- (id)_pbMappingForMessageID:(unsigned short)arg1;
- (id)_queue;
- (void)_sendResponse:(id)arg1;
- (void)_updateExpireTimerWithTimestamp:(double)arg1;
- (void)addErrorHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addRequestHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addResponseHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)cancelPendingRequestsWithMessageID:(unsigned short)arg1 device:(id)arg2;
- (void)dealloc;
- (id)deviceForFromID:(id)arg1;
- (id)initWithIDSServiceIdentifier:(id)arg1 persistentDictionary:(id)arg2 queue:(id)arg3 daemon:(id)arg4;
- (void)invalidate;
- (void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3;
- (id)nanoSyncDevices;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2;
- (void)resume;
- (void)sendRequest:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;

@end

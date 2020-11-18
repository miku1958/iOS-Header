//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPSecuritySessionEncryption, NSData, NSObject;
@protocol HAPSecuritySessionDelegate, OS_dispatch_queue;

@interface HAPSecuritySession : HMFObject
{
    unsigned long long _state;
    NSData *_broadcastKey;
    id<HAPSecuritySessionDelegate> _delegate;
    unsigned long long _role;
    unsigned long long _resumeSessionID;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    struct PairingSessionPrivate *_pairingSession;
    HAPSecuritySessionEncryption *_encryption;
}

@property (strong, nonatomic) NSData *broadcastKey; // @synthesize broadcastKey=_broadcastKey;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, weak) id<HAPSecuritySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) HAPSecuritySessionEncryption *encryption; // @synthesize encryption=_encryption;
@property (readonly, getter=isOpen) BOOL open;
@property (readonly, getter=isOpening) BOOL opening;
@property (nonatomic) struct PairingSessionPrivate *pairingSession; // @synthesize pairingSession=_pairingSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, nonatomic) unsigned long long resumeSessionID; // @synthesize resumeSessionID=_resumeSessionID;
@property (readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
@property unsigned long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (id)_broadcastInfo;
- (void)_closeWithError:(id)arg1;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)arg1;
- (id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int *)arg2;
- (void)_handleSetupExchangeComplete;
- (BOOL)_initializeSetupSession:(unsigned long long)arg1;
- (void)_initiateClientSessionSetupExchange;
- (id)_inputInfo;
- (void)_invalidate;
- (void)_notifyOpened;
- (void)_notifyOpening;
- (id)_outputInfo;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)close;
- (void)closeWithError:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (id)description;
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (id)getBroadcastEncryptionKey;
- (id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3;
- (void)open;
- (void)reallyOpen;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)setResumeSessionID:(unsigned long long)arg1;

@end


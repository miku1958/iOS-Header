//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;
@protocol HAPSecuritySessionDelegate, OS_dispatch_queue;

@interface HAPSecuritySession : NSObject
{
    id<HAPSecuritySessionDelegate> _delegate;
    unsigned long long _role;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned long long _state;
    struct PairingSessionPrivate *_pairingSession;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, weak) id<HAPSecuritySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSData *inputKey; // @synthesize inputKey=_inputKey;
@property (strong, nonatomic) NSMutableData *inputNonce; // @synthesize inputNonce=_inputNonce;
@property (strong, nonatomic) NSData *outputKey; // @synthesize outputKey=_outputKey;
@property (strong, nonatomic) NSMutableData *outputNonce; // @synthesize outputNonce=_outputNonce;
@property (nonatomic) struct PairingSessionPrivate *pairingSession; // @synthesize pairingSession=_pairingSession;
@property (readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)_handleSetupExchangeComplete;
- (BOOL)_initializeSetupSession;
- (void)_initiateClientSessionSetupExchange;
- (id)_inputInfo;
- (void)_invalidate;
- (void)_notifyOpened;
- (void)_notifyOpening;
- (id)_outputInfo;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)close;
- (void)dealloc;
- (id)debugDescription;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (id)description;
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (id)initWithRole:(unsigned long long)arg1 delegate:(id)arg2;
- (void)open;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;

@end


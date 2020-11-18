//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTimerDelegate-Protocol.h>

@class HAPTimer, NSString;
@protocol HAPPairSetupSessionDelegate, OS_dispatch_queue;

@interface HAPPairSetupSession : NSObject <HAPTimerDelegate>
{
    id<HAPPairSetupSessionDelegate> _delegate;
    long long _role;
    long long _options;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned long long _state;
    struct PairingSessionPrivate *_pairingSession;
    HAPTimer *_backoffTimer;
}

@property (strong, nonatomic) HAPTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) id<HAPPairSetupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long options; // @synthesize options=_options;
@property (readonly, nonatomic) struct PairingSessionPrivate *pairingSession; // @synthesize pairingSession=_pairingSession;
@property (readonly, nonatomic) long long role; // @synthesize role=_role;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleBackoffExpiration;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)arg1;
- (void)_handlePairSetupExchangeComplete;
- (BOOL)_initializeSession;
- (void)_initiateClientPairSetupExchange;
- (void)_invalidate;
- (void)_processSetupCode:(id)arg1 error:(id)arg2;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)_stopWithError:(id)arg1;
- (void)dealloc;
- (id)descriptionWithPointer:(BOOL)arg1;
- (void)handleBackoffRequestWithTimeout:(double)arg1;
- (void)handleInvalidSetupCode;
- (BOOL)handleSavePeerRequestWithPeerIdentity:(id)arg1 error:(id *)arg2;
- (void)handleSetupCodeRequest;
- (id)init;
- (id)initWithRole:(long long)arg1 options:(long long)arg2 delegate:(id)arg3;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (id)shortDescription;
- (void)start;
- (void)stop;
- (void)stopWithError:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end


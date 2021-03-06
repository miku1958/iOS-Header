//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>

#import <CoreHAP/HAPPairSetupSessionClientDelegate-Protocol.h>

@class HAPPairSetupSession, NSError, NSString;
@protocol HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerTransport;

@interface HAP2AccessoryServerPairingDriverPairSetupWorkItem : HAP2AccessoryServerPairingDriverWorkItem <HAPPairSetupSessionClientDelegate>
{
    BOOL _invalidSetupCode;
    id<HAP2AccessoryServerPairingDriverDelegate> _delegate;
    id<HAP2AccessoryServerTransport> _transport;
    HAPPairSetupSession *_pairingSession;
    unsigned long long _pairSetupType;
    double _backoffInterval;
    NSError *_cancelError;
}

@property (nonatomic) double backoffInterval; // @synthesize backoffInterval=_backoffInterval;
@property (strong, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HAP2AccessoryServerPairingDriverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInvalidSetupCode) BOOL invalidSetupCode; // @synthesize invalidSetupCode=_invalidSetupCode;
@property (readonly, nonatomic) unsigned long long pairSetupType; // @synthesize pairSetupType=_pairSetupType;
@property (strong, nonatomic) HAPPairSetupSession *pairingSession; // @synthesize pairingSession=_pairingSession;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HAP2AccessoryServerTransport> transport; // @synthesize transport=_transport;

+ (id)pairSetupWithType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_pairingStoppedWithError:(id)arg1;
- (void)_resetPairingState;
- (void)cancelWithError:(id)arg1;
- (id)initWithPairSetupType:(unsigned long long)arg1;
- (BOOL)pairSetupSession:(id)arg1 didPairWithPeer:(id)arg2 error:(id *)arg3;
- (BOOL)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;
- (id)pairSetupSession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;
- (void)pairSetupSession:(id)arg1 didReceiveProductData:(id)arg2;
- (void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pairSetupSession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)pairSetupSession:(id)arg1 didStopWithError:(id)arg2;
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1;
- (void)pairSetupSessionDidStart:(id)arg1;
- (void)runForPairingDriver:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessory.h>

#import <CoreHAP/HAPAccessoryServerInternalDelegate-Protocol.h>
#import <CoreHAP/HAPRelayActivationClientDelegate-Protocol.h>
#import <CoreHAP/HAPRelayPairingClientDelegate-Protocol.h>

@class HAPCharacteristic, HAPRelayActivationClient, HAPRelayPairingClient, NSString;

@interface HAPRelayAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate, HAPRelayActivationClientDelegate, HAPRelayPairingClientDelegate>
{
    BOOL _relayEnabled;
    HAPRelayActivationClient *_relayActivationClient;
    HAPRelayPairingClient *_relayPairingClient;
    unsigned long long _relayState;
    HAPCharacteristic *_relayControlPointCharacteristic;
    HAPCharacteristic *_relayEnabledCharacteristic;
    NSString *_relayAccessoryIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *relayAccessoryIdentifier; // @synthesize relayAccessoryIdentifier=_relayAccessoryIdentifier;
@property (readonly, nonatomic) HAPRelayActivationClient *relayActivationClient; // @synthesize relayActivationClient=_relayActivationClient;
@property (strong, nonatomic) HAPCharacteristic *relayControlPointCharacteristic; // @synthesize relayControlPointCharacteristic=_relayControlPointCharacteristic;
@property (nonatomic, getter=isRelayEnabled) BOOL relayEnabled; // @synthesize relayEnabled=_relayEnabled;
@property (strong, nonatomic) HAPCharacteristic *relayEnabledCharacteristic; // @synthesize relayEnabledCharacteristic=_relayEnabledCharacteristic;
@property (readonly, nonatomic) HAPRelayPairingClient *relayPairingClient; // @synthesize relayPairingClient=_relayPairingClient;
@property (readonly, nonatomic) unsigned long long relayState; // @synthesize relayState=_relayState;
@property (readonly) Class superclass;

+ (id)requiredRelayServiceCharacteristics;
- (void).cxx_destruct;
- (void)_handleRelayActivationCertificate:(id)arg1;
- (void)_handleRelayActivationChallenge:(id)arg1;
- (void)_handleRelayControlPointCharacteristicTransactionWithTLV8Data:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRelayPairingAccessTokenRequestWithAccessToken:(id)arg1 accessoryIdentifier:(id)arg2;
- (void)_handleRelayPairingIdentifierRequest;
- (void)_handleRelayPairingPairingTokenRequestForControllerIdentifier:(id)arg1;
- (BOOL)_parseRelayService:(id)arg1;
- (BOOL)_parseServices;
- (id)_relayActivationClient;
- (id)_relayPairingClient;
- (unsigned long long)_relayState;
- (void)_setRelayActivationClient:(id)arg1;
- (void)_setRelayEnabled:(BOOL)arg1;
- (void)_setRelayPairingClient:(id)arg1;
- (void)_setRelayState:(unsigned long long)arg1;
- (void)_stopRelayActivationWithError:(id)arg1;
- (void)_stopRelayPairingWithError:(id)arg1;
- (void)_updateRelayEnabled:(BOOL)arg1;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (void)addRelayPairingWithIdentifier:(id)arg1 accessToken:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (void)relayActivationClient:(id)arg1 didCloseWithError:(id)arg2;
- (void)relayActivationClient:(id)arg1 didReceiveChallenge:(id)arg2;
- (void)relayActivationClient:(id)arg1 didReceiveRelayCertificate:(id)arg2;
- (void)relayPairingClient:(id)arg1 didCloseWithError:(id)arg2;
- (void)relayPairingClient:(id)arg1 didReceiveAccessToken:(id)arg2 accessoryIdentifier:(id)arg3;
- (void)relayPairingClient:(id)arg1 didReceiveControllerIdentifier:(id)arg2;
- (void)removeRelayPairingWithIdentifier:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startRelayActivationWithActivationClient:(id)arg1;
- (void)startRelayPairingWithPairingClient:(id)arg1;
- (BOOL)supportsRelay;

@end

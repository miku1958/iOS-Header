//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2AccessoryServerSecureTransportPairVerify.h>

@class HAPSecuritySessionEncryption;

@interface HAP2AccessoryServerSecureTransportThreadPaired : HAP2AccessoryServerSecureTransportPairVerify
{
    HAPSecuritySessionEncryption *_eventEncryption;
}

@property (strong, nonatomic) HAPSecuritySessionEncryption *eventEncryption; // @synthesize eventEncryption=_eventEncryption;

- (void).cxx_destruct;
- (id)decryptData:(id)arg1 type:(unsigned long long)arg2 error:(id *)arg3;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (id)securitySessionDidRequestAdditionalDerivedKeyTuples:(id)arg1;

@end


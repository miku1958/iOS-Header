//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, TPPolicyVersion;

@interface TPPeerStableInfo : NSObject
{
    int _syncUserControllableViews;
    unsigned long long _clock;
    TPPolicyVersion *_frozenPolicyVersion;
    TPPolicyVersion *_flexiblePolicyVersion;
    NSDictionary *_policySecrets;
    NSString *_deviceName;
    NSString *_serialNumber;
    NSString *_osVersion;
    NSData *_recoverySigningPublicKey;
    NSData *_recoveryEncryptionPublicKey;
    NSData *_data;
    NSData *_sig;
}

@property (nonatomic) unsigned long long clock; // @synthesize clock=_clock;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property (readonly) TPPolicyVersion *flexiblePolicyVersion; // @synthesize flexiblePolicyVersion=_flexiblePolicyVersion;
@property (readonly) TPPolicyVersion *frozenPolicyVersion; // @synthesize frozenPolicyVersion=_frozenPolicyVersion;
@property (readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property (strong, nonatomic) NSDictionary *policySecrets; // @synthesize policySecrets=_policySecrets;
@property (strong, nonatomic) NSData *recoveryEncryptionPublicKey; // @synthesize recoveryEncryptionPublicKey=_recoveryEncryptionPublicKey;
@property (strong, nonatomic) NSData *recoverySigningPublicKey; // @synthesize recoverySigningPublicKey=_recoverySigningPublicKey;
@property (readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property (strong, nonatomic) NSData *sig; // @synthesize sig=_sig;
@property (readonly, nonatomic) int syncUserControllableViews; // @synthesize syncUserControllableViews=_syncUserControllableViews;

- (void).cxx_destruct;
- (id)bestPolicyVersion;
- (BOOL)checkSignatureWithKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithClock:(unsigned long long)arg1 frozenPolicyVersion:(id)arg2 flexiblePolicyVersion:(id)arg3 policySecrets:(id)arg4 syncUserControllableViews:(int)arg5 deviceName:(id)arg6 serialNumber:(id)arg7 osVersion:(id)arg8 recoverySigningPubKey:(id)arg9 recoveryEncryptionPubKey:(id)arg10 data:(id)arg11 sig:(id)arg12;
- (id)initWithClock:(unsigned long long)arg1 frozenPolicyVersion:(id)arg2 flexiblePolicyVersion:(id)arg3 policySecrets:(id)arg4 syncUserControllableViews:(int)arg5 deviceName:(id)arg6 serialNumber:(id)arg7 osVersion:(id)arg8 signingKeyPair:(id)arg9 recoverySigningPubKey:(id)arg10 recoveryEncryptionPubKey:(id)arg11 error:(id *)arg12;
- (id)initWithData:(id)arg1 sig:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPeerStableInfo:(id)arg1;

@end


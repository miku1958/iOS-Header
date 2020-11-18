//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, TransparencyManagedDataStore, TransparencyTrustedKeyStore, VRFPublicKey;

@interface KTApplicationPublicKeyStore : NSObject
{
    int _vrfType;
    VRFPublicKey *_vrfKey;
    TransparencyTrustedKeyStore *_appKeyStore;
    TransparencyTrustedKeyStore *_tltKeyStore;
    unsigned long long _patLogBeginningMs;
    unsigned long long _tltLogBeginningMs;
    NSString *_application;
    TransparencyManagedDataStore *_dataStore;
    NSData *_patConfigProof;
    NSDictionary *_trustedAppSigningKeys;
    NSArray *_trustedAppLeafs;
    NSDictionary *_trustedTltSigningKeys;
    NSArray *_trustedTltLeafs;
    NSArray *_trustedIntermediates;
}

@property (strong) TransparencyTrustedKeyStore *appKeyStore; // @synthesize appKeyStore=_appKeyStore;
@property (strong) NSString *application; // @synthesize application=_application;
@property (strong) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property (strong) NSData *patConfigProof; // @synthesize patConfigProof=_patConfigProof;
@property unsigned long long patLogBeginningMs; // @synthesize patLogBeginningMs=_patLogBeginningMs;
@property (readonly) BOOL ready;
@property (strong) TransparencyTrustedKeyStore *tltKeyStore; // @synthesize tltKeyStore=_tltKeyStore;
@property unsigned long long tltLogBeginningMs; // @synthesize tltLogBeginningMs=_tltLogBeginningMs;
@property (strong) NSArray *trustedAppLeafs; // @synthesize trustedAppLeafs=_trustedAppLeafs;
@property (strong) NSDictionary *trustedAppSigningKeys; // @synthesize trustedAppSigningKeys=_trustedAppSigningKeys;
@property (strong) NSArray *trustedIntermediates; // @synthesize trustedIntermediates=_trustedIntermediates;
@property (strong) NSArray *trustedTltLeafs; // @synthesize trustedTltLeafs=_trustedTltLeafs;
@property (strong) NSDictionary *trustedTltSigningKeys; // @synthesize trustedTltSigningKeys=_trustedTltSigningKeys;
@property (strong) VRFPublicKey *vrfKey; // @synthesize vrfKey=_vrfKey;
@property int vrfType; // @synthesize vrfType=_vrfType;

- (void).cxx_destruct;
- (void)clearState:(id *)arg1;
- (id)copyKeyStoreState;
- (id)copyVRFKeyFromConfigProof:(id)arg1 error:(id *)arg2;
- (BOOL)detectEpochChangeAndResetData:(unsigned long long)arg1 patLogBeginningMs:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithApplication:(id)arg1 dataStore:(id)arg2 diskState:(id)arg3 error:(id *)arg4;
- (id)initWithApplication:(id)arg1 dataStore:(id)arg2 response:(id)arg3 error:(id *)arg4;
- (BOOL)processDiskState:(id)arg1 error:(id *)arg2;
- (BOOL)processKeyData:(id)arg1 tltLeafs:(id)arg2 intermediates:(id)arg3 patConfigProof:(id)arg4 error:(id *)arg5;
- (BOOL)processPublicKeysResponse:(id)arg1 error:(id *)arg2;
- (void)startLogBeginTimesSampler;
- (BOOL)verifyCertificates:(id)arg1 intermediates:(id)arg2 application:(id)arg3 error:(id *)arg4;

@end

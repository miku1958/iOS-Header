//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NGMPublicPreKey, SigningPublicKey;

@interface NGMPublicDeviceIdentity : NSObject
{
    SigningPublicKey *_signingKey;
    NGMPublicPreKey *_prekey;
}

@property (strong, nonatomic) NGMPublicPreKey *prekey; // @synthesize prekey=_prekey;
@property (strong, nonatomic) SigningPublicKey *signingKey; // @synthesize signingKey=_signingKey;

+ (id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)description;
- (id)identityData;
- (id)initWithPrekey:(id)arg1 signingKey:(id)arg2;
- (BOOL)isValidSigningDestination;
- (id)prekeyData;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id *)arg3;
- (id)sealMessage:(id)arg1 withEncryptedAttributes:(id)arg2 signedByFullIdentity:(id)arg3 error:(id *)arg4;
- (BOOL)verifySignature:(id)arg1 formatter:(id)arg2;

@end


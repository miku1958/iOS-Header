//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

#import <IDSFoundation/NSSecureCoding-Protocol.h>

@interface IDSMPFullLegacyIdentity : IDSMPIdentity <NSSecureCoding>
{
}

@property (readonly, nonatomic) struct _SecMPFullIdentity *fullIdentity;

+ (struct _SecMPPublicIdentity *)_copyPublicIdentityFromFullIdentity:(struct _SecMPFullIdentity *)arg1 error:(id *)arg2;
+ (struct _SecMPFullIdentity *)_createFullIdentityFromData:(id)arg1 error:(id *)arg2;
+ (struct _SecMPFullIdentity *)_createFullIdentityWithDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;
+ (struct _SecMPFullIdentity *)_createFullIdentityWithError:(id *)arg1;
+ (id)identityWithData:(id)arg1 error:(id *)arg2;
+ (id)identityWithDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;
+ (id)identityWithError:(id *)arg1;
+ (BOOL)supportsSecureCoding;
- (unsigned int)dataProtectionClassWithError:(id *)arg1;
- (id)dataRepresentationWithError:(id *)arg1;
- (BOOL)didDataRepresentationFormatChangeFromDataRepresentation:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullIdentity:(struct _SecMPFullIdentity *)arg1;
- (id)protectedHashOfMessageData:(id)arg1 error:(id *)arg2;
- (id)publicIdentityWithError:(id *)arg1;
- (BOOL)purgeFromKeychain:(id *)arg1;
- (BOOL)updateIdentityToDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;
- (id)verifyAndExposeData:(id)arg1 withSigner:(id)arg2 error:(id *)arg3;

@end


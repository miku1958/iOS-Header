//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFCiphertext.h>

@class NSData, _SFECPublicKey;

@interface _SFIESCiphertext : _SFCiphertext
{
    id _iesCiphertextInternal;
}

@property (readonly) NSData *authenticationCode;
@property (readonly) _SFECPublicKey *ephemeralSenderPublicKey;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCiphertext:(id)arg1 ephemeralSenderPublicKey:(id)arg2 authenticationCode:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


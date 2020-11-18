//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFKeyPair.h>

@class _SFECKeySpecifier;

@interface _SFECKeyPair : _SFKeyPair
{
    id _ecKeyPairInternal;
}

@property (readonly, copy, nonatomic) _SFECKeySpecifier *keySpecifier; // @dynamic keySpecifier;

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (id)_specifierForSecKey:(struct __SecKey *)arg1;
- (void).cxx_destruct;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(struct NSString *)arg2;
- (id)performWithCCKey:(CDUnknownBlockType)arg1;
- (id)publicKey;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFPublicKey.h>

@class _SFECKeySpecifier;

@interface _SFECPublicKey : _SFPublicKey
{
    id _ecPublicKeyInternal;
}

@property (readonly, copy, nonatomic) _SFECKeySpecifier *keySpecifier; // @dynamic keySpecifier;

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (id)_specifierForSecKey:(struct __SecKey *)arg1;
- (void).cxx_destruct;
- (id)performWithCCKey:(CDUnknownBlockType)arg1;

@end

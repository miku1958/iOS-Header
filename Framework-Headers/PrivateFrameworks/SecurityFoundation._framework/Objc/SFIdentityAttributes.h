//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeychainItemAttributes-Protocol.h>

@class NSString, _SFAsymmetricKeySpecifier;

@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes>
{
    id _identityAttributesInternal;
    struct NSString *_privateKeyDomain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCertificate;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identityName;
@property (readonly, copy, nonatomic) _SFAsymmetricKeySpecifier *keySpecifier;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *privateKeyDomain; // @synthesize privateKeyDomain=_privateKeyDomain;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setKeySpecifier:(id)arg1;

@end


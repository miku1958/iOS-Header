//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSData, NSString, SAMLKeyInfo, SAMLSignedInfo;

__attribute__((visibility("hidden")))
@interface SAMLSignature : SAMLBaseElement
{
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SAMLKeyInfo *keyInfo;
@property (readonly, nonatomic) NSData *signatureValue;
@property (readonly, nonatomic) NSString *signatureValueId;
@property (readonly, nonatomic) SAMLSignedInfo *signedInfo;

+ (id)createElement:(id *)arg1;
- (BOOL)isValid;

@end


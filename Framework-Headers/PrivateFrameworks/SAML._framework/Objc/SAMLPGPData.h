//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SAMLPGPData : SAMLBaseElement
{
}

@property (readonly, nonatomic) NSData *keyId;
@property (readonly, nonatomic) NSData *packet;

+ (id)createElement:(id *)arg1;

@end

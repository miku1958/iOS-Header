//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLAssertion;

__attribute__((visibility("hidden")))
@interface SAMLAdvice : SAMLBaseElement
{
}

@property (strong, nonatomic) SAMLAssertion *assertion;
@property (strong, nonatomic) NSString *assertionIDRef;
@property (strong, nonatomic) NSString *assertionURIRef;

+ (id)createElement:(id *)arg1;

@end

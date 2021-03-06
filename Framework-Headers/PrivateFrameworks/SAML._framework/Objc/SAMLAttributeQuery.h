//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/XMLWrapperDoc.h>

@class NSData, NSString, SAMLAttributeQueryElement;

@interface SAMLAttributeQuery : XMLWrapperDoc
{
    NSData *_schemaData;
    SAMLAttributeQueryElement *_requestElement;
}

@property (readonly, nonatomic) NSString *channelId;
@property (strong, nonatomic) SAMLAttributeQueryElement *requestElement; // @synthesize requestElement=_requestElement;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1;
- (void)addAttribute:(id)arg1 values:(id)arg2;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (void)setSubjectFromResponse:(id)arg1;

@end


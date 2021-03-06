//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SSVMediaSocialPostDescription : NSObject <NSCopying, SSXPCCoding>
{
    NSNumber *_accountIdentifier;
    NSArray *_attachments;
    BOOL _attributed;
    NSString *_authorIdentifier;
    NSString *_authorType;
    NSArray *_contentItems;
    NSArray *_externalServiceDestinations;
    NSString *_sourceApplicationIdentifier;
    NSString *_text;
}

@property (copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property (nonatomic, getter=isAttributed) BOOL attributed; // @synthesize attributed=_attributed;
@property (copy, nonatomic) NSString *authorIdentifier; // @synthesize authorIdentifier=_authorIdentifier;
@property (copy, nonatomic) NSString *authorType; // @synthesize authorType=_authorType;
@property (copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *externalServiceDestinations; // @synthesize externalServiceDestinations=_externalServiceDestinations;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *sourceApplicationIdentifier; // @synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end


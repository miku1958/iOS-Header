//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, VSAccountProviderResponse;

@interface VSAccountMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_accountProviderIdentifier;
    NSDate *_authenticationExpirationDate;
    NSData *_verificationData;
    VSAccountProviderResponse *_accountProviderResponse;
}

@property (readonly, copy, nonatomic) NSString *SAMLAttributeQueryResponse;
@property (copy, nonatomic) NSString *accountProviderIdentifier; // @synthesize accountProviderIdentifier=_accountProviderIdentifier;
@property (strong, nonatomic) VSAccountProviderResponse *accountProviderResponse; // @synthesize accountProviderResponse=_accountProviderResponse;
@property (copy, nonatomic) NSDate *authenticationExpirationDate; // @synthesize authenticationExpirationDate=_authenticationExpirationDate;
@property (copy, nonatomic) NSData *verificationData; // @synthesize verificationData=_verificationData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


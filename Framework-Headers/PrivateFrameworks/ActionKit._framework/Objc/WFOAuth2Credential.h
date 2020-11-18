//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCopying-Protocol.h>
#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface WFOAuth2Credential : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_tokenType;
    NSString *_accessToken;
    NSString *_refreshToken;
    NSDate *_expirationDate;
    NSDictionary *_responseObject;
}

@property (readonly, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property (readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property (readonly, nonatomic) NSDictionary *responseObject; // @synthesize responseObject=_responseObject;
@property (readonly, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

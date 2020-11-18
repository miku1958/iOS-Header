//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSString;

@interface NNMKAccountIdentity : NSObject <NSSecureCoding>
{
    NSString *_accountId;
    NSString *_username;
    NSString *_displayName;
    NSString *_token;
    NSString *_refreshToken;
    unsigned long long _identityType;
}

@property (copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (nonatomic) unsigned long long identityType; // @synthesize identityType=_identityType;
@property (copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property (copy, nonatomic) NSString *token; // @synthesize token=_token;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

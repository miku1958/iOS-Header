//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ECAuthenticationScheme, NSString;
@protocol ECAuthenticatableAccount, ECAuthenticatableConnection, ECSASLSecurityLayer;

@interface ECSASLAuthenticator : NSObject
{
    id<ECAuthenticatableConnection> _connection;
    ECAuthenticationScheme *_authenticationScheme;
    id<ECAuthenticatableAccount> _account;
    long long _authenticationState;
}

@property (readonly, nonatomic) id<ECAuthenticatableAccount> account;
@property (readonly, nonatomic) ECAuthenticationScheme *authenticationScheme; // @synthesize authenticationScheme=_authenticationScheme;
@property (nonatomic) long long authenticationState;
@property (readonly, nonatomic) BOOL couldRetry;
@property (readonly, nonatomic) BOOL justSentPlainTextPassword;
@property (readonly, nonatomic) NSString *saslName;
@property (readonly, nonatomic) id<ECSASLSecurityLayer> securityLayer;
@property (readonly, nonatomic) BOOL supportsInitialClientResponse;
@property (readonly, nonatomic) BOOL usesBase64EncodeResponseData;
@property (readonly, nonatomic, getter=isUsingSSL) BOOL usingSSL;

- (void).cxx_destruct;
- (id)authScheme;
- (id)initWithAuthenticationScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;
- (id)responseForServerData:(id)arg1;
- (void)setMissingPasswordError;

@end


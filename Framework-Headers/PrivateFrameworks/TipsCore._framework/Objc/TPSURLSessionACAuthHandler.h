//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TipsCore/TPSURLSessionCustomAuthHandling-Protocol.h>

@class NSString, PPCExtensibleSSOAuthenticator, TPSURLSessionACAuthContext;
@protocol OS_dispatch_queue;

@interface TPSURLSessionACAuthHandler : NSObject <TPSURLSessionCustomAuthHandling>
{
    TPSURLSessionACAuthContext *_authenticationContext;
    TPSURLSessionACAuthContext *_authContext;
    PPCExtensibleSSOAuthenticator *_ssoAuthenticator;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (copy, nonatomic) TPSURLSessionACAuthContext *authContext; // @synthesize authContext=_authContext;
@property (readonly, copy, nonatomic) TPSURLSessionACAuthContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PPCExtensibleSSOAuthenticator *ssoAuthenticator; // @synthesize ssoAuthenticator=_ssoAuthenticator;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;

+ (BOOL)canAuthenticateWithURLResponse:(id)arg1;
- (void).cxx_destruct;
- (void)_authenticateWithAppleConnect:(CDUnknownBlockType)arg1;
- (id)_authenticationTokenForHost:(id)arg1 error:(id *)arg2;
- (void)authenticateForURLResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)customHeaderFields;
- (id)initWithAuthenticationContext:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDOAuthSignerProtocol-Protocol.h>

@class ACDClient, ACDClientAuthorizationManager, ACDDatabaseConnection, NSString;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol>
{
    ACDClient *_client;
    ACDDatabaseConnection *_databaseConnection;
    ACDClientAuthorizationManager *_authorizationManager;
    BOOL _shouldIncludeAppIdInRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;
- (void).cxx_destruct;
- (BOOL)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (id)ckForAccountType:(id)arg1;
- (id)csForAccountType:(id)arg1;
- (id)init;
- (id)initWithClient:(id)arg1 databaseConnection:(id)arg2;
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setShouldIncludeAppIdInRequest:(BOOL)arg1;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;

@end


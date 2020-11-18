//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSXPCConnection;
@protocol ACDOAuthSignerProtocol;

@interface ACOAuthSigner : NSObject
{
    NSXPCConnection *_connection;
    ACAccount *_account;
    id<ACDOAuthSignerProtocol> _proxyShim;
    BOOL _shouldIncludeAppIdInRequest;
}

@property (nonatomic) BOOL shouldIncludeAppIdInRequest; // @synthesize shouldIncludeAppIdInRequest=_shouldIncludeAppIdInRequest;

- (void).cxx_destruct;
- (void)_connectToRemoteOAuthSignerUsingEndpoint:(id)arg1;
- (void)dealloc;
- (void)disconnectFromRemoteOAuthSigner;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 remoteEndpoint:(id)arg2;
- (id)signedURLRequestWithURLRequest:(id)arg1;
- (id)signedURLRequestWithURLRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3;
- (id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3;

@end

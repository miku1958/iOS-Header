//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LAContext, NSXPCConnection;
@protocol SecureStorageService;

@interface LAStorage : NSObject
{
    unsigned int _instanceId;
    long long _domain;
    LAContext *_authenticationContext;
    NSXPCConnection *_connection;
    id<SecureStorageService> _remoteObjectProxy;
}

@property (readonly, nonatomic) LAContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property (readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, nonatomic) long long domain; // @synthesize domain=_domain;
@property (readonly, nonatomic) unsigned int instanceId; // @synthesize instanceId=_instanceId;
@property (readonly, nonatomic) id<SecureStorageService> remoteObjectProxy; // @synthesize remoteObjectProxy=_remoteObjectProxy;

+ (unsigned int)newInstanceId;
+ (id)objectDescription:(id)arg1;
- (void).cxx_destruct;
- (long long)_authenticationPolicyForKey:(long long)arg1 selector:(SEL)arg2;
- (void)_bootstrapServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_bootstrapServiceWithAuthenticationPolicy:(long long)arg1 proxyBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_callProxyBlock:(CDUnknownBlockType)arg1 authenticationPolicy:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_connectToEndpoint:(id)arg1;
- (void)_resetConnection;
- (void)boolForKey:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)boolForKey:(long long)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithDomain:(long long)arg1 authenticationContext:(id)arg2;
- (void)objectForKey:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setBool:(BOOL)arg1 forKey:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setBool:(BOOL)arg1 forKey:(long long)arg2 error:(id *)arg3;
- (void)setObject:(id)arg1 forKey:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

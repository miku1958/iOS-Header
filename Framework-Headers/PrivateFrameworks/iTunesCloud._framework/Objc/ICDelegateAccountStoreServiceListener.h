//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICDelegateAccountStoreService-Protocol.h>
#import <iTunesCloud/NSXPCListenerDelegate-Protocol.h>

@class ICUserIdentityStore, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface ICDelegateAccountStoreServiceListener : NSObject <NSXPCListenerDelegate, ICDelegateAccountStoreService>
{
    BOOL _ignoresEntitlements;
    NSXPCListener *_listener;
    ICUserIdentityStore *_testingIdentityStore;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *XPCEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)machServiceListener;
+ (id)testingListenerWithIdentityStore:(id)arg1;
- (void).cxx_destruct;
- (id)_identityStore;
- (id)_initWithXPCListener:(id)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recreateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resume;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)suspend;

@end


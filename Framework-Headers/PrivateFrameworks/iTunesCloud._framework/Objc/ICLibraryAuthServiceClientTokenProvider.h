//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICLibraryAuthServiceClientTokenProviderProtocol-Protocol.h>
#import <iTunesCloud/NSXPCListenerDelegate-Protocol.h>

@class AFMultiUserConnection, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ICLibraryAuthServiceClientTokenProvider : NSObject <ICLibraryAuthServiceClientTokenProviderProtocol, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_tokenCache;
    BOOL _isService;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
    AFMultiUserConnection *_siriConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (id)_clientConnection;
- (void)_commitCache;
- (void)_handleLibraryAuthServiceClientTokenDidChangeDistributedNotification:(id)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (BOOL)_isPrivacyAcknowledgementRequired;
- (void)_loadCache;
- (void)_refreshTokenForDSID:(id)arg1 forExternalRequest:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_refreshTokensForDSIDs:(id)arg1 forExternalRequest:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeConnection:(id)arg1;
- (BOOL)_shouldStopBackgroundRefreshForError:(id)arg1;
- (BOOL)_updateEntriesForAccountsChanges;
- (void)_updateRefreshTimer;
- (void)_updateTokenCacheEntryForDSID:(id)arg1 tokenResult:(id)arg2 error:(id)arg3;
- (void)addTokenResult:(id)arg1 forDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cachedTokenAndResetCache:(BOOL)arg1;
- (void)dealloc;
- (void)getAllTokenStatusForAssistantForcingRefresh:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllTokensForAssistantForcingRefresh:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getTokenForDSID:(id)arg1 forceRefresh:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTokenForcingRefresh:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getTokenResultForDSID:(id)arg1 forceRefresh:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTokenResultsForDSIDs:(id)arg1 forceRefresh:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTokenStatusForDSIDs:(id)arg1 forcingRefresh:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTokenStatusForcingRefresh:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startService;
- (void)stopService;

@end

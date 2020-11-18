//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOResourceManifestServerProxy-Protocol.h>

@class GEOActiveTileGroup, GEOResourceManifestConfiguration, NSHashTable, NSLock, NSString;
@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy>
{
    id<GEOResourceManifestServerProxyDelegate> _delegate;
    NSObject<OS_xpc_object> *_conn;
    NSLock *_connLock;
    NSHashTable *_cancellingConnections;
    NSLock *_cancellingConnectionsLock;
    unsigned long long _retryCount;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
    NSObject<OS_dispatch_queue> *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
    NSLock *_authTokenLock;
    NSString *_authToken;
    int _activeTileGroupChangedNotificationToken;
}

@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_handleMessage:(id)arg1 xpcMessage:(id)arg2;
- (void)_setupConnection;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (id)authToken;
- (void)closeConnection;
- (id)configuration;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)dealloc;
- (void)forceUpdate:(CDUnknownBlockType)arg1;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (void)openConnection;
- (void)performOpportunisticResourceLoading;
- (oneway void)resetActiveTileGroup;
- (id)serverQueue;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;

@end

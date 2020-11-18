//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/NSXPCListenerDelegate-Protocol.h>
#import <PairedSync/PSYActivity-Protocol.h>
#import <PairedSync/PSYServiceSyncSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection, NSXPCListener, PSYServiceSyncSession;
@protocol OS_dispatch_queue, PSYSyncCoordinatorDelegate;

@interface PSYSyncCoordinator : NSObject <NSXPCListenerDelegate, PSYActivity, PSYServiceSyncSessionDelegate>
{
    NSXPCListener *_listener;
    CDUnknownBlockType _pendingCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _delegateLock;
    id<PSYSyncCoordinatorDelegate> _delegate;
    PSYServiceSyncSession *_activeSyncSession;
    int _syncSwitchIDToken;
    unsigned long long _syncRestriction;
    unsigned long long _syncIDOfStartedSync;
    BOOL _hasStartedListening;
    NSMutableDictionary *_nrDevices;
    NSString *_serviceName;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) PSYServiceSyncSession *activeSyncSession;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PSYSyncCoordinatorDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (readonly) Class superclass;

+ (id)filteredErrorWithError:(id)arg1;
+ (void)initialize;
+ (id)syncCoordinatorWithServiceName:(id)arg1;
- (void).cxx_destruct;
- (void)_cleanup;
- (BOOL)_pairedSyncFinishedMigrationSyncWithPairingID:(id)arg1;
- (BOOL)_pairedSyncFinishedReunionSync;
- (void)_registerMonitorAllNRDevicesForMigrationChanges:(CDUnknownBlockType)arg1;
- (void)_registerMonitorNRDevice:(id)arg1 forMigrationChanges:(CDUnknownBlockType)arg2;
- (unsigned long long)_syncRestriction;
- (void)_syncRestrictionDidUpdate:(id)arg1 forServiceName:(id)arg2;
- (void)_unregisterNRDeviceMonitors;
- (oneway void)abortSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginDryRunSyncWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)beginSyncWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deviceChanged:(id)arg1;
- (void)exitForTestInput:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 serviceLookupPath:(id)arg2;
- (void)invalidateActiveSyncSession;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performDelegateBlock:(CDUnknownBlockType)arg1;
- (id)progressHandler;
- (unsigned long long)readNotifyToken:(int)arg1;
- (void)registerForDeviceChangeNotifications;
- (int)registerNotifyTokenWithName:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)reportProgress:(double)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)syncDidComplete;
- (void)syncDidCompleteSending;
- (void)syncDidFailWithError:(id)arg1;
- (unsigned long long)syncRestriction;
- (void)syncSession:(id)arg1 didFailWithError:(id)arg2;
- (void)syncSession:(id)arg1 reportProgress:(double)arg2;
- (void)syncSessionDidComplete:(id)arg1;
- (void)syncSessionDidCompleteSending:(id)arg1;
- (id)syncSessionForOptions:(id)arg1 supportsMigrationSync:(BOOL)arg2;
- (void)unregisterForDeviceChangeNotifications;

@end


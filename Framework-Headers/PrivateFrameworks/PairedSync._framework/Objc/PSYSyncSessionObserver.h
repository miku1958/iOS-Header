//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/PSYSyncSessionObserverInterface-Protocol.h>

@class NSString, NSXPCConnection, PSYSyncSession, PSYSyncSessionObserverExportedObject;
@protocol OS_dispatch_queue, PSYSyncSessionObserverDelegate;

@interface PSYSyncSessionObserver : NSObject <PSYSyncSessionObserverInterface>
{
    PSYSyncSession *_currentSyncSession;
    PSYSyncSessionObserverExportedObject *_exportedObject;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    BOOL _shouldCheckinAfterInvalidationHandler;
    int _daemonDidLaunchNotifyToken;
    BOOL _resignedActive;
    id<PSYSyncSessionObserverDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PSYSyncSessionObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_checkin:(BOOL)arg1;
- (void)_connectionInvalidated;
- (void)_disconnectFromPairedSync;
- (void)_handleDaemonStarted;
- (void)_queue_invalidateSyncSession:(id)arg1;
- (void)_queue_loadConnectionIfNeeded;
- (void)_reconnectToPairedSync;
- (void)dealloc;
- (void)didBecomeActive:(id)arg1;
- (id)init;
- (oneway void)invalidateSyncSession:(id)arg1;
- (id)providerWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)setCurrentSyncSession:(id)arg1;
- (void)startObservingSyncSessionsWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)syncSessionWillStart:(id)arg1;
- (oneway void)updateSyncSession:(id)arg1;
- (void)willResignActive:(id)arg1;

@end


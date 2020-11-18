//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSXPCConnection, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IDSXPCDaemonController : NSObject
{
    IDSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_collaboratorPromiseDictionary;
    BOOL _sync;
    NSMutableDictionary *_syncCollaboratorDictionary;
    NSMapTable *_interruptionHandlerByTarget;
}

@property (strong, nonatomic) NSMutableDictionary *collaboratorPromiseDictionary; // @synthesize collaboratorPromiseDictionary=_collaboratorPromiseDictionary;
@property (strong, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) NSMapTable *interruptionHandlerByTarget; // @synthesize interruptionHandlerByTarget=_interruptionHandlerByTarget;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSMutableDictionary *syncCollaboratorDictionary; // @synthesize syncCollaboratorDictionary=_syncCollaboratorDictionary;

+ (void)performDaemonControllerTask:(CDUnknownBlockType)arg1;
+ (id)weakSharedInstance;
- (void).cxx_destruct;
- (id)_collaboratorWithIdentifier:(id)arg1 interface:(id)arg2 timeout:(double)arg3 errorHandler:(CDUnknownBlockType)arg4 resolverBlock:(CDUnknownBlockType)arg5;
- (id)_daemonProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_initWithQueue:(id)arg1 isSync:(BOOL)arg2;
- (id)_sync_collaboratorWithIdentifier:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 resolverBlock:(CDUnknownBlockType)arg3;
- (id)_timingOutDaemonProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)activityMonitorCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)addInterruptionHandler:(CDUnknownBlockType)arg1 forTarget:(id)arg2;
- (void)dealloc;
- (id)initSyncControllerWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)interalTestingCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)opportunisticCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)pairedDeviceManagerCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)pairingCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)pairingCollaboratorWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)performTask:(CDUnknownBlockType)arg1;
- (id)registrationCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)removeInterruptionHandlerForTarget:(id)arg1;
- (id)reunionSyncCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;

@end

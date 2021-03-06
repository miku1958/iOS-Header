//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSXPCActivityMonitorClient-Protocol.h>

@class IDSXPCDaemonController, NSMutableDictionary, NSString;

@interface _IDSActivityMonitorXPCConnector : NSObject <IDSXPCActivityMonitorClient>
{
    NSMutableDictionary *_listenersByActivity;
    IDSXPCDaemonController *_daemonController;
    IDSXPCDaemonController *_syncDaemonController;
    CDUnknownBlockType _syncDaemonControllerBuilder;
    CDUnknownBlockType _daemonControllerBuilder;
}

@property (strong, nonatomic) IDSXPCDaemonController *daemonController; // @synthesize daemonController=_daemonController;
@property (copy, nonatomic) CDUnknownBlockType daemonControllerBuilder; // @synthesize daemonControllerBuilder=_daemonControllerBuilder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *listenersByActivity; // @synthesize listenersByActivity=_listenersByActivity;
@property (readonly) Class superclass;
@property (strong, nonatomic) IDSXPCDaemonController *syncDaemonController; // @synthesize syncDaemonController=_syncDaemonController;
@property (copy, nonatomic) CDUnknownBlockType syncDaemonControllerBuilder; // @synthesize syncDaemonControllerBuilder=_syncDaemonControllerBuilder;

+ (id)weakSharedInstance;
- (void).cxx_destruct;
- (void)_handleInterruption;
- (void)_updateActivity:(id)arg1 isSupported:(BOOL)arg2;
- (void)addListener:(id)arg1 forTopic:(id)arg2;
- (void)dealloc;
- (void)handleIncomingUpdate:(id)arg1 onActivity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSyncDaemonControllerBuilder:(CDUnknownBlockType)arg1 daemonControllerBuilder:(CDUnknownBlockType)arg2;
- (void)performAction:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)performSyncAction:(CDUnknownBlockType)arg1;
- (void)removeListener:(id)arg1 forTopic:(id)arg2;

@end


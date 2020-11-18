//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class HMDApplicationMonitor, HMFMessageDispatcher, LSApplicationWorkspace, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDApplicationRegistry : NSObject <HMFMessageReceiver, LSApplicationWorkspaceObserverProtocol>
{
    HMDApplicationMonitor *_monitor;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    HMFMessageDispatcher *_messageDispatcher;
    LSApplicationWorkspace *_appWorkspace;
    NSMutableDictionary *_applications;
}

@property (strong, nonatomic) LSApplicationWorkspace *appWorkspace; // @synthesize appWorkspace=_appWorkspace;
@property (strong, nonatomic) NSMutableDictionary *applications; // @synthesize applications=_applications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMDApplicationMonitor *monitor; // @synthesize monitor=_monitor;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)_startObservingAppUninstalls;
- (void)_stopObservingAppUninstalls;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)ignoredForegroundAppBundleIdentifiers;
- (id)init;
- (id)initWithMessageDispatcher:(id)arg1;
- (void)processTerminated:(id)arg1;
- (void)startMonitoringConnection:(id)arg1;
- (void)stopMonitoringConnection:(id)arg1;

@end


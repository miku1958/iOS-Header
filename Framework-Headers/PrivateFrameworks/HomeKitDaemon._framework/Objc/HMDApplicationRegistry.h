//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class HMDApplicationMonitor, LSApplicationWorkspace, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDApplicationRegistry : HMFObject <LSApplicationWorkspaceObserverProtocol, HMFLogging>
{
    HMDApplicationMonitor *_monitor;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    LSApplicationWorkspace *_appWorkspace;
    NSMutableDictionary *_applications;
}

@property (strong, nonatomic) LSApplicationWorkspace *appWorkspace; // @synthesize appWorkspace=_appWorkspace;
@property (strong, nonatomic) NSMutableDictionary *applications; // @synthesize applications=_applications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMDApplicationMonitor *monitor; // @synthesize monitor=_monitor;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_startObservingAppUninstalls;
- (void)_stopObservingAppUninstalls;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)ignoredForegroundAppBundleIdentifiers;
- (id)init;
- (id)initQueue:(id)arg1;
- (void)processTerminated:(id)arg1;
- (void)startMonitoringConnection:(id)arg1;
- (void)stopMonitoringConnection:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class BKSApplicationStateMonitor, HDDaemon, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDProcessStateManager : NSObject <HDDiagnosticObject>
{
    HDDaemon *_daemon;
    NSMutableDictionary *_processObserversByBundleID;
    NSHashTable *_foregroundClientProcessObservers;
    BKSApplicationStateMonitor *_applicationMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSMutableDictionary *_processInfoByBundleID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)applicationIsForeground:(id)arg1;
+ (id)bundleVersionStringForProcessIdentifier:(int)arg1;
+ (int)processIdentifierForApplicationIdentifier:(id)arg1;
- (void).cxx_destruct;
- (unsigned int)_getApplicationStateForBundleIdentifier:(id)arg1;
- (void)_handleBackboardApplicationInfoChanged:(id)arg1;
- (void)_queue_handleBackboardApplicationInfoChanged:(id)arg1;
- (void)_queue_handleProcessInfoChangedWithAllPreviousProcessInfos:(id)arg1;
- (void)_queue_notifyObserversProcessWithBundleIdentifier:(id)arg1 processIdentifier:(int)arg2 applicationStateChanged:(unsigned int)arg3 previousApplicationState:(unsigned int)arg4;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (BOOL)isApplicationStateForegroundForBundleIdentifier:(id)arg1;
- (BOOL)isApplicationStateSuspendedForBundleIdentifier:(id)arg1;
- (void)registerForegroundClientProcessObserver:(id)arg1;
- (BOOL)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)unregisterForegroundClientProcessObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2;

@end

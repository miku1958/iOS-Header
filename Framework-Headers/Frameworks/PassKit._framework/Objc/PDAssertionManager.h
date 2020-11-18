//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSXPCListenerDelegate-Protocol.h>
#import <PassKitCore/PDAssertionCoordinatorDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSHashTable, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface PDAssertionManager : NSObject <NSXPCListenerDelegate, PDAssertionCoordinatorDelegate>
{
    NSHashTable *_observers;
    NSXPCListener *_coordinatorListener;
    NSMutableDictionary *_coordinators;
    NSObject<OS_dispatch_queue> *_managerSerialQueue;
    BKSApplicationStateMonitor *_applicationStateMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAssertionCoordinator:(id)arg1 forProcessIdentifier:(id)arg2;
- (void)_applicationStateChanged:(id)arg1;
- (id)_coordinatorsBundleIdentifier;
- (id)_processNameWithPID:(int)arg1;
- (void)_removeAllAssertionCoordinators;
- (void)_removeAssertionCoordinator:(id)arg1;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (BOOL)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2;
- (void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2;
- (void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2;
- (id)assertionsOfType:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVOutputDeviceDiscoverySession, NSHashTable;
@protocol OS_dispatch_queue, PUAirPlayRouteObserverRegistryDelegate;

__attribute__((visibility("hidden")))
@interface PUAirPlayRouteObserverRegistry : NSObject
{
    BOOL __discoveryAllowed;
    AVOutputDeviceDiscoverySession *__discoverySession;
    id<PUAirPlayRouteObserverRegistryDelegate> _delegate;
    unsigned long long _routeAvailability;
    NSHashTable *__routeObservers;
    NSObject<OS_dispatch_queue> *__discoverySessionIsolationQueue;
}

@property (nonatomic, getter=_isDiscoveryAllowed, setter=_setDiscoveryAllowed:) BOOL _discoveryAllowed; // @synthesize _discoveryAllowed=__discoveryAllowed;
@property (strong, nonatomic, setter=_setDiscoverySession:) AVOutputDeviceDiscoverySession *_discoverySession; // @synthesize _discoverySession=__discoverySession;
@property (strong, nonatomic, setter=_setDiscoverySessionIsolationQueue:) NSObject<OS_dispatch_queue> *_discoverySessionIsolationQueue; // @synthesize _discoverySessionIsolationQueue=__discoverySessionIsolationQueue;
@property (strong, nonatomic, setter=_setRouteObservers:) NSHashTable *_routeObservers; // @synthesize _routeObservers=__routeObservers;
@property (weak, nonatomic) id<PUAirPlayRouteObserverRegistryDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, setter=_setRouteAvailability:) unsigned long long routeAvailability; // @synthesize routeAvailability=_routeAvailability;

- (void).cxx_destruct;
- (void)_appEnteredBackground:(id)arg1;
- (void)_appEnteringForeground:(id)arg1;
- (void)_availableOutputDevicesDidChange:(id)arg1;
- (void)_updateAllObservers;
- (void)_updateDiscoverySession;
- (void)_updateObserver:(id)arg1;
- (void)addRouteObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeRouteObserver:(id)arg1;

@end


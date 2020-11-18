//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairingProximity/PPDiscoveryManagerDelegate-Protocol.h>
#import <PairingProximity/PPNearbyWatchBulletinProviderDelegate-Protocol.h>

@class NSString, NSXPCConnection, PPDiscoveryManager;
@protocol OS_dispatch_source;

@interface PPNearbyWatchNotifier : NSObject <PPNearbyWatchBulletinProviderDelegate, PPDiscoveryManagerDelegate>
{
    NSObject<OS_dispatch_source> *_timerSource;
    PPDiscoveryManager *_discoveryManager;
    CDUnknownBlockType _discoveryCompletion;
    NSXPCConnection *_notificationService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType discoveryCompletion; // @synthesize discoveryCompletion=_discoveryCompletion;
@property (strong, nonatomic) PPDiscoveryManager *discoveryManager; // @synthesize discoveryManager=_discoveryManager;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSXPCConnection *notificationService; // @synthesize notificationService=_notificationService;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;

+ (BOOL)isWatchAppRemoved;
+ (id)sharedNotifier;
- (void).cxx_destruct;
- (void)_cleanupDiscoveryDidFindDevice:(BOOL)arg1 error:(id)arg2;
- (void)bulletinProviderDidClearBulletins:(id)arg1;
- (void)cancelDiscovery;
- (void)didDiscoverDeviceWithAdvertisingID:(id)arg1 signalStrength:(long long)arg2;
- (void)didStopDiscovering;
- (id)discoverForNearbyWatchesWithCompletion:(CDUnknownBlockType)arg1;
- (id)discoverForTimeInterval:(double)arg1 signalLimit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareServiceConnectionIfNeeded;

@end


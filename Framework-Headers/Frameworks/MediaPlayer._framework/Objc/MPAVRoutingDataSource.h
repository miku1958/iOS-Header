//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPAVRoutingDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _devicePresenceDetected;
    long long _discoveryMode;
}

@property (readonly, nonatomic) BOOL devicePresenceDetected; // @synthesize devicePresenceDetected=_devicePresenceDetected;
@property (nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property (readonly, nonatomic) BOOL supportsMultipleSelection;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_superclassRegisterNotifications;
- (void)_superclassUnregisterNotifications;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)getExternalScreenTypeWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPickedRouteHasVolumeControlWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;
- (BOOL)routeIsLeaderOfEndpoint:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unpickAirPlayAVRoutesWithCompletion:(CDUnknownBlockType)arg1;

@end


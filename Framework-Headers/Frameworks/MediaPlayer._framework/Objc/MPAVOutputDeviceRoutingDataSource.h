//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    void *_applicationOutputContext;
    BOOL _attemptedToInitializeAppOutputContext;
    void *_discoverySession;
    void *_callbackToken;
}

@property (copy, nonatomic) NSString *routingContextUID;

+ (id)_globalAudioSessionLock;
- (void).cxx_destruct;
- (void *)_copyApplicationOutputContext;
- (void *)_createDefaultApplicationOutputContext;
- (void)_endpointsDidChangeNotification:(id)arg1;
- (void)_outputDevicesDidChange:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)dealloc;
- (BOOL)devicePresenceDetected;
- (long long)discoveryMode;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end


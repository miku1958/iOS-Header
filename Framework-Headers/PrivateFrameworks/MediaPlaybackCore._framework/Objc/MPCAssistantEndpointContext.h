//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCAssistantContext.h>

@class MPCAssistantDiscovery, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MPCAssistantEndpointContext : MPCAssistantContext
{
    MPCAssistantDiscovery *_discoveryLogical;
    MPCAssistantDiscovery *_discoveryAudio;
    MPCAssistantDiscovery *_discoveryEndpoint;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_modificationInProgress;
}

@property (strong, nonatomic) NSObject<OS_dispatch_group> *modificationInProgress; // @synthesize modificationInProgress=_modificationInProgress;

- (void).cxx_destruct;
- (void)_discoverLocalEndpointFromDeviceInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setOutputDevices:(id)arg1 onEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateDiscoverableDeviceList:(id)arg1 deviceInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)modifySystemMusicContextForDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

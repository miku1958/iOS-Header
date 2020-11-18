//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaControls/MPAVOutputDevicePlaybackDataSource-Protocol.h>
#import <MediaControls/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaControls/MediaControlsHomeObserverDelegate-Protocol.h>

@class MPAVEndpointRoute, MPAVRoutingController, MPMediaControlsConfiguration, MediaControlsHomeObserver, NSArray, NSMutableDictionary, NSString;
@protocol MediaControlsEndpointsManagerDelegate, OS_dispatch_queue;

@interface MediaControlsEndpointsManager : NSObject <MPAVRoutingControllerDelegate, MediaControlsHomeObserverDelegate, MPAVOutputDevicePlaybackDataSource>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_lastDiffedRoutes;
    NSMutableDictionary *_endpointControllersMap;
    BOOL _didLoadHomeUIDsOnce;
    BOOL _isRequestingActiveRoute;
    MPMediaControlsConfiguration *_configuration;
    long long _discoveryMode;
    NSArray *_routes;
    id<MediaControlsEndpointsManagerDelegate> _delegate;
    MediaControlsHomeObserver *_homeObserver;
    MPAVRoutingController *_routingController;
    NSString *_activeSystemRouteUID;
    NSString *_pendingActiveSystemRouteUID;
}

@property (strong, nonatomic) MPAVEndpointRoute *activeSystemRoute;
@property (readonly, copy, nonatomic) NSString *activeSystemRouteUID; // @synthesize activeSystemRouteUID=_activeSystemRouteUID;
@property (readonly, copy, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MediaControlsEndpointsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MediaControlsHomeObserver *homeObserver; // @synthesize homeObserver=_homeObserver;
@property (readonly, copy, nonatomic) NSString *pendingActiveSystemRouteUID; // @synthesize pendingActiveSystemRouteUID=_pendingActiveSystemRouteUID;
@property (readonly, copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property (readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activeSystemRouteDidChange:(id)arg1;
- (id)_endpointControllerContainingOutputDevice:(id)arg1 endpointWrapper:(id *)arg2;
- (BOOL)_homeHasRoute:(id)arg1;
- (long long)_indexOfRouteWithUID:(id)arg1;
- (void)_setRoutes:(id)arg1 withChangeDetails:(id)arg2;
- (void)_updateActiveRoute;
- (void)_updateWithRoutes:(id)arg1;
- (void)dealloc;
- (id)endpointControllerForRoute:(id)arg1;
- (void)getOutputDeviceIsPlaying:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)homeObserverDidUpdateKnownUIDs:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;

@end


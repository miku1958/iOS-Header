//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPAVRoute, MPAVRoutingDataSource, NSArray, NSMutableArray, NSMutableSet, NSSet, NSString;
@protocol MPAVRoutingControllerDelegate, OS_dispatch_queue;

@interface MPAVRoutingController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_cachedRoutes;
    NSArray *_cachedPickedRoutes;
    NSMutableSet *_pendingPickedRoutes;
    MPAVRoute *_legacyCachedRoute;
    NSMutableArray *_asyncFetchingCompletionHandlers;
    BOOL _asyncFetchingRoutes;
    long long _externalScreenType;
    BOOL _hasExternalScreenType;
    BOOL _scheduledSendDelegateRoutesChanged;
    long long _volumeControlStateForPickedRoute;
    int _deviceAvailabilityNotifyToken;
    BOOL _deviceAvailabilityOverrideState;
    BOOL _fetchAvailableRoutesSynchronously;
    id<MPAVRoutingControllerDelegate> _delegate;
    MPAVRoutingDataSource *_dataSource;
    NSString *_name;
    long long _discoveryMode;
    NSString *_category;
    long long _routeTypes;
}

@property (readonly, copy, nonatomic) NSArray *availableRoutes;
@property (copy, nonatomic) NSString *category; // @synthesize category=_category;
@property (readonly, nonatomic) MPAVRoutingDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (weak, nonatomic) id<MPAVRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property (readonly, nonatomic) long long externalScreenType;
@property (nonatomic) BOOL fetchAvailableRoutesSynchronously; // @synthesize fetchAvailableRoutesSynchronously=_fetchAvailableRoutesSynchronously;
@property (readonly, nonatomic) BOOL hasPendingPickedRoutes;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) MPAVRoute *pendingPickedRoute;
@property (readonly, nonatomic) NSSet *pendingPickedRoutes; // @synthesize pendingPickedRoutes=_pendingPickedRoutes;
@property (readonly, nonatomic) MPAVRoute *pickedRoute;
@property (readonly, nonatomic) NSArray *pickedRoutes;
@property (nonatomic) long long routeTypes; // @synthesize routeTypes=_routeTypes;
@property (readonly, nonatomic) BOOL supportsMultipleSelection;
@property (readonly, nonatomic) BOOL volumeControlIsAvailable;

+ (id)_currentDeviceRoutingIconImage;
+ (id)_currentDeviceRoutingIconImageName;
+ (void)_getActiveRouteWithTimeout:(double)arg1 discoveredRoutes:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_iconImageForRoute:(id)arg1;
+ (void)getActiveRouteWithCompletion:(CDUnknownBlockType)arg1;
+ (void)getActiveRouteWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setActiveRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)systemRoute;
+ (id)systemRouteWithContextUID:(id)arg1;
- (void).cxx_destruct;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (id)_addPendingRoute:(id)arg1;
- (BOOL)_deviceAvailabilityOverrideState;
- (long long)_externalScreenType:(BOOL *)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_onQueueClearCachedRoutes;
- (void)_onQueueSetExternalScreenType:(long long)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (id)_pickedRouteInArray:(id)arg1;
- (id)_pickedRoutesInArray:(id)arg1;
- (void)_refreshPendingRoutes;
- (void)_registerNotifications;
- (void)_removePendingRoute:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_sendDelegateFailedToPickRouteWithError:(id)arg1;
- (void)_sendDelegatePickedRoutesChanged;
- (void)_setExternalScreenType:(long long)arg1;
- (void)_setVolumeControlStateForPickedRoute:(long long)arg1;
- (void)_unregisterNotifications;
- (void)_updateCachedRoutes;
- (BOOL)_updateGroupMembership:(long long)arg1 forRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (long long)_volumeControlStateForPickedRoute;
- (BOOL)addPickedRoute:(id)arg1;
- (BOOL)addPickedRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)airtunesRouteIsPicked;
- (void)clearCachedRoutes;
- (void)dealloc;
- (id)description;
- (void)fetchAvailableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getActiveRouteWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)handsetRouteIsPicked;
- (id)init;
- (id)initWithDataSource:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (void)logCurrentRoutes;
- (BOOL)pickBestDeviceRoute;
- (BOOL)pickHandsetRoute;
- (BOOL)pickRoute:(id)arg1;
- (BOOL)pickRoute:(id)arg1 withPassword:(id)arg2;
- (BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)pickSpeakerRoute;
- (BOOL)receiverRouteIsPicked;
- (BOOL)removePickedRoute:(id)arg1;
- (BOOL)removePickedRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)routeIsLeaderOfEndpoint:(id)arg1;
- (BOOL)routeIsPendingPick:(id)arg1;
- (BOOL)routeOtherThanHandsetAndSpeakerAvailable;
- (BOOL)routeOtherThanHandsetAvailable;
- (BOOL)speakerRouteIsPicked;
- (void)unpickAirPlayScreenRouteWithCompletion:(CDUnknownBlockType)arg1;
- (id)videoRouteForRoute:(id)arg1;
- (BOOL)wirelessDisplayRouteIsPicked;
- (BOOL)wirelessDisplayRoutesAvailable;

@end


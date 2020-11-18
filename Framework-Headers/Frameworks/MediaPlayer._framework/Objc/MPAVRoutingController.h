//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPAVRoute, NSArray, NSMutableArray, NSString;
@protocol MPAVRoutingControllerDelegate;

@interface MPAVRoutingController : NSObject
{
    NSArray *_cachedRoutes;
    MPAVRoute *_cachedPickedRoute;
    NSMutableArray *_asyncFetchingCompletionHandlers;
    BOOL _asyncFetchingRoutes;
    long long _externalScreenType;
    BOOL _hasExternalScreenType;
    BOOL _scheduledSendDelegateRoutesChanged;
    BOOL _pickedRouteHasVolumeControl;
    BOOL _hasVolumeControlInfoForPickedRoute;
    int _deviceAvailabilityNotifyToken;
    BOOL _deviceAvailabilityOverrideState;
    id<MPAVRoutingControllerDelegate> _delegate;
    NSString *_name;
    long long _discoveryMode;
    NSString *_category;
    MPAVRoute *_pendingPickedRoute;
}

@property (readonly, copy, nonatomic) NSArray *availableRoutes;
@property (copy, nonatomic) NSString *category; // @synthesize category=_category;
@property (weak, nonatomic) id<MPAVRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property (readonly, nonatomic) long long externalScreenType;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) MPAVRoute *pendingPickedRoute; // @synthesize pendingPickedRoute=_pendingPickedRoute;
@property (readonly, nonatomic) MPAVRoute *pickedRoute;
@property (readonly, nonatomic) BOOL volumeControlIsAvailable;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (id)_parseAVRouteDescriptions:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (id)_pickedRouteInArray:(id)arg1;
- (void)_registerNotifications;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_setExternalScreenType:(long long)arg1;
- (void)_unregisterNotifications;
- (void)_updateCachedRoutes;
- (BOOL)airtunesRouteIsPicked;
- (void)clearCachedRoutes;
- (void)dealloc;
- (id)description;
- (void)fetchAvailableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)handsetRouteIsPicked;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)logCurrentRoutes;
- (BOOL)pickBestDeviceRoute;
- (BOOL)pickHandsetRoute;
- (BOOL)pickRoute:(id)arg1;
- (BOOL)pickRoute:(id)arg1 withPassword:(id)arg2;
- (BOOL)pickSpeakerRoute;
- (BOOL)receiverRouteIsPicked;
- (BOOL)routeOtherThanHandsetAndSpeakerAvailable;
- (BOOL)routeOtherThanHandsetAvailable;
- (BOOL)speakerRouteIsPicked;
- (void)unpickAirPlayScreenRouteWithCompletion:(CDUnknownBlockType)arg1;
- (id)videoRouteForRoute:(id)arg1;
- (BOOL)wirelessDisplayRouteIsPicked;
- (BOOL)wirelessDisplayRoutesAvailable;

@end

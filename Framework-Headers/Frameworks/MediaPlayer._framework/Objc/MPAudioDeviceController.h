//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface MPAudioDeviceController : NSObject
{
    NSString *_category;
    id _delegate;
    BOOL _determiningPickableRoutes;
    BOOL _fakeRouteAvailable;
    NSArray *_pickableRoutes;
    NSDictionary *_pickedRoute;
    BOOL _pickedRouteHasVolumeControl;
    BOOL _pickedRouteHasVolumeControlIsValid;
    NSMutableArray *_pickableRoutesCompletionHandlers;
    BOOL _scheduledSendAudioRoutesDidChange;
}

@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL routeDiscoveryEnabled;

+ (void)_internalPushRouteDiscoveryMode:(long long)arg1;
+ (void)_internalSetSystemRouteDiscoveryMode:(long long)arg1;
+ (id)_routeDiscoveryModeStack;
+ (void)pushRouteDiscoveryMode:(long long)arg1;
+ (void)restoreRouteDiscoveryMode;
+ (BOOL)routeDiscoveryEnabled;
+ (long long)routeDiscoveryMode;
+ (void)setRouteDiscoveryEnabled:(BOOL)arg1;
+ (void)setRouteDiscoveryMode:(long long)arg1;
- (void).cxx_destruct;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (id)_pickableRoutes;
- (void)_pickableRoutesChangedNotification:(id)arg1;
- (id)_pickedRoute;
- (void)_portStatusDidChangeNotification:(id)arg1;
- (void)_registerNotifications;
- (void)_routeDiscoveryDidEndNotification:(id)arg1;
- (BOOL)_routeIsDisplayPort:(id)arg1;
- (BOOL)_routeIsHandset:(id)arg1;
- (BOOL)_routeIsHeadphones:(id)arg1;
- (BOOL)_routeIsReceiver:(id)arg1;
- (BOOL)_routeIsSpeaker:(id)arg1;
- (BOOL)_routeIsWireless:(id)arg1;
- (void)_scheduleSendDelegateAudioRoutesChanged;
- (void)_sendFakeRouteChange;
- (void)_unregisterNotifications;
- (BOOL)airtunesRouteIsPicked;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)clearCachedRoutes;
- (void)dealloc;
- (void)determinePickableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)handsetRouteIsPicked;
- (long long)indexOfPickedRoute;
- (long long)indexOfRouteWithName:(id)arg1;
- (id)init;
- (BOOL)isPickedRouteDistinctFromRoute:(id)arg1;
- (void)logCurrentRoutes;
- (id)nameOfPickedRoute;
- (unsigned long long)numberOfAudioRoutes;
- (BOOL)pickBestDeviceRoute;
- (BOOL)pickHandsetRoute;
- (BOOL)pickRoute:(id)arg1;
- (BOOL)pickRoute:(id)arg1 withPassword:(id)arg2;
- (BOOL)pickRouteAtIndex:(unsigned long long)arg1;
- (BOOL)pickRouteAtIndex:(unsigned long long)arg1 withPassword:(id)arg2;
- (BOOL)pickSpeakerRoute;
- (id)pickedRouteDescription;
- (BOOL)receiverRouteIsPicked;
- (void)restorePickedRoute;
- (id)routeDescriptionAtIndex:(unsigned long long)arg1;
- (id)routeNameAtIndex:(unsigned long long)arg1 isPicked:(BOOL *)arg2;
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (BOOL)routeRequiresPasswordAtIndex:(unsigned long long)arg1;
- (id)routeTypeAtIndex:(unsigned long long)arg1;
- (void)setCategory:(id)arg1;
- (BOOL)speakerRouteIsPicked;
- (BOOL)volumeControlIsAvailable;
- (BOOL)wirelessRouteIsPicked;

@end

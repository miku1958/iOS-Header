//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPAVBatteryLevel, MPAVRouteConnection, NSArray, NSDictionary, NSString;

@interface MPAVRoute : NSObject <NSSecureCoding>
{
    NSString *_routeName;
    BOOL _picked;
    NSDictionary *_avRouteDescription;
    MPAVRoute *_wirelessDisplayRoute;
    long long _displayRouteType;
    MPAVBatteryLevel *_batteryLevel;
    BOOL _canAccessRemoteAssets;
    BOOL _canPlayEncryptedProgressiveDownloadAssets;
    BOOL _canFetchMediaDataFromSender;
    BOOL _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
    BOOL _pickedOnPairedDevice;
    BOOL _playingOnPairedDevice;
    BOOL _requiresPassword;
    BOOL _carplayRoute;
    BOOL _homePodRoute;
    BOOL _b520Route;
    BOOL _homeTheaterRoute;
    BOOL _clusterRoute;
    NSString *_routeUID;
    NSString *_productIdentifier;
    NSString *_groupUID;
    long long _routeType;
    long long _pickableRouteType;
    long long _routeSubtype;
    NSArray *_clusterComposition;
    NSArray *_auxiliaryDevices;
    NSString *_playingPairedDeviceName;
    void *_externalDevice;
    long long _originalRouteSubtype;
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic, getter=isAirPlayRoute) BOOL airPlayRoute;
@property (readonly, nonatomic, getter=isAirPlayingToDevice) BOOL airPlayingToDevice;
@property (readonly, nonatomic, getter=isAirpodsRoute) BOOL airpodsRoute;
@property (readonly, nonatomic, getter=isAppleTVRoute) BOOL appleTVRoute;
@property (readonly, nonatomic) NSArray *auxiliaryDevices; // @synthesize auxiliaryDevices=_auxiliaryDevices;
@property (readonly, nonatomic) NSDictionary *avRouteDescription;
@property (readonly, nonatomic, getter=isB298Route) BOOL b298Route;
@property (readonly, nonatomic, getter=isB364Route) BOOL b364Route;
@property (readonly, nonatomic, getter=isB372Route) BOOL b372Route;
@property (readonly, nonatomic, getter=isB419Route) BOOL b419Route;
@property (readonly, nonatomic, getter=isB444Route) BOOL b444Route;
@property (readonly, nonatomic, getter=isB515Route) BOOL b515Route;
@property (readonly, nonatomic, getter=isB520Route) BOOL b520Route; // @synthesize b520Route=_b520Route;
@property (readonly, nonatomic) MPAVBatteryLevel *batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property (readonly, nonatomic, getter=isBeatsSoloRoute) BOOL beatsSoloRoute;
@property (readonly, nonatomic, getter=isBeatsStudioRoute) BOOL beatsStudioRoute;
@property (readonly, nonatomic, getter=isBeatsXRoute) BOOL beatsXRoute;
@property (readonly, nonatomic) BOOL canAccessRemoteAssets; // @synthesize canAccessRemoteAssets=_canAccessRemoteAssets;
@property (readonly, nonatomic) BOOL canFetchMediaDataFromSender; // @synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender;
@property (readonly, nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets; // @synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets;
@property (readonly, nonatomic, getter=isCarplayRoute) BOOL carplayRoute; // @synthesize carplayRoute=_carplayRoute;
@property (readonly, nonatomic) NSArray *clusterComposition; // @synthesize clusterComposition=_clusterComposition;
@property (readonly, nonatomic, getter=isClusterRoute) BOOL clusterRoute; // @synthesize clusterRoute=_clusterRoute;
@property (readonly, nonatomic) MPAVRouteConnection *connection; // @synthesize connection=_connection;
@property (readonly, nonatomic) NSString *designatedGroupLeaderName;
@property (readonly, nonatomic, getter=isDeviceSpeakerRoute) BOOL deviceSpeakerRoute;
@property (readonly, nonatomic, getter=isDisplayedAsPicked) BOOL displayAsPicked;
@property (nonatomic) long long displayRouteType;
@property (readonly, nonatomic, getter=_externalDevice) void *externalDevice; // @synthesize externalDevice=_externalDevice;
@property (readonly, nonatomic) NSString *groupLeaderAirplayIdentifier;
@property (readonly, nonatomic) NSString *groupUID; // @synthesize groupUID=_groupUID;
@property (readonly, nonatomic, getter=isH1Route) BOOL h1Route;
@property (readonly, nonatomic, getter=isHeadphonesRoute) BOOL headphonesRoute;
@property (readonly, nonatomic, getter=isHearingDeviceRoute) BOOL hearingDeviceRoute;
@property (readonly, nonatomic, getter=isHomePodRoute) BOOL homePodRoute; // @synthesize homePodRoute=_homePodRoute;
@property (readonly, nonatomic, getter=isHomeTheaterRoute) BOOL homeTheaterRoute; // @synthesize homeTheaterRoute=_homeTheaterRoute;
@property (readonly, nonatomic) BOOL isDeviceRoute;
@property (readonly, nonatomic) BOOL isSplitRoute;
@property (readonly, nonatomic, getter=isLowLatencyRoute) BOOL lowLatencyRoute;
@property (readonly, nonatomic) long long numberOfOutputDevices;
@property (readonly, nonatomic) long long originalRouteSubtype; // @synthesize originalRouteSubtype=_originalRouteSubtype;
@property (readonly, nonatomic) long long passwordType;
@property (readonly, nonatomic) long long pickableRouteType; // @synthesize pickableRouteType=_pickableRouteType;
@property (nonatomic, getter=isPicked) BOOL picked;
@property (readonly, nonatomic, getter=isPickedOnPairedDevice) BOOL pickedOnPairedDevice; // @synthesize pickedOnPairedDevice=_pickedOnPairedDevice;
@property (readonly, nonatomic, getter=isPlayingOnPairedDevice) BOOL playingOnPairedDevice; // @synthesize playingOnPairedDevice=_playingOnPairedDevice;
@property (readonly, nonatomic) NSString *playingPairedDeviceName; // @synthesize playingPairedDeviceName=_playingPairedDeviceName;
@property (readonly, nonatomic, getter=isPowerbeatsRoute) BOOL powerbeatsRoute;
@property (readonly, nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; // @synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (readonly, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property (readonly, nonatomic, getter=isProxyGroupPlayer) BOOL proxyGroupPlayer;
@property (readonly, nonatomic) BOOL requiresPassword; // @synthesize requiresPassword=_requiresPassword;
@property (copy, nonatomic) NSString *routeName;
@property (readonly, nonatomic) NSArray *routeNames;
@property (readonly, nonatomic) long long routeSubtype; // @synthesize routeSubtype=_routeSubtype;
@property (readonly, nonatomic) long long routeType; // @synthesize routeType=_routeType;
@property (readonly, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property (readonly, nonatomic, getter=isRoutingToWirelessDevice) BOOL routingToWirelessDevice;
@property (readonly, nonatomic, getter=isSetTopBoxRoute) BOOL setTopBoxRoute;
@property (readonly, nonatomic, getter=isShareableRoute) BOOL shareableRoute;
@property (readonly, nonatomic, getter=isSmartAudio) BOOL smartAudio;
@property (readonly, nonatomic, getter=isSplitRoute) BOOL splitRoute;
@property (readonly, nonatomic, getter=isSplitterCapable) BOOL splitterCapable;
@property (readonly, nonatomic, getter=isStereoPair) BOOL stereoPair;
@property (readonly, nonatomic) BOOL supportsAirPlayGrouping;
@property (readonly, nonatomic) BOOL supportsGrouping;
@property (readonly, nonatomic) BOOL supportsRemoteControl;
@property (readonly, nonatomic) BOOL supportsWirelessDisplay;
@property (readonly, nonatomic, getter=isTVRoute) BOOL tvRoute;
@property (readonly, nonatomic, getter=isTVStickRoute) BOOL tvStickRoute;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic, getter=isW1Route) BOOL w1Route;
@property (readonly, nonatomic, getter=isW2Route) BOOL w2Route;
@property (strong, nonatomic) MPAVRoute *wirelessDisplayRoute;

+ (id)clusterCompositionForOutputDevice:(id)arg1;
+ (long long)routeSubtypeForMRSubtype:(unsigned int)arg1 mrType:(unsigned int)arg2;
+ (long long)routeSubtypeForMRSubtype:(unsigned int)arg1 withOverridesFromMRType:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)containsDeviceWithSubtype:(long long)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setAVRouteDescription:(id)arg1;

@end


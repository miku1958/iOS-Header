//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoute : MPAVRoute
{
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
    MPMRAVEndpointWrapper *_endpointWrapper;
}

@property (readonly, nonatomic) BOOL canModifyGroupMembership;
@property (strong, nonatomic) MPAVRouteConnection *connection;
@property (readonly, nonatomic) void *endpoint;
@property (strong, nonatomic) MPMRAVEndpointWrapper *endpointWrapper; // @synthesize endpointWrapper=_endpointWrapper;
@property (readonly, nonatomic) NSString *sortName;

+ (void)getActiveEndpointRouteWithCompletion:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_endpointDidChange:(id)arg1;
- (void)_endpointOutputDevicesDidChange:(id)arg1;
- (BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned int)arg1;
- (unsigned long long)_outputDevicesComposition;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (void)dealloc;
- (id)description;
- (id)designatedGroupLeaderName;
- (void)encodeWithCoder:(id)arg1;
- (void)establishGroup;
- (id)groupLeaderAirplayIdentifier;
- (id)groupUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(void *)arg1;
- (BOOL)isAirPlayingToDevice;
- (BOOL)isAppleTVRoute;
- (BOOL)isDeviceRoute;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isHomePodRoute;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isRoutingToWirelessDevice;
- (BOOL)isStereoPair;
- (BOOL)isTVRoute;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)routeName;
- (id)routeNames;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (BOOL)supportsGrouping;
- (BOOL)supportsRemoteControl;

@end


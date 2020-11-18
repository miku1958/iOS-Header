//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRAVRoutingClientController, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _registeredNowPlayingObservers;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    void *_nowPlayingPlaybackQueueContext;
    BOOL _receivesExternalScreenTypeChangedNotifications;
    BOOL _receivesSupportedCommandsNotifications;
    BOOL _receivesRoutesChangedNotifications;
    BOOL _receivesOriginChangedNotifications;
    BOOL _receivesPlaybackErrorNotifications;
    BOOL _receivesVoiceInputRecordingStateNotifications;
    NSArray *_nowPlayingNotificationObservers;
    NSArray *_routingNotificationObservers;
    NSArray *_originNotificationObservers;
    NSArray *_voiceInputNotificationObservers;
    struct MRMediaRemoteService *_service;
    NSArray *_externalScreenTypeNotificationObservers;
}

@property (strong, nonatomic) NSArray *externalScreenTypeNotificationObservers; // @synthesize externalScreenTypeNotificationObservers=_externalScreenTypeNotificationObservers;
@property (strong, nonatomic) NSArray *nowPlayingNotificationObservers; // @synthesize nowPlayingNotificationObservers=_nowPlayingNotificationObservers;
@property (nonatomic, getter=copyNowPlayingPlaybackQueueContext) void *nowPlayingPlaybackQueueContext;
@property (strong, nonatomic) NSArray *originNotificationObservers; // @synthesize originNotificationObservers=_originNotificationObservers;
@property (nonatomic) BOOL receivesExternalScreenTypeChangedNotifications; // @synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications;
@property (nonatomic) BOOL receivesOriginChangedNotifications; // @synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications;
@property (nonatomic) BOOL receivesPlaybackErrorNotifications; // @synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications;
@property (nonatomic) BOOL receivesRoutesChangedNotifications; // @synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications;
@property (nonatomic) BOOL receivesSupportedCommandsNotifications; // @synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications;
@property (nonatomic) BOOL receivesVoiceInputRecordingStateNotifications; // @synthesize receivesVoiceInputRecordingStateNotifications=_receivesVoiceInputRecordingStateNotifications;
@property (readonly, nonatomic, getter=isRegisteredForNowPlayingNotifications) BOOL registeredForNowPlayingNotifications;
@property (readonly, nonatomic) NSArray *registeredOrigins;
@property (strong, nonatomic) NSArray *routingNotificationObservers; // @synthesize routingNotificationObservers=_routingNotificationObservers;
@property (readonly, nonatomic) struct MRMediaRemoteService *service; // @synthesize service=_service;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (strong, nonatomic) NSArray *voiceInputNotificationObservers; // @synthesize voiceInputNotificationObservers=_voiceInputNotificationObservers;

+ (id)sharedServiceClient;
- (void)dealloc;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
- (void)registerOrigin:(struct _MROrigin *)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unregisterAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterForNowPlayingNotifications;
- (void)unregisterOrigin:(struct _MROrigin *)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end


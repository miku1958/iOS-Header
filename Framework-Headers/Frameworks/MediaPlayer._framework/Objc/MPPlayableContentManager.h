//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVExternalDevice, MPPlayableContentManagerContext, NSArray, NSMutableSet, NSOperationQueue;
@protocol MPPlayableContentDataSource, MPPlayableContentDelegate, OS_dispatch_queue;

@interface MPPlayableContentManager : NSObject
{
    NSMutableSet *_mutatedContentItems;
    NSMutableSet *_contentItemIdentifiersSentToMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_artworkUpdateQueue;
    BOOL _coalescingUpdates;
    BOOL _scheduledSupportedAPIsChange;
    AVExternalDevice *_externalDevice;
    id<MPPlayableContentDataSource> _dataSource;
    id<MPPlayableContentDelegate> _delegate;
    MPPlayableContentManagerContext *_context;
    NSArray *_nowPlayingIdentifiers;
}

@property (strong, nonatomic) MPPlayableContentManagerContext *context; // @synthesize context=_context;
@property (weak, nonatomic) id<MPPlayableContentDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (weak, nonatomic) id<MPPlayableContentDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSArray *nowPlayingIdentifiers; // @synthesize nowPlayingIdentifiers=_nowPlayingIdentifiers;

+ (BOOL)_deviceIsCarplayCapable;
+ (id)sharedContentManager;
- (void).cxx_destruct;
- (BOOL)_areContentLimitsEnforced;
- (void)_browsableContentEndpointChanged:(id)arg1;
- (void)_contentItemChangedNotification:(id)arg1;
- (BOOL)_contentItemWasSentToMediaRemote:(id)arg1;
- (void)_enqueueArtworkUpdate:(id)arg1 width:(double)arg2 height:(double)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_enqueueArtworkUpdate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handlePlaybackInitializationCompletedWithContext:(id)arg1 error:(id)arg2;
- (id)_init;
- (void)_limitedUIChanged:(id)arg1;
- (void)_markContentItemsAsSentToMediaRemote:(id)arg1;
- (BOOL)_musicListsLimited;
- (BOOL)_onQueueContentItemWasSentToMediaRemote:(id)arg1;
- (void)_pushContentItemsUpdate;
- (void)_scheduleUpdateSupportedAPIs;
- (void)_setupMediaRemoteEndpoint;
- (void)_setupNotifications;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_tearDownNotifications;
- (void)_updateSupportedAPIs;
- (void)beginUpdates;
- (void)dealloc;
- (void)endUpdates;
- (id)init;
- (void)reloadData;

@end


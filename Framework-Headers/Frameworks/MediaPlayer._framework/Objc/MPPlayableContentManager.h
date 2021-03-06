//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/CARSessionObserving-Protocol.h>

@class CARSessionStatus, MPPlayableContentManagerContext, NSArray, NSMutableSet, NSOperationQueue, NSString;
@protocol MPPlayableContentDataSource, MPPlayableContentDelegate, OS_dispatch_queue;

@interface MPPlayableContentManager : NSObject <CARSessionObserving>
{
    NSMutableSet *_mutatedContentItems;
    NSMutableSet *_contentItemIdentifiersSentToMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_artworkUpdateQueue;
    BOOL _coalescingUpdates;
    BOOL _scheduledSupportedAPIsChange;
    CARSessionStatus *_currentSessionStatus;
    id<MPPlayableContentDataSource> _dataSource;
    id<MPPlayableContentDelegate> _delegate;
    MPPlayableContentManagerContext *_context;
    NSArray *_nowPlayingIdentifiers;
}

@property (strong, nonatomic) MPPlayableContentManagerContext *context; // @synthesize context=_context;
@property (weak, nonatomic) id<MPPlayableContentDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPPlayableContentDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *nowPlayingIdentifiers; // @synthesize nowPlayingIdentifiers=_nowPlayingIdentifiers;
@property (readonly) Class superclass;

+ (BOOL)_deviceIsCarplayCapable;
+ (id)sharedContentManager;
- (void).cxx_destruct;
- (BOOL)_areContentLimitsEnforced;
- (void)_browsableContentEndpointChanged:(id)arg1;
- (void)_contentItemChangedNotification:(id)arg1;
- (BOOL)_contentItemWasSentToMediaRemote:(id)arg1;
- (void)_enqueueArtworkUpdate:(id)arg1 size:(struct CGSize)arg2 withCompletion:(CDUnknownBlockType)arg3;
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
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>
#import <MediaPlaybackCore/MPNowPlayingPlaybackQueueDataSource-Protocol.h>

@class MPCPlaybackEngine, MPCPlayerPath, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface _MPCPlaybackEngineSessionManager : NSObject <MPCPlaybackEngineEventObserving, MPNowPlayingPlaybackQueueDataSource>
{
    MPCPlaybackEngine *_playbackEngine;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MPNowPlayingInfoCenter *_infoCenter;
    MPRemoteCommandCenter *_commandCenter;
    NSMutableArray *_sessionArchives;
    NSMutableDictionary *_sessionIdentifierArchiveMap;
    NSMutableDictionary *_stagedQueueControllers;
}

@property (readonly, nonatomic) MPRemoteCommandCenter *commandCenter; // @synthesize commandCenter=_commandCenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // @synthesize infoCenter=_infoCenter;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (readonly, nonatomic) NSMutableArray *sessionArchives; // @synthesize sessionArchives=_sessionArchives;
@property (readonly, nonatomic) NSMutableDictionary *sessionIdentifierArchiveMap; // @synthesize sessionIdentifierArchiveMap=_sessionIdentifierArchiveMap;
@property (readonly, nonatomic) NSMutableDictionary *stagedQueueControllers; // @synthesize stagedQueueControllers=_stagedQueueControllers;
@property (strong, nonatomic) NSString *stateRestorationSessionIdentifier;
@property (readonly) Class superclass;

+ (id)archivesAtURL:(id)arg1;
- (void).cxx_destruct;
- (id)_cachesDirectory;
- (void)_performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_playbackSessionsDirectory;
- (void)deleteSessionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)loadSessionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;
- (void)publishIfNeeded;
- (id)queueControllerForIdentifier:(id)arg1;
- (void)saveSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)stageQueueController:(id)arg1 forIdentifier:(id)arg2;
- (id)stagedQueueControllerIdentifiers;
- (BOOL)unstageQueueControllerForIdentifier:(id)arg1;

@end


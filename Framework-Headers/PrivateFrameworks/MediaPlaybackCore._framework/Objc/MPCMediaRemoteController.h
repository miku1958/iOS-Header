//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPMediaRemoteEntityArtworkGenerator-Protocol.h>
#import <MediaPlaybackCore/MSVLRUDictionaryDelegate-Protocol.h>

@class MPCFuture, MPCPlayerPath, MSVLRUDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol MPArtworkDataSource, OS_dispatch_queue;

@interface MPCMediaRemoteController : NSObject <MSVLRUDictionaryDelegate, MPMediaRemoteEntityArtworkGenerator>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPCFuture *_playbackStateFuture;
    long long _playbackStateCacheState;
    MPCFuture *_supportedCommandsFuture;
    long long _supportedCommandsCacheState;
    MPCFuture *_playingItemIdentifierFuture;
    long long _playingIdentifierCacheState;
    NSString *_playingItemIdentifier;
    MPCFuture *_queueIdentifierFuture;
    long long _queueIdentifierCacheState;
    NSString *_queueIdentifier;
    struct _MSVSignedRange _loadedContentItemsRange;
    struct _MSVSignedRange _requestedContentItemsRange;
    NSMutableArray *_contentItemIDs;
    MSVLRUDictionary *_contentItems;
    NSMutableDictionary *_optimisticStateContentItems;
    NSMutableDictionary *_contentItemChanges;
    MSVLRUDictionary *_contentItemArtwork;
    NSMutableDictionary *_contentItemArtworkIdentifiers;
    NSMapTable *_contentItemIDsFutures;
    NSMapTable *_contentItemFutures;
    NSMutableDictionary *_contentItemArtworkFutures;
    unsigned long long _stateHandle;
    id<MPArtworkDataSource> _mediaRemoteArtworkDataSource;
    MPCPlayerPath *_resolvedPlayerPath;
    id _invalidationToken;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id invalidationToken; // @synthesize invalidationToken=_invalidationToken;
@property (readonly, nonatomic) id<MPArtworkDataSource> mediaRemoteArtworkDataSource; // @synthesize mediaRemoteArtworkDataSource=_mediaRemoteArtworkDataSource;
@property (readonly, nonatomic) MPCFuture *playbackState;
@property (readonly, nonatomic) long long playbackStateCacheState; // @synthesize playbackStateCacheState=_playbackStateCacheState;
@property (readonly, nonatomic) MPCFuture *playingIdentifier;
@property (readonly, nonatomic) long long playingIdentifierCacheState; // @synthesize playingIdentifierCacheState=_playingIdentifierCacheState;
@property (readonly, nonatomic) MPCFuture *queueIdentifier;
@property (readonly, nonatomic) long long queueIdentifierCacheState; // @synthesize queueIdentifierCacheState=_queueIdentifierCacheState;
@property (readonly, nonatomic) id<MPArtworkDataSource> remotePlayerArtworkDataSource;
@property (strong, nonatomic) MPCPlayerPath *resolvedPlayerPath; // @synthesize resolvedPlayerPath=_resolvedPlayerPath;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPCFuture *supportedCommands;
@property (readonly, nonatomic) long long supportedCommandsCacheState; // @synthesize supportedCommandsCacheState=_supportedCommandsCacheState;

+ (void)_sendCommand:(unsigned int)arg1 options:(id)arg2 appOptions:(unsigned int)arg3 toPlayerPath:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_sendLocalCommand:(unsigned int)arg1 playbackIntent:(id)arg2 options:(id)arg3 toPlayerPath:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_sendRemoteCommand:(unsigned int)arg1 playbackIntent:(id)arg2 options:(id)arg3 toPlayerPath:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (BOOL)_shouldRegisterForNotifications;
+ (id)controllerForPlayerPath:(id)arg1;
+ (id)mediaRemoteReplyQueue;
+ (void)sendCommand:(unsigned int)arg1 options:(id)arg2 toPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)_contentItemArtworkChangedNotification:(id)arg1;
- (id)_createExportableArtworkPropertiesForContentItem:(id)arg1;
- (id)_init;
- (id)_legacyCommands;
- (id)_onQueue_identifiersForRange:(struct _MSVSignedRange)arg1;
- (void)_onQueue_invalidateArtworkFuturesForContentItemID:(id)arg1;
- (void)_onQueue_mergeContentItems:(id)arg1 queueRange:(struct _MSVSignedRange)arg2 requestRange:(struct _MSVSignedRange)arg3;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg1;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2;
- (CDUnknownBlockType)_onQueue_setOptimisticElapsedTimeForContentItem:(id)arg1 elapsedTime:(double)arg2 rate:(float)arg3;
- (CDUnknownBlockType)_onQueue_setOptimisticPlaybackState:(unsigned int)arg1 withOptions:(id)arg2;
- (CDUnknownBlockType)_onQueue_setOptimisticPlayingItemIdentifier:(id)arg1;
- (void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)arg1 afterContentItemIdentifier:(id)arg2;
- (void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)arg1 beforeContentItemIdentifier:(id)arg2;
- (CDUnknownBlockType)_onQueue_updateOptimisticStateForCommand:(unsigned int)arg1 options:(id)arg2;
- (void)_playbackQueueChangedNotification:(id)arg1;
- (void)_playbackQueueContentItemsChangedNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_supportedCommandsDidChangedNotification:(id)arg1;
- (CDUnknownBlockType)artworkCatalogBlockForContentItem:(id)arg1;
- (long long)contentItemArtworkCacheStateForArtworkIdentifier:(id)arg1 size:(struct CGSize)arg2;
- (id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize)arg3;
- (long long)contentItemCacheStateForIdentifier:(id)arg1;
- (id)contentItemForIdentifier:(id)arg1;
- (void)dealloc;
- (void)dictionary:(id)arg1 willRemoveObject:(id)arg2 forKey:(id)arg3;
- (void)invalidateAllTokens;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange)arg1;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange)arg1;
- (id)playQueueIdentifiersForRequest:(void *)arg1;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end


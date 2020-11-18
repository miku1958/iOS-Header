//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPArtworkResizeUtility, MPNowPlayingContentItem, MPNowPlayingInfoCenterArtworkContext, MSVLRUDictionary, MSVTimer, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol MPNowPlayingInfoLyricsDelegate, MPNowPlayingPlaybackQueueDataSource, MPNowPlayingPlaybackQueueDelegate, OS_dispatch_queue;

@interface MPNowPlayingInfoCenter : NSObject
{
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDictionary *_convertedNowPlayingInfo;
    NSDate *_pushDate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPNowPlayingInfoCenterArtworkContext *_publishedContext;
    NSMutableDictionary *_mutatedContentItems;
    NSMutableDictionary *_mutatedPlaybackQueueRequests;
    struct _MSVSignedRange _loadedContentItemsRange;
    struct _MSVSignedRange _requestedContentItemsRange;
    NSMutableArray *_contentItemIdentifiers;
    MSVLRUDictionary *_contentItems;
    MPNowPlayingContentItem *_nowPlayingContentItem;
    unsigned long long _playbackState;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    MPArtworkResizeUtility *_artworkResizeUtility;
    MSVTimer *_contentItemInvalidationTimer;
    id<MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;
    id<MPNowPlayingInfoLyricsDelegate> _lyricsDelegate;
    struct {
        void *createPlaybackQueue;
        void *createChildItem;
        void *metadata;
        void *artwork;
        void *info;
        void *languageOptions;
        void *lyrics;
    } _callbacks;
    void *_playerPath;
    id<MPNowPlayingPlaybackQueueDelegate> _playbackQueueDelegate;
    NSString *_playerID;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue; // @synthesize dataSourceQueue=_dataSourceQueue;
@property (weak, nonatomic) id<MPNowPlayingInfoLyricsDelegate> lyricsDelegate;
@property (strong, nonatomic) MPNowPlayingContentItem *nowPlayingContentItem;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo; // @dynamic nowPlayingInfo;
@property (weak, nonatomic) id<MPNowPlayingPlaybackQueueDataSource> playbackQueueDataSource;
@property (weak, nonatomic) id<MPNowPlayingPlaybackQueueDelegate> playbackQueueDelegate; // @synthesize playbackQueueDelegate=_playbackQueueDelegate;
@property (nonatomic) unsigned long long playbackState;
@property (readonly, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property (readonly, nonatomic) void *playerPath; // @synthesize playerPath=_playerPath;
@property (readonly, nonatomic) BOOL supportsArtworkCatalogLoading;

+ (id)defaultCenter;
+ (id)infoCenterForPlayerID:(id)arg1;
+ (id)serviceQueue;
- (void).cxx_destruct;
- (id)_artworkCatalogForContentItem:(id)arg1;
- (void)_audioSessionRoutingContextDidChangeNotification:(id)arg1;
- (void)_becomeActiveWithCompletion:(CDUnknownBlockType)arg1;
- (id)_childContentItemForContentItem:(id)arg1 index:(long long)arg2;
- (void)_contentItemChangedNotification:(id)arg1;
- (id)_contentItemForIdentifier:(id)arg1;
- (id)_contentItemForIdentifier:(id)arg1 alreadyOnDataSourceQueue:(BOOL)arg2;
- (id)_contentItemIDsInRange:(CDStruct_912cb5d2)arg1 itemsRange:(CDStruct_912cb5d2 *)arg2;
- (void *)_createPlaybackQueueForRequest:(void *)arg1;
- (void)_getMetadataForContentItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_initializeNowPlayingInfo;
- (void)_invalidatePlaybackQueueImmediately;
- (id)_onDataSourceQueue_artworkCatalogForContentItem:(id)arg1;
- (void)_onDataSourceQueue_getContentItemIDsInRange:(struct _MSVSignedRange)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onQueue_clearPlaybackQueueDataSourceCallbacks;
- (void)_onQueue_pushContentItemsUpdate;
- (void)_onQueue_pushNowPlayingInfoAndRetry:(BOOL)arg1;
- (void)_onQueue_registerLyricsDelegateCallbacks:(id)arg1;
- (void)_onQueue_registerPlaybackQueueDataSourceCallbacks:(id)arg1;
- (void)_updatePlayerAudioSessionProperties;
- (void)becomeActive;
- (void)dealloc;
- (id)init;
- (id)initWithPlayerID:(id)arg1;
- (void)invalidatePlaybackQueue;

@end

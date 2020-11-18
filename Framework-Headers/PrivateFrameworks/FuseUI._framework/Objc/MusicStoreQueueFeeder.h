//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

#import <FuseUI/MPShuffleControllerDataSource-Protocol.h>
#import <FuseUI/MPStoreAVItemDownloadMetadataConsuming-Protocol.h>

@class MPPlaceholderAVItem, MPShuffleController, MusicEntityValueContext, MusicStoreEntityProvider, MusicStorePlaybackContext, NSArray, NSString;

@interface MusicStoreQueueFeeder : MPQueueFeeder <MPShuffleControllerDataSource, MPStoreAVItemDownloadMetadataConsuming>
{
    MusicEntityValueContext *_containerEntityValueContext;
    MPPlaceholderAVItem *_placeholderAVItem;
    unsigned long long _feederRevisionID;
    MusicStorePlaybackContext *_pendingLoadPlaybackContext;
    BOOL _shouldIgnoreEntityProviderInvalidationForContentsChange;
    MPShuffleController *_shuffleController;
    MusicStoreEntityProvider *_storeEntityProvider;
    NSArray *_storeMetadataContexts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_operationQueue;
+ (BOOL)supportsStateRestoration;
- (void).cxx_destruct;
- (id)MPU_contentItemIdentifierCollection;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)_configurePlaceholderItem;
- (id)_currentEmptyQueueErrorUsingEntityProviderCount:(BOOL)arg1;
- (BOOL)_hasPlaceholderItemAtIndex:(unsigned long long)arg1;
- (BOOL)_reloadStoreMetadataContexts;
- (void)_resolveItemMetadataContexts:(id)arg1 clientContext:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)_songShuffledIndexForIndex:(unsigned long long)arg1;
- (void)_storeEntityProviderDidInvalidateNotification:(id)arg1;
- (id)_storeItemMetadataContextAtIndex:(unsigned long long)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (BOOL)canSkipToPreviousItem;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)errorResolverForItem:(id)arg1;
- (BOOL)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (unsigned long long)itemCountForShuffleController:(id)arg1;
- (long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (BOOL)playerPreparesItemsForPlaybackAsynchronously;
- (long long)realRepeatType;
- (long long)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned long long)arg2;
- (void)shuffleItemsWithAnchor:(unsigned long long *)arg1;
- (void)storeAVItem:(id)arg1 didReceiveResponseAssetDictionary:(id)arg2;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end


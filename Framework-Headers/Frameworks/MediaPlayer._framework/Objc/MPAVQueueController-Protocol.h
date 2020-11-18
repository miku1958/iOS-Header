//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVController, MPAVItem, MPPlaybackContext, NSString;
@protocol MPAVItemQueueIdentifier;

@protocol MPAVQueueController <NSObject>

@property (readonly, nonatomic) BOOL allowsQueueResetWhenReachingEnd;
@property (weak, nonatomic) MPAVController *avController;
@property (readonly, nonatomic) BOOL canSkipToPreviousItem;
@property (readonly, nonatomic) long long currentIndex;
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) long long playlistItemCount;
@property (nonatomic) long long repeatMode;
@property (nonatomic) BOOL shouldDeferItemLoading;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long upNextItemCount;

- (long long)_indexForStringIdentifier:(NSString *)arg1;
- (BOOL)canSeekItem:(MPAVItem *)arg1;
- (BOOL)canSkipItem:(MPAVItem *)arg1;
- (BOOL)canSkipToPreviousItemForItem:(MPAVItem *)arg1;
- (NSString *)contentItemIDForPlaylistIndex:(long long)arg1;
- (unsigned long long)displayCountForItem:(MPAVItem *)arg1;
- (unsigned long long)displayIndexForItem:(MPAVItem *)arg1;
- (void)finalizeStateRestorationWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)handlePlaybackFailureForItem:(MPAVItem *)arg1;
- (BOOL)hasQueueContents;
- (unsigned long long)indexForContentItemID:(NSString *)arg1;
- (long long)indexOfItemIdentifier:(id<MPAVItemQueueIdentifier>)arg1;
- (long long)indexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 didReachEnd:(BOOL *)arg4;
- (BOOL)isPlaceholderItemForContentItemID:(NSString *)arg1;
- (MPAVItem *)itemForContentItemID:(NSString *)arg1;
- (MPAVItem *)itemForPlaylistIndex:(long long)arg1;
- (void)reloadItemsKeepingCurrentItem:(BOOL)arg1;
- (void)reloadWithPlaybackContext:(MPPlaybackContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reset;
- (void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (void)updateForSoundCheckDefaultsChange;
- (void)updateLocationDependentPropertiesForItem:(MPAVItem *)arg1;
@end

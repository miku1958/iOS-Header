//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPAVQueueCoordinatingDataSource-Protocol.h>

@class MPAVController, MPAVItem, MPPlaybackContext, NSArray, NSString;
@protocol MPAVQueueControllerDelegate, MPAVQueueCoordinating;

@protocol MPAVQueueController <MPAVQueueCoordinatingDataSource>

@property (nonatomic) BOOL allowsQueueModifications;
@property (nonatomic) BOOL autoPlayEnabled;
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (weak, nonatomic) id<MPAVQueueControllerDelegate> delegate;
@property (readonly, nonatomic) long long displayCount;
@property (readonly, nonatomic) BOOL hasUserMutations;
@property (readonly, copy, nonatomic) NSString *preferredFirstContentItemID;
@property (strong, nonatomic) id<MPAVQueueCoordinating> queueCoordinator;
@property (nonatomic) long long repeatType;
@property (nonatomic) long long shuffleType;
@property (readonly, nonatomic) unsigned long long supportedInsertionPositions;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) BOOL userCanChangeShuffleAndRepeatType;
@property (readonly, nonatomic) BOOL userCanEnableAutoPlay;

- (void)addPlaybackContext:(MPPlaybackContext *)arg1 afterContentItemID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)addPlaybackContext:(MPPlaybackContext *)arg1 atPosition:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)addPlaybackContext:(MPPlaybackContext *)arg1 atPosition:(long long)arg2 jumpToIt:(BOOL)arg3 completion:(void (^)(NSError *))arg4;
- (void)addPlaybackContext:(MPPlaybackContext *)arg1 atPosition:(long long)arg2 jumpToIt:(BOOL)arg3 userModification:(BOOL)arg4 completion:(void (^)(NSError *))arg5;
- (BOOL)canSkipItem:(MPAVItem *)arg1;
- (void)clearUpNext;
- (NSString *)contentItemIDAtIndex:(long long)arg1;
- (NSString *)contentItemIDWithCurrentItemOffset:(long long)arg1 mode:(long long)arg2 didReachEnd:(BOOL *)arg3;
- (long long)displayIndexForContentItemID:(NSString *)arg1;
- (BOOL)isPlaceholderItemForContentItemID:(NSString *)arg1;
- (MPAVItem *)itemForContentItemID:(NSString *)arg1;
- (void)jumpToContentItemID:(NSString *)arg1;
- (void)jumpToContentItemID:(NSString *)arg1 userInitiated:(BOOL)arg2;
- (void)jumpToFirstContentItem;
- (void)moveContentItemID:(NSString *)arg1 afterContentItemID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)moveContentItemID:(NSString *)arg1 beforeContentItemID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)player:(MPAVController *)arg1 currentItemDidChangeFromItem:(MPAVItem *)arg2 toItem:(MPAVItem *)arg3;
- (void)reloadWithPlaybackContext:(MPPlaybackContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeContentItemID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)reset;
- (void)reshuffle;
- (void)updateLocationDependentPropertiesForItem:(MPAVItem *)arg1;

@optional
- (NSArray *)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long *)arg3;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>
#import <MediaRemote/MRTransactionSourceDelegate-Protocol.h>

@class MRNowPlayingArtwork, MRNowPlayingPlayerClientCallbacks, MRPlaybackQueueSubscriptionController, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, _MRContentItemProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueProtobuf;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _MRPlaybackQueueProtobuf *_playbackQueue;
    NSArray *_supportedCommands;
    NSDictionary *_nowPlayingInfo;
    MRNowPlayingArtwork *_nowPlayingArtwork;
    unsigned int _playbackState;
    double _playbackStateSetToPlayTimestamp;
    unsigned long long _capabilities;
    NSDate *_lastReceivedCommandDate;
    BOOL _coalescingInvalidations;
    BOOL _coalescingRequests;
    BOOL _triggerInvalidation;
    double _invalidatationTimestamp;
    NSMutableDictionary *_coelscingTransactionPackets;
    NSMutableArray *_transactionSources;
    NSMutableDictionary *_cachedContentItemUpdates;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    MRPlaybackQueueSubscriptionController *_subscriptionController;
    MRNowPlayingPlayerClientCallbacks *_clientCallbacks;
}

@property (nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) MRNowPlayingPlayerClientCallbacks *clientCallbacks; // @synthesize clientCallbacks=_clientCallbacks;
@property (readonly, nonatomic) BOOL hasReceivedCommandRecently;
@property (nonatomic) double invalidatationTimestamp;
@property (strong, nonatomic) MRNowPlayingArtwork *nowPlayingArtwork;
@property (readonly, nonatomic) _MRContentItemProtobuf *nowPlayingContentItem;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (strong, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property (nonatomic) unsigned int playbackState;
@property (strong, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property (readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property (copy, nonatomic) NSArray *supportedCommands;

- (void).cxx_destruct;
- (id)_onQueue_nowPlayingContentItem;
- (void)_onQueue_sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)addPendingRequest:(id)arg1;
- (void)beginSendingTransactions;
- (void)cacheContentItemChangesForPendingRequests:(id)arg1;
- (void)clearCachedContentItemArtworkForItems:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)endSendingTransactions;
- (id)initWithPlayerPath:(id)arg1;
- (void)preProcessChangePlaybackRateCommandWithOptions:(id)arg1;
- (void)preProcessCommand:(unsigned int)arg1 options:(id)arg2;
- (void)restoreNowPlayingClientState;
- (void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)startCachingContentItemUpdatesForItem:(id)arg1 forPendingRequest:(id)arg2;
- (BOOL)testAndSetCoalescingInvalidations;
- (BOOL)testAndSetCoalescingRequests;
- (void)transactionDidEnd:(id)arg1;
- (void)unsetCoalescingInvalidations;
- (BOOL)unsetCoalescingRequests;
- (void)updateCacheWithContentItems:(id)arg1;
- (void)updateCacheWithItem:(id)arg1;
- (void)updateCacheWithPlaybackQueue:(id)arg1;
- (void)updatePlaybackQueueWithCachedUpdates:(id)arg1 forPendingRequest:(id)arg2;
- (void)updatePlayer:(id)arg1;

@end


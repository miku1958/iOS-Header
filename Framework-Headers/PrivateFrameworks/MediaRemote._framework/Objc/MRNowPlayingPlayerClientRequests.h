//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class MRPlaybackQueueSubscriptionController, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueProtobuf;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState>
{
    _MRPlaybackQueueProtobuf *_playbackQueue;
    unsigned int _playbackState;
    NSArray *_supportedCommands;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NSMutableDictionary *_playbackQueueCompletions;
    NSMutableArray *_supportedCommandsCompletions;
    NSMutableArray *_playbackStateCompletions;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableDictionary *_transactions;
    NSOperationQueue *_enquedNowPlayingInfoRequests;
    NSOperationQueue *_enquedNowPlayingInfoAssetRequests;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    MRPlaybackQueueSubscriptionController *_subscriptionController;
}

@property (copy, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property (nonatomic) unsigned int playbackState;
@property (readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property (readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property (strong, nonatomic) NSArray *supportedCommands;

- (void).cxx_destruct;
- (void)_handleEnqueuedPlaybackQueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleTransactionPackets:(id)arg1 packets:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_registerDefaultCallbacks;
- (id)_transactionDestintationForName:(unsigned long long)arg1;
- (void)addPlaybackQueueCompletion:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
- (void)addTransactionCallback:(CDUnknownBlockType)arg1 forName:(unsigned long long)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)enqueuePlaybackQueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePlaybackStateRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleSupportedCommandsRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPlayerPath:(id)arg1;
- (void)receiveTransaction:(unsigned long long)arg1 fromMessage:(id)arg2;
- (void)removePlaybackQueueCompletionForRequest:(id)arg1;
- (void)restoreNowPlayingClientState;
- (id)transactionCallbacksForName:(unsigned long long)arg1;
- (void)updateContentItemArtwork:(id)arg1;
- (void)updateContentItems:(id)arg1;
- (void)updatePlaybackQueue:(id)arg1;

@end

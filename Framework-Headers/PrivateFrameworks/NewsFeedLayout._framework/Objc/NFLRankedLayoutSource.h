//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/FCFetchCoordinatorDelegate-Protocol.h>

@class FCFetchCoordinator, FCThreadSafeMutableSet, NFLFeedSettings, NSMutableDictionary, NSOperationQueue, NSString;
@protocol NFLRankedLayoutSourceDelegate, OS_dispatch_queue;

@interface NFLRankedLayoutSource : NSObject <FCFetchCoordinatorDelegate>
{
    id<NFLRankedLayoutSourceDelegate> _delegate;
    NFLFeedSettings *_feedSettings;
    FCFetchCoordinator *_fetchCoordinator;
    NSMutableDictionary *_treesByTileInfo;
    FCThreadSafeMutableSet *_fulfilledRequests;
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _tileProminenceScoreBalanceValue;
    long long _qualityOfService;
    NSOperationQueue *_operationQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<NFLRankedLayoutSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property (strong, nonatomic) FCFetchCoordinator *fetchCoordinator; // @synthesize fetchCoordinator=_fetchCoordinator;
@property (strong, nonatomic) FCThreadSafeMutableSet *fulfilledRequests; // @synthesize fulfilledRequests=_fulfilledRequests;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (readonly) Class superclass;
@property (nonatomic) double tileProminenceScoreBalanceValue; // @synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue;
@property (strong, nonatomic) NSMutableDictionary *treesByTileInfo; // @synthesize treesByTileInfo=_treesByTileInfo;

- (void).cxx_destruct;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(BOOL)arg3 context:(id)arg4;
- (id)init;
- (id)initWithFeedSettings:(id)arg1 qualityOfService:(long long)arg2;
- (void)rankedLayoutsForRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


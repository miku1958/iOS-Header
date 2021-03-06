//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCFeedDatabase, NSArray, NSMutableArray, NSMutableDictionary, NSObject;
@protocol FCContentContext, FCCoreConfiguration, OS_dispatch_queue;

@interface FCFeedStreamingRequestOperation : FCOperation
{
    BOOL _throttled;
    id<FCContentContext> _context;
    id<FCCoreConfiguration> _configuration;
    FCFeedDatabase *_feedDatabase;
    NSArray *_feedRequests;
    long long _streamingType;
    unsigned long long _cutoffAtCount;
    long long _options;
    NSArray *_feedTransformations;
    CDUnknownBlockType _streamingResultsHandler;
    CDUnknownBlockType _requestCompletionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableArray *_feedRangeSteps;
    NSMutableDictionary *_aggregateFeedResponsesByFeedID;
    NSMutableArray *_aggregateFeedItems;
}

@property (strong, nonatomic) NSMutableArray *aggregateFeedItems; // @synthesize aggregateFeedItems=_aggregateFeedItems;
@property (strong, nonatomic) NSMutableDictionary *aggregateFeedResponsesByFeedID; // @synthesize aggregateFeedResponsesByFeedID=_aggregateFeedResponsesByFeedID;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (strong, nonatomic) id<FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) id<FCContentContext> context; // @synthesize context=_context;
@property (nonatomic) unsigned long long cutoffAtCount; // @synthesize cutoffAtCount=_cutoffAtCount;
@property (strong, nonatomic) FCFeedDatabase *feedDatabase; // @synthesize feedDatabase=_feedDatabase;
@property (strong, nonatomic) NSMutableArray *feedRangeSteps; // @synthesize feedRangeSteps=_feedRangeSteps;
@property (copy, nonatomic) NSArray *feedRequests; // @synthesize feedRequests=_feedRequests;
@property (copy, nonatomic) NSArray *feedTransformations; // @synthesize feedTransformations=_feedTransformations;
@property (nonatomic) long long options; // @synthesize options=_options;
@property (copy, nonatomic) CDUnknownBlockType requestCompletionHandler; // @synthesize requestCompletionHandler=_requestCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType streamingResultsHandler; // @synthesize streamingResultsHandler=_streamingResultsHandler;
@property (nonatomic) long long streamingType; // @synthesize streamingType=_streamingType;
@property (nonatomic) BOOL throttled; // @synthesize throttled=_throttled;

- (void).cxx_destruct;
- (void)_appendFeedResponses:(id)arg1 feedItems:(id)arg2;
- (id)_feedRangeBrokenIntoSteps:(id)arg1;
- (id)_feedRangeCoveredByRequests;
- (void)_startNextFetchStep;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end


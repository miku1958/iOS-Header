//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCEdgeCacheHint, NSArray, NSString;
@protocol FCChannelProviding;

@interface FCChannelSectionHeadlinesFetchOperation : FCOperation
{
    CDUnknownBlockType _fetchCompletionHandler;
    FCCloudContext *_cloudContext;
    NSString *_channelID;
    unsigned long long _maxHeadlinesCount;
    unsigned long long _maxHeadlinesPerFeed;
    double _fetchWindow;
    double _sectionsCacheTimeToLive;
    id<FCChannelProviding> _channel;
    NSArray *_sectionHeadlinesGroups;
    FCEdgeCacheHint *_edgeCacheHint;
}

@property (readonly, nonatomic) id<FCChannelProviding> channel; // @synthesize channel=_channel;
@property (readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property (readonly, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property (readonly, nonatomic) FCEdgeCacheHint *edgeCacheHint; // @synthesize edgeCacheHint=_edgeCacheHint;
@property (copy) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property (readonly, nonatomic) double fetchWindow; // @synthesize fetchWindow=_fetchWindow;
@property (readonly, nonatomic) unsigned long long maxHeadlinesCount; // @synthesize maxHeadlinesCount=_maxHeadlinesCount;
@property (readonly, nonatomic) unsigned long long maxHeadlinesPerFeed; // @synthesize maxHeadlinesPerFeed=_maxHeadlinesPerFeed;
@property (copy, nonatomic) NSArray *sectionHeadlinesGroups; // @synthesize sectionHeadlinesGroups=_sectionHeadlinesGroups;
@property (readonly, nonatomic) double sectionsCacheTimeToLive; // @synthesize sectionsCacheTimeToLive=_sectionsCacheTimeToLive;

- (void).cxx_destruct;
- (id)_channelAndSectionTagsPromiseWithChannelID:(id)arg1;
- (id)_channelPromiseWithTagsByID:(id)arg1 parentChannelID:(id)arg2;
- (id)_configurationPromise;
- (id)_createFeedRequestWithFeedID:(id)arg1 feedRange:(id)arg2;
- (id)_feedItemsPromiseWithChannel:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3;
- (id)_feedItemsTransformationWithConfiguration:(id)arg1;
- (id)_headlinesAssembledBySectionFromFeedItemMap:(id)arg1 sectionIDsByFeedID:(id)arg2 sectionsByID:(id)arg3;
- (id)_headlinesPromiseWithFeedItems:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3;
- (id)_sectionsPromiseWithTagsByID:(id)arg1 sectionIDs:(id)arg2;
- (id)init;
- (id)initWithCloudContext:(id)arg1 channelID:(id)arg2 maxHeadlinesCount:(unsigned long long)arg3 maxHeadlinesPerFeed:(unsigned long long)arg4 fetchWindow:(double)arg5 sectionsCacheTimeToLive:(double)arg6 edgeCacheHint:(id)arg7;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end


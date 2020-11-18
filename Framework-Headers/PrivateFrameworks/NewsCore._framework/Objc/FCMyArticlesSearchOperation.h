//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDateRange, FCFeedItemFeature, NSArray;

@interface FCMyArticlesSearchOperation : FCOperation
{
    BOOL _channelsOnly;
    BOOL _cachedOnly;
    BOOL _unreadOnly;
    BOOL _purchasedChannelsOnly;
    BOOL _permitStaleSubscriptions;
    FCCloudContext *_context;
    FCFeedItemFeature *_feature;
    FCDateRange *_dateRange;
    CDUnknownBlockType _searchCompletionHandler;
    NSArray *_resultFeedItems;
}

@property (nonatomic) BOOL cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property (nonatomic) BOOL channelsOnly; // @synthesize channelsOnly=_channelsOnly;
@property (strong, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property (copy, nonatomic) FCDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property (copy, nonatomic) FCFeedItemFeature *feature; // @synthesize feature=_feature;
@property (nonatomic) BOOL permitStaleSubscriptions; // @synthesize permitStaleSubscriptions=_permitStaleSubscriptions;
@property (nonatomic) BOOL purchasedChannelsOnly; // @synthesize purchasedChannelsOnly=_purchasedChannelsOnly;
@property (strong, nonatomic) NSArray *resultFeedItems; // @synthesize resultFeedItems=_resultFeedItems;
@property (copy, nonatomic) CDUnknownBlockType searchCompletionHandler; // @synthesize searchCompletionHandler=_searchCompletionHandler;
@property (nonatomic) BOOL unreadOnly; // @synthesize unreadOnly=_unreadOnly;

- (void).cxx_destruct;
- (void)_generateFeedRequestsForFeedRange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end


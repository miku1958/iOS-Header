//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCHeldRecords, NSArray;
@protocol FCContentContext;

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation
{
    BOOL _overrideArticleCachePolicy;
    BOOL _overrideTagCachePolicy;
    unsigned long long _articleCachePolicy;
    double _articleMaximumCachedAge;
    unsigned long long _tagCachePolicy;
    double _tagMaximumCachedAge;
    id<FCContentContext> _context;
    NSArray *_articleIDs;
    NSArray *_ignoreCacheForArticleIDs;
    FCHeldRecords *_heldArticleRecords;
    NSArray *_headlines;
}

@property unsigned long long articleCachePolicy; // @synthesize articleCachePolicy=_articleCachePolicy;
@property (strong, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property double articleMaximumCachedAge; // @synthesize articleMaximumCachedAge=_articleMaximumCachedAge;
@property (strong, nonatomic) id<FCContentContext> context; // @synthesize context=_context;
@property (strong, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
@property (strong, nonatomic) FCHeldRecords *heldArticleRecords; // @synthesize heldArticleRecords=_heldArticleRecords;
@property (strong, nonatomic) NSArray *ignoreCacheForArticleIDs; // @synthesize ignoreCacheForArticleIDs=_ignoreCacheForArticleIDs;
@property BOOL overrideArticleCachePolicy; // @synthesize overrideArticleCachePolicy=_overrideArticleCachePolicy;
@property BOOL overrideTagCachePolicy; // @synthesize overrideTagCachePolicy=_overrideTagCachePolicy;
@property unsigned long long tagCachePolicy; // @synthesize tagCachePolicy=_tagCachePolicy;
@property double tagMaximumCachedAge; // @synthesize tagMaximumCachedAge=_tagMaximumCachedAge;

- (void).cxx_destruct;
- (id)completeFetchOperation;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)fetchArticleRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchTagRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class NSArray;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation
{
    BOOL _overrideArticleCachePolicy;
    BOOL _overrideTagCachePolicy;
    BOOL _shouldFilterHeadlinesWithoutSourceChannels;
    id<FCCoreConfiguration> _configuration;
    unsigned long long _articleCachePolicy;
    double _articleMaximumCachedAge;
    unsigned long long _tagCachePolicy;
    double _tagMaximumCachedAge;
    CDUnknownBlockType _interestTokenHandler;
    id<FCContentContext> _context;
    NSArray *_articleIDs;
    NSArray *_ignoreCacheForArticleIDs;
    NSArray *_resultHeadlines;
}

@property unsigned long long articleCachePolicy; // @synthesize articleCachePolicy=_articleCachePolicy;
@property (strong, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property double articleMaximumCachedAge; // @synthesize articleMaximumCachedAge=_articleMaximumCachedAge;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) id<FCContentContext> context; // @synthesize context=_context;
@property (strong, nonatomic) NSArray *ignoreCacheForArticleIDs; // @synthesize ignoreCacheForArticleIDs=_ignoreCacheForArticleIDs;
@property (copy, nonatomic) CDUnknownBlockType interestTokenHandler; // @synthesize interestTokenHandler=_interestTokenHandler;
@property BOOL overrideArticleCachePolicy; // @synthesize overrideArticleCachePolicy=_overrideArticleCachePolicy;
@property BOOL overrideTagCachePolicy; // @synthesize overrideTagCachePolicy=_overrideTagCachePolicy;
@property (strong, nonatomic) NSArray *resultHeadlines; // @synthesize resultHeadlines=_resultHeadlines;
@property (nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels; // @synthesize shouldFilterHeadlinesWithoutSourceChannels=_shouldFilterHeadlinesWithoutSourceChannels;
@property unsigned long long tagCachePolicy; // @synthesize tagCachePolicy=_tagCachePolicy;
@property double tagMaximumCachedAge; // @synthesize tagMaximumCachedAge=_tagMaximumCachedAge;

- (void).cxx_destruct;
- (id)completeFetchOperation;
- (id)determineAppropriateFetchStepsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchConfigWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, FCForYouConfig, NSArray, NSDictionary, NSError;
@protocol FCBundleSubscriptionManagerType, FCContentContext, FCCoreConfiguration, FCFeedPersonalizing, FCForYouBridgedConfigurationParser;

@interface FCForYouConfigHeadlinesOperation : FCOperation
{
    BOOL _shouldFetchEditorialSectionTags;
    id<FCCoreConfiguration> _configuration;
    id<FCContentContext> _context;
    id<FCFeedPersonalizing> _personalizer;
    id<FCForYouBridgedConfigurationParser> _bridgedConfigurationParser;
    id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
    long long _fields;
    NSArray *_additionalArticleListIDs;
    NSArray *_additionalTagIDs;
    FCCachePolicy *_forYouConfigCachePolicy;
    FCCachePolicy *_articleListCachePolicy;
    FCCachePolicy *_editorialSectionTagCachePolicy;
    FCForYouConfig *_forYouConfig;
    NSError *_error;
    CDUnknownBlockType _headlinesCompletionHandler;
    CDUnknownBlockType _headlinesAndTagsCompletionHandler;
    FCForYouConfig *_resultForYouConfig;
    NSDictionary *_resultArticleListsByID;
    NSDictionary *_resultHeadlinesByArticleListID;
    NSDictionary *_resultHeadlinesByArticleID;
    NSDictionary *_resultTagsByID;
}

@property (copy, nonatomic) NSArray *additionalArticleListIDs; // @synthesize additionalArticleListIDs=_additionalArticleListIDs;
@property (copy, nonatomic) NSArray *additionalTagIDs; // @synthesize additionalTagIDs=_additionalTagIDs;
@property (strong, nonatomic) FCCachePolicy *articleListCachePolicy; // @synthesize articleListCachePolicy=_articleListCachePolicy;
@property (strong, nonatomic) id<FCForYouBridgedConfigurationParser> bridgedConfigurationParser; // @synthesize bridgedConfigurationParser=_bridgedConfigurationParser;
@property (strong, nonatomic) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager; // @synthesize bundleSubscriptionManager=_bundleSubscriptionManager;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) id<FCContentContext> context; // @synthesize context=_context;
@property (strong, nonatomic) FCCachePolicy *editorialSectionTagCachePolicy; // @synthesize editorialSectionTagCachePolicy=_editorialSectionTagCachePolicy;
@property (strong) NSError *error; // @synthesize error=_error;
@property (nonatomic) long long fields; // @synthesize fields=_fields;
@property (strong) FCForYouConfig *forYouConfig; // @synthesize forYouConfig=_forYouConfig;
@property (strong, nonatomic) FCCachePolicy *forYouConfigCachePolicy; // @synthesize forYouConfigCachePolicy=_forYouConfigCachePolicy;
@property (copy, nonatomic) CDUnknownBlockType headlinesAndTagsCompletionHandler; // @synthesize headlinesAndTagsCompletionHandler=_headlinesAndTagsCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType headlinesCompletionHandler; // @synthesize headlinesCompletionHandler=_headlinesCompletionHandler;
@property (strong, nonatomic) id<FCFeedPersonalizing> personalizer; // @synthesize personalizer=_personalizer;
@property (strong, nonatomic) NSDictionary *resultArticleListsByID; // @synthesize resultArticleListsByID=_resultArticleListsByID;
@property (strong, nonatomic) FCForYouConfig *resultForYouConfig; // @synthesize resultForYouConfig=_resultForYouConfig;
@property (strong, nonatomic) NSDictionary *resultHeadlinesByArticleID; // @synthesize resultHeadlinesByArticleID=_resultHeadlinesByArticleID;
@property (strong, nonatomic) NSDictionary *resultHeadlinesByArticleListID; // @synthesize resultHeadlinesByArticleListID=_resultHeadlinesByArticleListID;
@property (strong, nonatomic) NSDictionary *resultTagsByID; // @synthesize resultTagsByID=_resultTagsByID;
@property (nonatomic) BOOL shouldFetchEditorialSectionTags; // @synthesize shouldFetchEditorialSectionTags=_shouldFetchEditorialSectionTags;

- (void).cxx_destruct;
- (id)_edgeCacheHint;
- (id)forYouConfigRecordID;
- (id)localTodayFeedConfiguration;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCGroupConfig, FCInterestToken, FCSpotlightGroupConfig, FCTopStoriesGroupConfig, NSArray, NSDate, NSString, NTPBForYouConfigRecord;
@protocol FCForYouBridgedConfiguration;

@interface FCForYouConfig : NSObject <NSCopying>
{
    FCTopStoriesGroupConfig *_topStoriesGroupConfig;
    FCGroupConfig *_trendingGroupConfig;
    FCSpotlightGroupConfig *_spotlightGroupConfig;
    NSArray *_editorialGroupConfigs;
    NSArray *_demoGroupConfigs;
    NSArray *_topVideosArticleIDs;
    NSString *_moreVideosArticleListID;
    id<FCForYouBridgedConfiguration> _bridgedConfiguration;
    NTPBForYouConfigRecord *_forYouConfigRecord;
    FCInterestToken *_interestToken;
}

@property (copy, nonatomic) id<FCForYouBridgedConfiguration> bridgedConfiguration; // @synthesize bridgedConfiguration=_bridgedConfiguration;
@property (readonly, nonatomic) NSArray *demoGroupConfigs; // @synthesize demoGroupConfigs=_demoGroupConfigs;
@property (readonly, nonatomic) NSArray *editorialArticleListIDs;
@property (strong, nonatomic) NSArray *editorialGroupConfigs; // @synthesize editorialGroupConfigs=_editorialGroupConfigs;
@property (readonly, nonatomic) NSArray *editorialSectionTagIDs;
@property (readonly, nonatomic) NSDate *fetchedDate;
@property (strong, nonatomic) NTPBForYouConfigRecord *forYouConfigRecord; // @synthesize forYouConfigRecord=_forYouConfigRecord;
@property (strong, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property (readonly, nonatomic) NSString *moreVideosArticleListID; // @synthesize moreVideosArticleListID=_moreVideosArticleListID;
@property (readonly, nonatomic) NSString *spotlightArticleID;
@property (strong, nonatomic) FCSpotlightGroupConfig *spotlightGroupConfig; // @synthesize spotlightGroupConfig=_spotlightGroupConfig;
@property (readonly, nonatomic) NSArray *todayFeedTopStoriesArticleIDs;
@property (strong, nonatomic) FCTopStoriesGroupConfig *topStoriesGroupConfig; // @synthesize topStoriesGroupConfig=_topStoriesGroupConfig;
@property (readonly, nonatomic) NSArray *topVideosArticleIDs; // @synthesize topVideosArticleIDs=_topVideosArticleIDs;
@property (readonly, nonatomic) NSString *trendingArticleListID;
@property (strong, nonatomic) FCGroupConfig *trendingGroupConfig; // @synthesize trendingGroupConfig=_trendingGroupConfig;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2 bridgedConfiguration:(id)arg3;

@end


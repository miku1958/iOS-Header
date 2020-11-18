//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCGroupConfig, FCInterestToken, NSArray, NSDate, NSString, NTPBForYouConfigRecord;

@interface FCForYouConfig : NSObject <NSCopying>
{
    FCGroupConfig *_topStoriesGroupConfig;
    FCGroupConfig *_trendingGroupConfig;
    FCGroupConfig *_coverArticlesGroupConfig;
    NSArray *_editorialGroupConfigs;
    NTPBForYouConfigRecord *_forYouConfigRecord;
    FCInterestToken *_interestToken;
}

@property (readonly, nonatomic) NSString *coverArticlesArticleListID;
@property (strong, nonatomic) FCGroupConfig *coverArticlesGroupConfig; // @synthesize coverArticlesGroupConfig=_coverArticlesGroupConfig;
@property (readonly, nonatomic) NSArray *editorialArticleListIDs;
@property (strong, nonatomic) NSArray *editorialGroupConfigs; // @synthesize editorialGroupConfigs=_editorialGroupConfigs;
@property (readonly, nonatomic) NSArray *editorialSectionTagIDs;
@property (readonly, nonatomic) NSDate *fetchedDate;
@property (strong, nonatomic) NTPBForYouConfigRecord *forYouConfigRecord; // @synthesize forYouConfigRecord=_forYouConfigRecord;
@property (strong, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property (readonly, nonatomic) NSString *topStoriesArticleListID;
@property (strong, nonatomic) FCGroupConfig *topStoriesGroupConfig; // @synthesize topStoriesGroupConfig=_topStoriesGroupConfig;
@property (readonly, nonatomic) NSString *trendingArticleListID;
@property (strong, nonatomic) FCGroupConfig *trendingGroupConfig; // @synthesize trendingGroupConfig=_trendingGroupConfig;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;

@end


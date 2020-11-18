//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCMultiTagFeedDescriptor.h>

#import <NewsCore/FCFeedPaginating-Protocol.h>

@class FCForYouGroupsConfiguration, NSArray, NSString;

@interface FCForYouFeedDescriptor : FCMultiTagFeedDescriptor <FCFeedPaginating>
{
    NSArray *_unreadSavedStories;
    long long _trendingAndSavedStoriesCount;
    FCForYouGroupsConfiguration *_forYouGroupsConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FCForYouGroupsConfiguration *forYouGroupsConfiguration; // @synthesize forYouGroupsConfiguration=_forYouGroupsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long trendingAndSavedStoriesCount; // @synthesize trendingAndSavedStoriesCount=_trendingAndSavedStoriesCount;
@property (copy, nonatomic) NSArray *unreadSavedStories; // @synthesize unreadSavedStories=_unreadSavedStories;

- (void).cxx_destruct;
- (id)editionAtDate:(id)arg1;
- (id)editionFollowingEdition:(id)arg1;
- (long long)feedFilterOptions;
- (id)feedGroupEmitters;
- (id)feedPaginator;
- (long long)feedSortMethod;
- (id)iAdFeedID;
- (id)initWithIdentifier:(id)arg1 trendingAndSavedStoriesCount:(long long)arg2 forYouGroupsConfiguration:(id)arg3;
- (id)name;

@end


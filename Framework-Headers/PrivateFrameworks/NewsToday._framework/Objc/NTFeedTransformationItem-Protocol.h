//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSObject-Protocol.h>

@class NSDate, NSString, NTPBFeedItem, SFSearchResult;
@protocol FCFeedTransformationItem, FCHeadlineProviding, NTTodayProtoitem;

@protocol NTFeedTransformationItem <NSObject, NSCopying>

@property (readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property (readonly, copy, nonatomic) NSDate *cacheExpirationDate;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, nonatomic, getter=isEligibleForLeadingCellAppearance) BOOL eligibleForLeadingCellAppearance;
@property (readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property (readonly, nonatomic) id<FCFeedTransformationItem> feedTransformationItem;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL needsFeedItemHeadlinesFetch;
@property (readonly, nonatomic) unsigned long long preferredDynamicSlotAllocation;
@property (readonly, copy, nonatomic) SFSearchResult *searchResult;
@property (readonly, nonatomic) unsigned long long todayItemType;
@property (readonly, nonatomic) BOOL usesDynamicSlotAllocation;

- (id<NTTodayProtoitem>)protoitemWithFetchedFeedItemHeadline:(id<FCHeadlineProviding>)arg1;

@optional
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemReviewsAttribution : GEOMapItemAttribution
{
}

@property (readonly, nonatomic) NSArray *addReviewURLs;

- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)urlsForReview:(id)arg1;
- (id)urlsForSelectedItemWithItems:(id)arg1;

@end


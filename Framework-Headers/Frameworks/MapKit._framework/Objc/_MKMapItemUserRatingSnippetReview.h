//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapItemProviderRatingSnippet-Protocol.h>

@class GEOMapItemTip, MKMapItem, NSDate, NSString, NSURL;
@protocol GEOMapItemReview;

__attribute__((visibility("hidden")))
@interface _MKMapItemUserRatingSnippetReview : NSObject <MKMapItemProviderRatingSnippet>
{
    MKMapItem *_mapItem;
    id<GEOMapItemReview> _review;
}

@property (readonly, nonatomic, getter=_date) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_geoMapItemTIp) GEOMapItemTip *geoMapItemTip;
@property (readonly, nonatomic, getter=_geoReview) id<GEOMapItemReview> geoReview;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property (readonly, nonatomic, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property (readonly, nonatomic, getter=_maxScore) double maxScore;
@property (readonly, nonatomic, getter=_normalizedScore) double normalizedScore;
@property (readonly, nonatomic, getter=_reviewerImageURL) NSURL *reviewerImageURL;
@property (readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property (readonly, nonatomic, getter=_score) double score;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)arg1 review:(id)arg2;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;

@end


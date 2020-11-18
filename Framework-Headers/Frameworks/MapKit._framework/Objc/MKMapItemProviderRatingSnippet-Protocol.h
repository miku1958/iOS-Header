//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOMapItemTip, NSDate, NSString, NSURL;
@protocol GEOMapItemReview;

@protocol MKMapItemProviderRatingSnippet <NSObject>

@property (readonly, nonatomic, getter=_date) NSDate *date;
@property (readonly, nonatomic, getter=_geoMapItemTIp) GEOMapItemTip *geoMapItemTip;
@property (readonly, nonatomic, getter=_geoReview) id<GEOMapItemReview> geoReview;
@property (readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property (readonly, nonatomic, getter=_maxScore) double maxScore;
@property (readonly, nonatomic, getter=_normalizedScore) double normalizedScore;
@property (readonly, nonatomic, getter=_reviewerImageURL) NSURL *reviewerImageURL;
@property (readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property (readonly, nonatomic, getter=_score) double score;

- (void)showWithCompletionHandler:(void (^)(NSURL *, NSString *))arg1;
@end


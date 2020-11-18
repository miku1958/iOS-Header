//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemReview-Protocol.h>

@class GEOPDPlace, GEOPDReview, NSDate, NSString;

@interface _GEOPlaceDataReview : NSObject <GEOMapItemReview>
{
    GEOPDPlace *_placeData;
    GEOPDReview *_review;
}

@property (readonly, nonatomic, getter=_date) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_identifier) NSString *identifier;
@property (readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property (readonly, nonatomic, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property (readonly, nonatomic, getter=_maxScore) double maxScore;
@property (readonly, nonatomic, getter=_normalizedScore) double normalizedScore;
@property (readonly, nonatomic, getter=_reviewerImageURLString) NSString *reviewerImageURLString;
@property (readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property (readonly, nonatomic, getter=_score) double score;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlaceData:(id)arg1 review:(id)arg2;

@end


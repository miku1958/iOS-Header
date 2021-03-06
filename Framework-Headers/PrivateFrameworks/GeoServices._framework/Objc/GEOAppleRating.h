//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDRating, NSString;

@interface GEOAppleRating : NSObject
{
    GEOPDRating *_pdRating;
}

@property (readonly, nonatomic) BOOL isRecommended;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) double maxScore;
@property (readonly, nonatomic) int numberOfRatingsUsedForScore;
@property (readonly, nonatomic) double percentage;
@property (readonly, nonatomic) long long ratingType;
@property (readonly, nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithRating:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol FCPersonalizationAggregate;

@protocol FCPersonalizationAggregate <NSObject>

@property (readonly, nonatomic) double clicks;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) unsigned long long eventCount;
@property (readonly, nonatomic) NSString *featureKey;
@property (readonly, nonatomic) double impressions;
@property (readonly, nonatomic) NSDate *lastModified;

- (double)personalizationValueWithBaseline:(id<FCPersonalizationAggregate>)arg1 decayRate:(double)arg2;
- (double)powerWithDecayFactor:(double)arg1;
- (double)relativePersonalizationValueWithBaselineAggregate:(id<FCPersonalizationAggregate>)arg1 decayFactor:(double)arg2;
@end


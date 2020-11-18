//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsTransport/NTPBPersonalizationAggregate.h>

#import <NewsCore/FCMutablePersonalizationAggregate-Protocol.h>
#import <NewsCore/FCPersonalizationAggregate-Protocol.h>

@class NSDate, NSString;

@interface NTPBPersonalizationAggregate (FCPersonalizationAggregate) <FCPersonalizationAggregate, FCMutablePersonalizationAggregate>

@property (readonly, nonatomic) double clicks;
@property (readonly, nonatomic) double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long eventCount;
@property (readonly, nonatomic) NSString *featureKey;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double impressions;
@property (readonly, nonatomic) NSDate *lastModified;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (double)_personalizationValueWithBaselineClicks:(double)arg1 baselineImpressions:(double)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2;
- (double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;
- (double)personalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)powerWithDecayFactor:(double)arg1;
- (double)relativePersonalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/REAppUsagePredictorProperties-Protocol.h>

@class RETimeline;

@interface REAppUsagePredictor : REPredictor <REAppUsagePredictorProperties>
{
    RETimeline *_timeline;
}

@property (readonly, nonatomic) RETimeline *timeline;

+ (id)supportedFeatures;
+ (double)updateInterval;
- (void).cxx_destruct;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)update;

@end


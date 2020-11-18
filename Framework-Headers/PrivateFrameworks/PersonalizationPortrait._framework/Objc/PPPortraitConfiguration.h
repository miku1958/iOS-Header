//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PPPortraitConfiguration : NSObject
{
    NSMutableDictionary *_parameters;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)getTopicsMultiplierForSource:(id)arg1 andAlgorithm:(id)arg2;
- (double)halfValuePosition;
- (id)init;
- (int)maxNumberOfTopicRecords;
- (int)minNumberOfTopicRecords;
- (double)nonReaderTextWeight;
- (double)portraitAnalyticsSamplingRate;
- (id)portraitVariantName;
- (double)remoteTopicsMultiplier;
- (id)resourceForMappingId:(id)arg1;
- (double)scalingFactorForMappingId:(id)arg1;
- (double)topicsScalingFactor;
- (double)topicsSigmoidPeakValue;
- (double)topicsSigmoidWidth;

@end


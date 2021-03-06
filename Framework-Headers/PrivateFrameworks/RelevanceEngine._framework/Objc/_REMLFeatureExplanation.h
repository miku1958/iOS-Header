//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REMLExplanation.h>

@class REFeatureSet;

@interface _REMLFeatureExplanation : REMLExplanation
{
    REFeatureSet *_features;
    float _mean;
    float _variance;
}

+ (id)combinedExplanationsFromExplanations:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_canCombineWithSimilarExplanation:(id)arg1;
- (long long)_rankExplanationToSimilarExplanation:(id)arg1;
- (id)explanationByCombiningWithExplanation:(id)arg1;
- (id)explanationWithStyle:(unsigned long long)arg1;
- (id)initWithFeature:(id)arg1 mean:(float)arg2 variance:(float)arg3;
- (BOOL)shouldProvideExplanation;

@end


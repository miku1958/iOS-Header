//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PGManager, PGMoodGeneratorOptions, PGMoodVector, PHAssetCollection;

@interface PGMoodGenerator : NSObject
{
    PHAssetCollection *_assetCollection;
    PGManager *_graphManager;
    unsigned long long _suggestedMood;
    PGMoodVector *_positiveMoodVector;
    PGMoodVector *_negativeMoodVector;
    PGMoodVector *_historyWeightedPositiveMoodVector;
    PGMoodGeneratorOptions *_options;
    double _positiveThreshold;
    double _negativeThreshold;
}

@property double negativeThreshold; // @synthesize negativeThreshold=_negativeThreshold;
@property (strong) PGMoodGeneratorOptions *options; // @synthesize options=_options;
@property double positiveThreshold; // @synthesize positiveThreshold=_positiveThreshold;

- (void).cxx_destruct;
- (id)_moodSources;
- (void)_processMoodSources;
- (unsigned long long)forbiddenMoods;
- (id)historyWeightedPositiveMoodVector;
- (id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3;
- (id)negativeMoodVector;
- (id)positiveMoodVector;
- (unsigned long long)recommendedMoods;
- (unsigned long long)suggestedMood;

@end

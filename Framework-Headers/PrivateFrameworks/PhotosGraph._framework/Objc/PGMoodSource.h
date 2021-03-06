//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PGManager, PGMoodGeneratorOptions, PGMoodVector, PHAssetCollection;

@interface PGMoodSource : NSObject
{
    PHAssetCollection *_assetCollection;
    PGManager *_graphManager;
    PGMoodGeneratorOptions *_options;
    PGMoodVector *_positiveVector;
    PGMoodVector *_negativeVector;
    NSDictionary *_moodSourceDictionary;
}

@property (readonly) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property (readonly) PGManager *graphManager; // @synthesize graphManager=_graphManager;
@property (readonly) NSDictionary *moodSourceDictionary; // @synthesize moodSourceDictionary=_moodSourceDictionary;
@property (strong) PGMoodVector *negativeVector; // @synthesize negativeVector=_negativeVector;
@property (readonly) PGMoodGeneratorOptions *options; // @synthesize options=_options;
@property (strong) PGMoodVector *positiveVector; // @synthesize positiveVector=_positiveVector;

+ (id)_plistName;
- (void).cxx_destruct;
- (void)_combineMoodVectors;
- (id)_moodVectorForMoodIdentifier:(id)arg1;
- (id)_moodVectors;
- (id)_plistMoodIdentifiers;
- (unsigned long long)_sourceInputCount;
- (id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3;
- (double)weight;

@end


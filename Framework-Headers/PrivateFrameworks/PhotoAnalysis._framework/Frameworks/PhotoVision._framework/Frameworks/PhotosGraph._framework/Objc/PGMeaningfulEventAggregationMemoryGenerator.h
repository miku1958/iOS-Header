//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSArray, NSDate;

@interface PGMeaningfulEventAggregationMemoryGenerator : PGFeaturedMemoryGenerator
{
    unsigned long long _numberOfUntimelyRejects;
    unsigned long long _extendedMeaning;
    NSArray *_graphRequiredTraitsArray;
    NSDate *_lowerBoundLocalDate;
    unsigned long long _eventType;
    unsigned long long _meaning;
}

@property (nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property (strong, nonatomic) NSDate *lowerBoundLocalDate; // @synthesize lowerBoundLocalDate=_lowerBoundLocalDate;
@property (nonatomic) unsigned long long meaning; // @synthesize meaning=_meaning;

+ (id)_mostSpecificLabelForMeaning:(unsigned long long)arg1;
- (void).cxx_destruct;
- (BOOL)_canMakeMemoryWithCollectionNodes:(id)arg1 forMeaning:(unsigned long long)arg2 isOverTheYears:(BOOL)arg3;
- (BOOL)_computeRelevantAssetsForPotentialMemory:(id)arg1;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_expandedPotentialMemoriesFromPotentialMemory:(id)arg1;
- (unsigned long long)_extendedMeaningForActivityCollection:(id)arg1;
- (unsigned long long)_extendedMeaningForMeaning:(unsigned long long)arg1 collectionNode:(id)arg2;
- (unsigned long long)_extendedMeaningForRestaurantCollection:(id)arg1;
- (id)_extraFeatureNodesForCollectionNode:(id)arg1 meaning:(unsigned long long)arg2 featureType:(unsigned long long)arg3;
- (id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forAreaNode:(id)arg3;
- (id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forCityNode:(id)arg3;
- (id)_filterAssets:(id)arg1 withLocation:(id)arg2;
- (id)_filterAssets:(id)arg1 withPositiveLocations:(id)arg2 negativeLocations:(id)arg3 maximumDistance:(double)arg4;
- (id)_nodesForFeaturesOfType:(unsigned long long)arg1 forCollectionNode:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)_potentialOverTheYearsMemoriesForMeaning:(unsigned long long)arg1;
- (id)_stringForExtendedMeaning:(unsigned long long)arg1;
- (BOOL)_supportsAggregationsForMeaning:(unsigned long long)arg1 primaryFeatureType:(unsigned long long)arg2 secondaryFeatureType:(unsigned long long)arg3;

@end


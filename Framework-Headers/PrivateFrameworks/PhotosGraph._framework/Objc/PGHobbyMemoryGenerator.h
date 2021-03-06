//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGHobbyMemoryGenerator : PGFeaturedMemoryGenerator
{
    BOOL _onlyOverTheYears;
    BOOL _keepsOnlyIsInteresting;
    long long _hobbyType;
}

@property (nonatomic) long long hobbyType; // @synthesize hobbyType=_hobbyType;
@property (nonatomic) BOOL keepsOnlyIsInteresting; // @synthesize keepsOnlyIsInteresting=_keepsOnlyIsInteresting;
@property (nonatomic) BOOL onlyOverTheYears; // @synthesize onlyOverTheYears=_onlyOverTheYears;

- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_potentialHobbyMemoryForHobby:(id)arg1 results:(CDUnknownBlockType)arg2;
- (id)_potentialMemoriesForDryTesting;
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(CDStruct_e4f06a70 *)arg3 enumerationBlock:(CDUnknownBlockType)arg4;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (id)confidenceThresholdByBlacklistedSceneIdentifier;
- (id)confidenceThresholdByWhitelistedSceneIdentifier;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (BOOL)semanticalDedupingEnabledForExtendedCuration;

@end


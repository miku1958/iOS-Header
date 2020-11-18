//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGTripMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSDate *_lowerBoundLocalDate;
}

@property (strong, nonatomic) NSDate *lowerBoundLocalDate; // @synthesize lowerBoundLocalDate=_lowerBoundLocalDate;

- (void).cxx_destruct;
- (id)_collectionNodeForPotentialMemory:(id)arg1;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;

@end

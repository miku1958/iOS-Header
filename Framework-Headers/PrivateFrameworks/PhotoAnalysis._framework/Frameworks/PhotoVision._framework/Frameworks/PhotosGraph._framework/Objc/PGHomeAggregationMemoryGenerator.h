//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGHomeAggregationMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSDate *_localDate;
}

@property (strong, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;

+ (id)_monthNodeForMomentNode:(id)arg1;
+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)arg1;
- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_lastMonthPotentialMemory;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;

@end


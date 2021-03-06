//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate, NSMutableArray;

@interface PGRecentPastEventsMemoryGenerator : PGMemoryGenerator
{
    NSMutableArray *_potentialMemories;
    NSDate *_localDate;
}

@property (strong, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;

- (void).cxx_destruct;
- (void)_computePotentialMemories;
- (id)_computePotentialMemoriesForPersonNodes:(id)arg1;
- (id)_computePotentialMemoriesForSubcategory:(unsigned long long)arg1 withLocalStartDate:(id)arg2 localEndDate:(id)arg3;
- (id)_createMemoryDebugWithPotentialMemory:(id)arg1;
- (id)_peopleSeenInPreviousWeekButNotInPreviousThreeMonthsWithLocalDate:(id)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)generateMemories:(unsigned long long)arg1;
- (id)initWithController:(id)arg1;

@end


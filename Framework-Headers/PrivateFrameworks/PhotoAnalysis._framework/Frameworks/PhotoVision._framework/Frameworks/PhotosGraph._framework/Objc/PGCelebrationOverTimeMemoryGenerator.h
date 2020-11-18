//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate, NSSet;

@interface PGCelebrationOverTimeMemoryGenerator : PGMemoryGenerator
{
    NSDate *_localDate;
    NSSet *_upcomingHolidayNames;
}

@property (strong, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
@property (strong, nonatomic) NSSet *upcomingHolidayNames; // @synthesize upcomingHolidayNames=_upcomingHolidayNames;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_nameForHolidayMomentNodes:(id)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;

@end

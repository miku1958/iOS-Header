//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class HKWorkout, HKWorkoutDurationNumberFormatter, NSDateComponentsFormatter;

@interface HKDataMetadataWorkoutEventSection : HKDataMetadataSection
{
    HKWorkout *_workout;
    NSDateComponentsFormatter *_dateFormatter;
    HKWorkoutDurationNumberFormatter *_durationFormatter;
}

@property (strong, nonatomic) NSDateComponentsFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property (strong, nonatomic) HKWorkoutDurationNumberFormatter *durationFormatter; // @synthesize durationFormatter=_durationFormatter;
@property (strong, nonatomic) HKWorkout *workout; // @synthesize workout=_workout;

- (void).cxx_destruct;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)initWithSample:(id)arg1;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;

@end

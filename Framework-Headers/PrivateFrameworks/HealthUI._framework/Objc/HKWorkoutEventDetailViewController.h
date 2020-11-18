//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

@class HKWorkoutEvent, NSMutableArray;

@interface HKWorkoutEventDetailViewController : HKTableViewController
{
    NSMutableArray *_sections;
    HKWorkoutEvent *_event;
}

@property (strong, nonatomic) HKWorkoutEvent *event; // @synthesize event=_event;
@property (strong, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;

- (void).cxx_destruct;
- (void)_addSectionIfNotNil:(id)arg1;
- (void)_loadSections;
- (id)initWithEvent:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end


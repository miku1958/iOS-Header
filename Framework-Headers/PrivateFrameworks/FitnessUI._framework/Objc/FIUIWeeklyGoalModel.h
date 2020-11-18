//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject
{
    HKHealthStore *_healthStore;
    BOOL _showFakeData;
}

- (void).cxx_destruct;
- (void)fetchMostRecentWeeklyGoalWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end


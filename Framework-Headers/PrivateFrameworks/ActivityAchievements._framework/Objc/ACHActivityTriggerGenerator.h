//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACHActivityTriggerGenerator : NSObject
{
}

+ (unsigned long long)allPossibleTriggers;
- (CDStruct_c642f51a)_incrementWithInitialState:(CDStruct_c642f51a)arg1 forGoalType:(long long)arg2 dataProvider:(id)arg3 goalMetHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)_triggersForNewActivityDataWithGoalType:(long long)arg1 dataProvider:(id)arg2 goalMetHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)triggersForNewExerciseDataWithDataProvider:(id)arg1;
- (unsigned long long)triggersForNewMoveDataWithDataProvider:(id)arg1;
- (unsigned long long)triggersForNewStandDataWithDataProvider:(id)arg1;

@end


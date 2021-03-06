//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXLocationManagerRoutine-Protocol.h>

@class RTRoutineManager;

@interface ATXLocationManagerRoutineCR : NSObject <ATXLocationManagerRoutine>
{
    RTRoutineManager *_routineManager;
}

+ (id)closestLOI:(id)arg1 toLocation:(id)arg2;
- (void).cxx_destruct;
- (void)fetchClosestLOIWithinDistance:(double)arg1 ofLocation:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchLOILocationOfType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchLOIVisitedDuring:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchNextPredictedLOIFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 requireHighConfidence:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 requireHighConfidence:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (unsigned long long)fetchRoutineModeFromLocation:(id)arg1;
- (id)init;
- (id)initWithRoutineManager:(id)arg1;

@end


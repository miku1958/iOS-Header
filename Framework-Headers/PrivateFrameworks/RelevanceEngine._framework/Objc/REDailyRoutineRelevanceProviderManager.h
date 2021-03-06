//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/REDailyRoutinePredictorDelegate-Protocol.h>
#import <RelevanceEngine/REDailyRoutineRelevanceProviderManagerProperties-Protocol.h>

@class NSString;

@interface REDailyRoutineRelevanceProviderManager : RERelevanceProviderManager <REDailyRoutinePredictorDelegate, REDailyRoutineRelevanceProviderManagerProperties>
{
    BOOL _inMorningRoutine;
    BOOL _inEveningRoutine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isInEveningRoutine;
@property (readonly, nonatomic) BOOL isInMorningRoutine;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
- (BOOL)_isInRoutine:(unsigned long long)arg1 forDate:(id)arg2;
- (void)_prepareForUpdate;
- (void)_updateRoutines;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)dailyRoutinePredictorDidBeginEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidBeginMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidEndEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidEndMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(id)arg1;
- (void)pause;
- (void)resume;

@end


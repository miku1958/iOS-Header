//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDAchievementDataStore, HDAchievementDefinitions, NSCalendar, NSDate;
@protocol HDAchievementEngineDelegate, HDDailyGoalDetectionDelegate;

@interface HDAchievementEngine : NSObject
{
    NSCalendar *_cachedCalendar;
    id<HDDailyGoalDetectionDelegate> _dailyGoalDetectionDelegate;
    id<HDAchievementEngineDelegate> _delegate;
    HDAchievementDataStore *_dataStore;
    HDAchievementDefinitions *_achievementDefinitions;
    NSDate *_fixedNowDate;
    NSCalendar *_fixedCalendar;
}

@property (readonly, nonatomic) HDAchievementDefinitions *achievementDefinitions; // @synthesize achievementDefinitions=_achievementDefinitions;
@property (weak, nonatomic) id<HDDailyGoalDetectionDelegate> dailyGoalDetectionDelegate; // @synthesize dailyGoalDetectionDelegate=_dailyGoalDetectionDelegate;
@property (weak, nonatomic) HDAchievementDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property (weak, nonatomic) id<HDAchievementEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSCalendar *fixedCalendar; // @synthesize fixedCalendar=_fixedCalendar;
@property (strong, nonatomic) NSDate *fixedNowDate; // @synthesize fixedNowDate=_fixedNowDate;

+ (long long)_differenceInDaysBetweenActivitySummaryIndex:(long long)arg1 andIndex:(long long)arg2 inCalendar:(id)arg3;
+ (BOOL)_isCompleteWithNumberOfWeeks:(unsigned long long)arg1 dateToday:(id)arg2 consecutiveCompleteDays:(unsigned long long)arg3 inCalendar:(id)arg4;
- (void).cxx_destruct;
- (id)_calendar;
- (id)_generateAchievementWithDefinition:(id)arg1 environment:(id)arg2;
- (id)_now;
- (void)_runForChangedDatabase;
- (BOOL)runDatabaseIdentifierCheckWithCurrentDatabaseIdentifier:(id)arg1 identifierChanged:(BOOL *)arg2 error:(id *)arg3;
- (unsigned long long)runForNewCombinedActivityData;
- (unsigned long long)runForNewExerciseData;
- (unsigned long long)runForNewMoveData;
- (unsigned long long)runForNewStandData;
- (unsigned long long)runForNewWorkouts;
- (void)runForStepAchievements;
- (void)runForTriggers:(unsigned long long)arg1 withEnvironment:(id)arg2;
- (void)systemTimeZoneDidChange;

@end


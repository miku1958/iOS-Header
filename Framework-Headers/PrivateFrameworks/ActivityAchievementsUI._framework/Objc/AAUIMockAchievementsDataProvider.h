//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityAchievementsUI/AAUIAchievementsDataProvider.h>

@class NSArray;

@interface AAUIMockAchievementsDataProvider : AAUIAchievementsDataProvider
{
    NSArray *_achievements;
}

- (void).cxx_destruct;
- (id)_ACHDateComponentIntervalWithMonthOffset:(unsigned long long)arg1;
- (id)_achievementForTemplate:(id)arg1 earnedInstanceCount:(long long)arg2 earnedInstanceOffset:(long long)arg3 earnedInstanceValue:(long long)arg4 goalValue:(long long)arg5 progressValue:(long long)arg6;
- (id)_currentMonthlyChallengeAchievementForTemplate:(id)arg1 localizableSuffix:(id)arg2 goalValue:(long long)arg3 progressValue:(long long)arg4 isEarned:(BOOL)arg5;
- (id)_dateComponentsWithDayOffset:(long long)arg1;
- (id)_fitnessUIAssetsURLWithKey:(id)arg1 value:(id)arg2;
- (id)_monthStringFromTemplateName:(id)arg1;
- (id)achievementAtIndexPath:(id)arg1;
- (id)headerStringForSection:(long long)arg1 isRecentAndRelevant:(BOOL)arg2;
- (id)init;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)recentAndRelevantAchievementAtIndexPath:(id)arg1;
- (void)startFetching;
- (void)stopFetching;

@end

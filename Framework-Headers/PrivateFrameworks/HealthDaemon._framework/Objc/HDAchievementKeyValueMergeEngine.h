//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDAchievementKeyValueMergeEngine : NSObject
{
}

+ (unsigned long long)_applyMergeStrategy:(unsigned long long)arg1 withLocalValue:(id)arg2 remoteValue:(id)arg3;
+ (id)_codableTimestampedKeyValuePairsGroupedByKey:(id)arg1;
+ (BOOL)_didDetectStreakResetForKey:(id)arg1 withIncoming:(id)arg2 existing:(id)arg3;
+ (unsigned long long)_mergeStrategyForKey:(id)arg1;
+ (BOOL)_shouldOverrideMergeStrategyWithKey:(id)arg1 withIncoming:(id)arg2 existing:(id)arg3;
+ (id)filteredKeysToPersistForAchievementDoctor:(id)arg1;
+ (id)mergeKeyValuesFromSet:(id)arg1 intoSet:(id)arg2 nowDate:(id)arg3;

@end

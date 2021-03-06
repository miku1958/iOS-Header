//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHMemoryRelevanceHelper : NSObject
{
}

+ (double)_categoryWeightForMemory:(id)arg1;
+ (BOOL)_isDate:(id)arg1 inSameDayAndMonthAsDate:(id)arg2;
+ (BOOL)_isMemoryCategoryTemporal:(unsigned long long)arg1;
+ (BOOL)_isMemorySubcategoryTemporal:(unsigned long long)arg1;
+ (BOOL)_isMemoryTemporal:(id)arg1;
+ (double)_notificationLevelWeightForMemory:(id)arg1;
+ (double)_subcategoryWeightForMemory:(id)arg1;
+ (BOOL)isMemory:(id)arg1 proactiveWorthyAtDate:(id)arg2;
+ (BOOL)isMemory:(id)arg1 relevantAtDate:(id)arg2;
+ (double)relevanceScoreForMemory:(id)arg1 atDate:(id)arg2;

@end


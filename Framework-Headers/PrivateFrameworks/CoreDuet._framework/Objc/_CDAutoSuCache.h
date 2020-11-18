//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface _CDAutoSuCache : NSObject
{
    NSDictionary *_predictedSleep;
    NSDate *_predictedSleepValidityStartDate;
    NSDate *_predictedSleepValidityEndDate;
}

@property (strong) NSDictionary *predictedSleep; // @synthesize predictedSleep=_predictedSleep;
@property (strong) NSDate *predictedSleepValidityEndDate; // @synthesize predictedSleepValidityEndDate=_predictedSleepValidityEndDate;
@property (strong) NSDate *predictedSleepValidityStartDate; // @synthesize predictedSleepValidityStartDate=_predictedSleepValidityStartDate;

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)cachedPredictedSleepDictionaryForDate:(id)arg1;
- (void)clear;
- (void)setCachedPredictedSleepDictionary:(id)arg1 validityStartDate:(id)arg2 validityEndDate:(id)arg3;

@end

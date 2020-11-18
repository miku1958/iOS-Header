//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFTriggerBuilder.h>

@class NSArray, NSTimeZone;
@protocol HFTimerTriggerExecutionTime;

@interface HFTimerTriggerBuilder : HFTriggerBuilder
{
    id<HFTimerTriggerExecutionTime> _executionTime;
    NSArray *_recurrences;
    NSTimeZone *_timeZone;
}

@property (strong, nonatomic) id<HFTimerTriggerExecutionTime> executionTime; // @synthesize executionTime=_executionTime;
@property (copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property (copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;

- (void).cxx_destruct;
- (id)_executionTime;
- (BOOL)_hasWeekdayRecurrence;
- (id)_performValidation;
- (id)_updateRecurrences;
- (id)_updateTimeZone;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;

@end


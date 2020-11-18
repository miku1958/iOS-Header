//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDataDetector, NSDateFormatter, NSNumberFormatter;

@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator
{
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
    NSDataDetector *_addressDetector;
}

+ (id)sharedGenerator;
- (void).cxx_destruct;
- (id)_addressDetector;
- (id)_adjustedMinutesTillEventStarts:(id)arg1;
- (BOOL)_appendFreeAfternoonMessageToEventSummaryIfPossible:(id)arg1;
- (BOOL)_arrayHasAfternoonEvents:(id)arg1;
- (BOOL)_arrayHasMorningEvents:(id)arg1;
- (BOOL)_doesEventStartEarly:(id)arg1;
- (BOOL)_eventIsAlreadyLate:(id)arg1;
- (id)_locationStringForEvent:(id)arg1;
- (id)_naturalLanguageDescriptionForEvent:(id)arg1 isFirstInDay:(BOOL)arg2;
- (id)_noonDateForEvents:(id)arg1;
- (id)_notReallyRandomNumberBetween1AndN:(int)arg1;
- (BOOL)_prepareToUseMessageWithID:(id)arg1 shouldAllowWeekendUsage:(BOOL)arg2;
- (BOOL)_prependBusyDayMessageToEventSummaryIfPossible:(id)arg1;
- (BOOL)_prependEarlyStartMessageToEventSummaryIfPossible:(id)arg1;
- (BOOL)_prependFreeMorningMessageToEventSummaryIfPossible:(id)arg1;
- (id)_sharedDateFormatter;
- (id)_sharedNumberFormatter;
- (BOOL)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;
- (id)_timeStringForEvent:(id)arg1 forBeginningOfSentence:(BOOL)arg2 useExplicitTimes:(BOOL)arg3 followingComma:(BOOL)arg4;
- (void)dealloc;
- (id)init;
- (void)meCardChanged:(id)arg1;
- (id)naturalLanguageDescriptionForBirthdayEvents:(id)arg1;
- (id)naturalLanguageDescriptionForUpcomingEvents:(id)arg1 firstInDay:(BOOL)arg2;
- (id)tomorrowSnippetForUpcomingEvents:(id)arg1 withTodayEvents:(id)arg2;

@end


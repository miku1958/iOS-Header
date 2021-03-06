//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter;

@interface EKUIEventDescriptionGenerator : NSObject
{
    struct __CFDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
}

+ (id)eventDescriptionForDrag:(id)arg1;
- (void).cxx_destruct;
- (id)_adjustedMinutesTillEventStarts:(id)arg1;
- (id)_attendeesForEvent:(id)arg1 sorted:(BOOL)arg2 limitedTo:(long long)arg3;
- (struct __CFDateFormatter *)_sharedDateFormatter;
- (id)_sharedNumberFormatter;
- (BOOL)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;
- (void)dealloc;
- (id)naturalLanguageDescriptionForAttendees:(id)arg1;
- (id)timeStringForEvent:(id)arg1 forBeginningOfSentence:(BOOL)arg2 useExplicitTimes:(BOOL)arg3 followingComma:(BOOL)arg4;

@end


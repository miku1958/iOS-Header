//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGJournalBaseObserver-Protocol.h>

@class SGStorageEvent;

@protocol SGJournalCalendarObserver <SGJournalBaseObserver>
- (void)addEvent:(SGStorageEvent *)arg1;
- (void)calendarDeleted;
- (void)cancelEvent:(SGStorageEvent *)arg1;
- (void)confirmEvent:(SGStorageEvent *)arg1;
- (void)orphanEvent:(SGStorageEvent *)arg1;
- (void)rejectEvent:(SGStorageEvent *)arg1;
@end


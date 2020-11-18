//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/NSObject-Protocol.h>

@protocol CalSearchDataSink <NSObject>
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray *)arg2 cachedDays:(struct __CFArray *)arg3 cachedDaysIndexes:(struct __CFArray *)arg4;
- (void)calSearchComplete:(id)arg1;

@optional
- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;
- (BOOL)calSearchShouldStopSearching:(id)arg1;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/OccurrenceCacheDataSourceProtocol-Protocol.h>

@class EKEventStore, NSArray, NSSet, NSString;

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol>
{
    EKEventStore *_eventStore;
    NSSet *_calendars;
    NSArray *_cachedDays;
    int _cachedDaysSeed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedDays;
- (long long)cachedDayCount;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (BOOL)cachedOccurrencesAreBeingGenerated;
- (BOOL)cachedOccurrencesAreLoaded;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (id)dateAtDayIndex:(long long)arg1;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;
- (void)invalidate;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(id)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;
- (void)stopSearching;
- (BOOL)supportsFakeTodaySection;
- (BOOL)supportsInvitations;

@end


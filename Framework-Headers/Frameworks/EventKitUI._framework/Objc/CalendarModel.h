//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/CalendarEventLoaderDelegate-Protocol.h>

@class CalendarEventLoader, EKCalendarDate, EKEvent, EKEventStore, NSArray, NSCalendar, NSLock, NSSet, NSString, _EKNotificationMonitor;
@protocol OccurrenceCacheDataSourceProtocol;

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate>
{
    EKEventStore *_eventStore;
    CalendarEventLoader *_eventLoader;
    NSLock *_filterLock;
    NSArray *_visibleCalendars;
    long long _readWriteCalendarCount;
    long long _invitationBearingStoresExist;
    _EKNotificationMonitor *_notificationMonitor;
    id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheDataSource;
    id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheFilteredDataSource;
    long long _cachedFakeTodayIndex;
    NSSet *_selectedCalendars;
    NSString *_searchString;
    NSCalendar *_calendar;
    EKCalendarDate *_selectedDate;
    unsigned long long _firstVisibleSecond;
    EKEvent *_selectedOccurrence;
}

@property (copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property (nonatomic) unsigned long long firstVisibleSecond; // @synthesize firstVisibleSecond=_firstVisibleSecond;
@property (readonly, nonatomic) long long readWriteCalendarCount;
@property (strong, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (strong, nonatomic) NSSet *selectedCalendars; // @synthesize selectedCalendars=_selectedCalendars;
@property (copy, nonatomic) EKCalendarDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property (readonly, nonatomic) EKCalendarDate *selectedDay;
@property (strong, nonatomic) EKEvent *selectedOccurrence; // @synthesize selectedOccurrence=_selectedOccurrence;
@property (readonly, nonatomic) long long visibleCalendarCount;

+ (id)calendarModelWithDataPath:(id)arg1;
- (void).cxx_destruct;
- (void)_createOccurrenceCacheDataSources;
- (id)_dataSourceUsingFilter:(BOOL)arg1;
- (void)_eventStoreChanged:(id)arg1;
- (void)_invalidateCachedOccurrences;
- (void)_invalidateOccurrenceCacheDataSources;
- (void)_localeChanged:(id)arg1;
- (void)_notificationCountExpired:(id)arg1;
- (id)_notificationMonitor;
- (void)_notificationsExpired:(id)arg1;
- (void)_occurrenceCacheChanged;
- (void)_processReloadForCacheOnly:(BOOL)arg1 includingCalendars:(BOOL)arg2 checkCalendarsValid:(BOOL)arg3;
- (void)_recreateOccurrenceCacheDataSources;
- (void)_reloadIfTodayDetermined;
- (void)_searchResultsAvailable:(id)arg1;
- (void)_significantTimeChange:(id)arg1;
- (void)_systemWake;
- (void)_timeZoneChanged:(id)arg1;
- (double)_tomorrow;
- (void)_tzSupportTodayRolledOver;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (long long)cachedFakeTodayIndex;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (id)cachedOccurrenceAtIndexPath:(id)arg1 usingFilter:(BOOL)arg2;
- (BOOL)cachedOccurrencesAreBeingGenerated;
- (BOOL)cachedOccurrencesAreLoaded;
- (void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3;
- (id)closestOccurrenceToTomorrowForEventUID:(int)arg1;
- (id)dateForCachedOccurrencesInSection:(long long)arg1;
- (id)dateForCachedOccurrencesInSection:(long long)arg1 usingFilter:(BOOL)arg2;
- (void)dealloc;
- (id)defaultCalendarForNewEvents;
- (void)ensureCalendarVisibleWithId:(id)arg1;
- (id)eventNotificationReferences;
- (unsigned long long)eventNotificationsCount;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 usingFilter:(BOOL)arg2;
- (id)init;
- (id)initWithDataPath:(id)arg1;
- (BOOL)invitationBearingStoresExistForEvents;
- (BOOL)isCalendarVisibleWithID:(id)arg1;
- (long long)numberOfCachedOccurrencesInSection:(long long)arg1;
- (long long)numberOfCachedOccurrencesInSection:(long long)arg1 usingFilter:(BOOL)arg2;
- (long long)numberOfDaysWithCachedOccurrences;
- (long long)numberOfDaysWithCachedOccurrencesUsingFilter:(BOOL)arg1;
- (id)occurrencesForDay:(id)arg1 waitForLoad:(BOOL)arg2;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4;
- (id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4;
- (void)prepareForAppSuspend;
- (void)refreshAccountListIfNeeded:(BOOL)arg1;
- (void)refreshCalendarDataIfNeeded:(BOOL)arg1;
- (BOOL)removeEvent:(id)arg1 withSpan:(long long)arg2 error:(id *)arg3;
- (BOOL)searchingOccurrences;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL *)arg2;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL *)arg2 usingFilter:(BOOL)arg3;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 usingFilter:(BOOL)arg2;
- (id)selectedDateOccurrences:(BOOL)arg1 loadIsComplete:(BOOL *)arg2;
- (BOOL)selectedOccurrenceIsSearchMatch;
- (void)setComponentForExpandingPadding:(unsigned long long)arg1;
- (void)setComponentForExpandingRequests:(unsigned long long)arg1;
- (void)setDesiredPaddingDays:(unsigned int)arg1;
- (void)setMaxCachedDays:(unsigned int)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (void)startNotificationMonitor;
- (void)updateAfterAppResume;

@end


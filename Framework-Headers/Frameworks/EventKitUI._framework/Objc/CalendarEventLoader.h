//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEventStore, NSArray, NSMutableSet, NSSet;
@protocol CalendarEventLoaderDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface CalendarEventLoader : NSObject
{
    EKEventStore *_store;
    NSObject<OS_dispatch_queue> *_occurrencesLock;
    NSArray *_loadedOccurrences;
    NSArray *_loadedProposedTimeOccurrences;
    NSMutableSet *_occurrencesAwaitingRefresh;
    NSMutableSet *_occurrencesAwaitingDeletion;
    NSSet *_selectedCalendars;
    BOOL _selectedCalendarsWereSet;
    unsigned int _daysOfPadding;
    unsigned int _maxDaysToCache;
    unsigned long long _componentForExpandingRequests;
    unsigned long long _componentForExpandingPadding;
    double _preferredReloadStart;
    double _preferredReloadEnd;
    NSObject<OS_dispatch_group> *_loadGroup;
    NSObject<OS_dispatch_queue> *_loadQueue;
    int _cancelSeed;
    double _loadedStart;
    double _loadedEnd;
    BOOL _loadedOccurrencesAreStale;
    double _currentlyLoadingStart;
    double _currentlyLoadingEnd;
    double _lastRequestedStart;
    double _lastRequestedEnd;
    BOOL _allowEventLocationPrediction;
    id<CalendarEventLoaderDelegate> _delegate;
}

@property (nonatomic) BOOL allowEventLocationPrediction; // @synthesize allowEventLocationPrediction=_allowEventLocationPrediction;
@property (weak, nonatomic) id<CalendarEventLoaderDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_enqueueLoadForRangeStart:(double)arg1 end:(double)arg2;
- (void)_eventStoreChanged:(id)arg1;
- (void)_getLoadStart:(double *)arg1 end:(double *)arg2 fromLoadedStart:(double)arg3 loadedEnd:(double)arg4 currentlyLoadingStart:(double)arg5 currentlyLoadingEnd:(double)arg6;
- (void)_getStart:(double)arg1 end:(double)arg2 expandedToComponents:(unsigned long long)arg3 withResultStart:(double *)arg4 resultEnd:(double *)arg5;
- (void)_getStart:(double)arg1 end:(double)arg2 paddedByDays:(int)arg3 inTimeZone:(id)arg4 resultStart:(double *)arg5 resultEnd:(double *)arg6;
- (void)_loadIfNeededBetweenStart:(double)arg1 end:(double)arg2 loadPaddingNow:(BOOL)arg3;
- (void)_pruneLoadedOccurrences;
- (void)_reload;
- (id)_uniqueEventsFromArray:(id)arg1;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (void)cancelAllLoads;
- (void)dealloc;
- (BOOL)firstLoadBegan;
- (id)initWithEventStore:(id)arg1;
- (void)loadIfNeeded;
- (BOOL)loadIsComplete;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4;
- (void)setCacheLimit:(unsigned int)arg1;
- (void)setComponentForExpandingPadding:(unsigned long long)arg1;
- (void)setComponentForExpandingRequests:(unsigned long long)arg1;
- (void)setPadding:(unsigned int)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (void)setSelectedCalendars:(id)arg1;
- (void)timeZoneChanged;
- (void)waitForBackgroundLoad;

@end


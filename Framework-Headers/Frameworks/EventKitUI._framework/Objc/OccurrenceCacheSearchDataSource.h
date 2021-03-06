//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/OccurrenceCacheDataSource.h>

@class EKOccurrenceCacheSearch, EKSpotlightSearch, NSArray, NSMutableDictionary, NSString;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource
{
    EKSpotlightSearch *_narrowSearch;
    EKSpotlightSearch *_distantFutureSearch;
    EKSpotlightSearch *_distantPastSearch;
    EKOccurrenceCacheSearch *_legacySearch;
    NSString *_searchTerm;
    NSMutableDictionary *_processingCachedDays;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _resultsLock;
    NSArray *_sortedDays;
    int _searchSeed;
}

- (void).cxx_destruct;
- (id)_cachedDays;
- (void)_setCachedDaysAndNotify:(id)arg1;
- (void)_updateCachedDays;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;
- (void)invalidate;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(id)arg1;
- (void)stopSearching;
- (BOOL)supportsFakeTodaySection;
- (BOOL)supportsInvitations;

@end


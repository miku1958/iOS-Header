//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL, WBSHistoryVisit;

@interface WBSHistoryItem : NSObject
{
    WBSHistoryVisit *_lastVisit;
    NSMutableSet *_visitsPendingWriteToDataStore;
    long long _databaseID;
    unsigned long long _visitCount;
    Vector_3b5d2a9f _dailyVisitCountScores;
    Vector_3b5d2a9f _weeklyVisitCountScores;
    NSMutableArray *_redirectSourceItems;
    NSMutableArray *_autocompleteTriggers;
    NSMutableArray *_visits;
    BOOL _shouldRecomputeDerivedVisitCountScores;
    float _cachedTopSitesURLPenalty;
    float _cachedTopSitesVisitScore;
    NSURL *_url;
    NSString *_userVisibleURLString;
    NSString *_urlString;
    unsigned long long _visitCountScore;
    double _lastTimeTopSitesScoreWasComputed;
}

@property (readonly, nonatomic) NSArray *autocompleteTriggers;
@property (readonly, nonatomic) NSData *autocompleteTriggersDataOnSynchronizationQueue;
@property (nonatomic) float cachedTopSitesURLPenalty; // @synthesize cachedTopSitesURLPenalty=_cachedTopSitesURLPenalty;
@property (nonatomic) float cachedTopSitesVisitScore; // @synthesize cachedTopSitesVisitScore=_cachedTopSitesVisitScore;
@property (readonly, nonatomic) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue;
@property (readonly, nonatomic) NSData *dailyVisitCountScoresDataOnSynchronizationQueue;
@property (readonly, nonatomic) const int *dailyVisitCountScoresPtrOnSynchronizationQueue;
@property (nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
@property (readonly, nonatomic) WBSHistoryItem *endOfLastVisitRedirectChain;
@property (nonatomic) double lastTimeTopSitesScoreWasComputed; // @synthesize lastTimeTopSitesScoreWasComputed=_lastTimeTopSitesScoreWasComputed;
@property (readonly, nonatomic) WBSHistoryVisit *lastVisit;
@property (readonly, nonatomic) WBSHistoryVisit *lastVisitOnSynchronizationQueue;
@property (readonly, nonatomic) WBSHistoryItem *lastVisitRedirectDestinationItem;
@property (nonatomic) BOOL lastVisitWasFailure;
@property (readonly, nonatomic) BOOL lastVisitWasHTTPNonGet;
@property (readonly, nonatomic) NSDate *lastVisitedDate;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) double lastVisitedTimeIntervalOnSynchronizationQueue;
@property (readonly, nonatomic) NSArray *redirectSourceItems;
@property (readonly, nonatomic) BOOL shouldRecomputeDerivedVisitCountScores; // @synthesize shouldRecomputeDerivedVisitCountScores=_shouldRecomputeDerivedVisitCountScores;
@property (readonly, nonatomic) NSString *simplifiedUserVisibleURLString;
@property (readonly, nonatomic) NSString *stringForUserTypedDomainExpansion;
@property (readonly, nonatomic) NSString *stringForUserTypedDomainExpansionOnSynchronizationQueue;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property (readonly, nonatomic) NSURL *urlOnSynchronizationQueue;
@property (readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property (readonly, nonatomic) NSString *userVisibleURLString; // @synthesize userVisibleURLString=_userVisibleURLString;
@property (readonly, nonatomic) unsigned long long visitCount;
@property (readonly, nonatomic) unsigned long long visitCountScore; // @synthesize visitCountScore=_visitCountScore;
@property (readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property (readonly, nonatomic) NSSet *visitsPendingWriteToDataStoreOnSynchronizationQueue;
@property (readonly, nonatomic) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue;
@property (readonly, nonatomic) NSData *weeklyVisitCountScoresDataOnSynchronizationQueue;
@property (readonly, nonatomic) const int *weeklyVisitCountScoresPtrOnSynchronizationQueue;

+ (void)initialize;
+ (id)synchronizationQueue;
+ (double)timeIntervalForDailyAndWeeklyVisitCountScores;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_addAutocompleteTriggerFromSynchronizationQueue:(id)arg1;
- (void)_addExistingVisit:(id)arg1;
- (void)_addVisit:(id)arg1;
- (id)_autocompleteTriggersFromSynchronizationQueue;
- (void)_collapseDailyVisitsToWeekly;
- (void)_padDailyCountsForNewVisitAtTime:(double)arg1 indexOfNewVisit:(int *)arg2;
- (Vector_23cb8338)_timesForSynthesizedVisitsPreceedingDailyAndWeeklyRange:(unsigned long long)arg1;
- (Vector_23cb8338)_timesForVisits:(unsigned long long)arg1 toSynthesizeBetweenStartTime:(double)arg2 endTime:(double)arg3;
- (Vector_23cb8338)_timesOfVisitsToSynthesizeFromDailyCounts:(const Vector_3b5d2a9f *)arg1 weeklyCounts:(const Vector_3b5d2a9f *)arg2;
- (void)_wasVisitedOnSynchronizationQueue:(id)arg1;
- (BOOL)addAutocompleteTrigger:(id)arg1;
- (void)addRedirectSourceItemFromSynchronizationQueue:(id)arg1;
- (void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
- (long long)compareWithItemByLastVisitedTimeInterval:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (void)mergeDataFromItem:(id)arg1;
- (void)recomputeDerivedVisitCountScoresWithVisits:(id)arg1;
- (void)recordExistingRedirectFrom:(id)arg1 to:(id)arg2;
- (void)recordSynthesizedRedirectFrom:(id)arg1 to:(id)arg2;
- (void)removeVisits:(id)arg1 candidateLastVisit:(id)arg2;
- (void)removeVisitsOnSynchronizationQueue:(id)arg1 candidateLastVisit:(id)arg2;
- (void)scoreOfVisit:(id)arg1 wasUpdatedFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)visitWasModified:(id)arg1;
- (void)wasRedirectedFrom:(id)arg1 to:(id)arg2;
- (void)wasVisited:(id)arg1;

@end


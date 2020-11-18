//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>
#import <PersonalizationPortraitInternals/PPFeedbackProcessing-Protocol.h>

@class PPLocationCache, PPLocationStorage, PPM2FeedbackPortraitRegistered, PPMFeedbackRegistered, PPMLocationDonation, PPMLocationScored, PPMObjectsDeletion;

@interface PPLocalLocationStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing>
{
    PPLocationStorage *_storage;
    PPLocationCache *_cache;
    PPMLocationScored *_adoptionTracker;
    PPMLocationDonation *_donationTracker;
    PPMObjectsDeletion *_deletionTracker;
    PPMFeedbackRegistered *_feedbackTracker;
    PPM2FeedbackPortraitRegistered *_feedbackTracker2;
}

+ (id)defaultStore;
+ (BOOL)isLocationRelevantNamedEntityCategory:(unsigned long long)arg1;
+ (id)locationFromMapItem:(id)arg1;
+ (id)locationFromMapItemDictionary:(id)arg1;
+ (id)locationNamedEntityToPPScoredLocation:(id)arg1;
+ (unsigned short)namedEntityCategoryToLocationCategory:(unsigned long long)arg1;
+ (unsigned short)poiCategoryToPPLocationCategory:(id)arg1;
+ (float)resolvedPerRecordDecayRateForRecord:(id)arg1 perRecordDecayRate:(float)arg2;
+ (unsigned short)routineLOITypeToLocationCategory:(long long)arg1;
+ (id)scoreLocations:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4;
+ (id)scoredLocationFromName:(id)arg1 category:(unsigned short)arg2 score:(double)arg3 sentimentScore:(double)arg4;
+ (void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)_init;
- (void)_petLoggingForQuery:(id)arg1 resultCount:(unsigned long long)arg2 hasError:(BOOL)arg3;
- (id)_unlimitedLocationRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (BOOL)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)deleteAllLocationsOlderThanDate:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 error:(id *)arg7;
- (id)homeOrWorkAddresses;
- (id)init;
- (id)initWithStorage:(id)arg1;
- (BOOL)iterLocationRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)iterRankedLocationsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)locationForHome;
- (id)locationForWork;
- (id)locationRecordOfCategory:(unsigned short)arg1;
- (id)locationRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (void)processFeedback:(id)arg1;
- (id)rankedLocationsWithQuery:(id)arg1 error:(id *)arg2;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)sourceStatsExcludedAlgorithms:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PSITable.h>

@class PSIStatement;

@interface PSITripTable : PSITable
{
    PSIStatement *_insertStatement;
    PSIStatement *_deleteStatement;
    PSIStatement *_checkStatement;
    PSIStatement *_listStatement;
    PSIStatement *_tripResultsForTripIdsStatement;
    PSIStatement *_tripResultByTripIdWithTripIdsStatement;
    PSIStatement *_selectWithSingleDateStatement;
    PSIStatement *_selectWithStartEndDatesStatement;
    PSIStatement *_selectWithStartDateStatement;
    PSIStatement *_selectWithEndDateStatement;
    PSIStatement *_selectByGroupIdWithSingleDateStatement;
    PSIStatement *_selectByGroupIdWithStartEndDatesStatement;
    PSIStatement *_selectByGroupIdWithStartDateStatement;
    PSIStatement *_selectByGroupIdWithEndDateStatement;
    PSIStatement *_selectByGroupIdStatement;
    PSIStatement *_groupIdsWithTripIdsStatement;
    PSIStatement *_idsOfAllGroupsMatchedByTripsStatement;
    PSIStatement *_tripIdsByGroupIdWithTripIdsStatement;
    PSIStatement *_numberOfTripsMatchingGroupWithIdStatement;
    PSIStatement *_numberOfTripsByGroupIdMatchingGroupsWithIdsStatement;
    PSIStatement *_linkToMomentStatement;
    PSIStatement *_unlinkFromAllMomentsStatement;
    PSIStatement *_getMomentsStatement;
    PSIStatement *_linkToGroupStatement;
    PSIStatement *_unlinkFromGroupsStatement;
}

- (void).cxx_destruct;
- (long long)addTrip:(id)arg1 usingTokenEnumeratingBlock:(CDUnknownBlockType)arg2;
- (id)allTripUUIDs;
- (void)cacheOtherStatements;
- (void)cacheSearchableStatements;
- (void)cacheWritableStatements;
- (void)clear;
- (void)finalizze;
- (id)idsOfAllGroupsMatchedByTrips;
- (id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3;
- (void)linkTripWithId:(long long)arg1 toGroupWithId:(long long)arg2;
- (const struct __CFSet *)newGroupIdsWithTripIds:(struct __CFSet *)arg1;
- (const struct __CFArray *)newTripIdsWithDateFilter:(id)arg1;
- (const struct __CFArray *)newTripIdsWithGroupId:(long long)arg1 dateFilter:(id)arg2;
- (id)numberOfTripsByGroupIdMatchingGroupsWithIds:(id)arg1;
- (unsigned long long)numberOfTripsMatchingGroupWithId:(long long)arg1;
- (id)removeAllTrips;
- (void)removeTripForId:(long long)arg1;
- (long long)tripIdForUUID:(id)arg1;
- (id)tripIdsByGroupIdWithTripIds:(id)arg1;
- (id)tripResultByTripIdWithTripIds:(id)arg1;
- (id)tripResultsForTripIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2;
- (void)unlinkTripForId:(long long)arg1;

@end


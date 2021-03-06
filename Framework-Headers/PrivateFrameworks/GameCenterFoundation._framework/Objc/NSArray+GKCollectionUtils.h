//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (GKCollectionUtils)
+ (id)_gkArrayWithIndexSet:(id)arg1;
- (id)_gkDescriptionWithChildren:(long long)arg1;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkFilterWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkFirstObject;
- (id)_gkFoldWithInitialValue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_gkGuestPlayersFromPlayers;
- (id)_gkIncompletePlayersFromPlayerIDs;
- (id)_gkInternalsFromPlayers;
- (id)_gkMapConcurrentlyWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkNonGuestPlayersFromPlayers;
- (id)_gkOrderedSet;
- (id)_gkPlayersFromInternals;
- (id)_gkPlayersIDsFromPlayers;
- (id)_gkSubarraysByKeyWithBlock:(CDUnknownBlockType)arg1;
- (void)_gkValidatePlayersForReturnFromAPI;
- (id)_gkValuesForKeyPath:(id)arg1;
@end


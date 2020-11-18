//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, GKLeaderboardSet, NSArray, NSDictionary;

@interface GKDashboardLeaderboardListDataSource : GKCollectionDataSource
{
    NSDictionary *_assetNames;
    GKGameRecord *_gameRecord;
    GKLeaderboardSet *_leaderboardSet;
    NSArray *_leaderboards;
}

@property (strong, nonatomic) NSDictionary *assetNames; // @synthesize assetNames=_assetNames;
@property (strong, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property (strong, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
@property (strong, nonatomic) NSArray *leaderboards; // @synthesize leaderboards=_leaderboards;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)preferredCollectionHeight;
- (void)removeLeaderboardsWithoutImages;
- (id)sectionHeaderText;
- (void)setupCollectionView:(id)arg1;

@end

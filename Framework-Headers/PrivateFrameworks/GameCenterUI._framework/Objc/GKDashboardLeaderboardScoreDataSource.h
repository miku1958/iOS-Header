//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, GKLeaderboard, NSArray, UIFont;

@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource
{
    BOOL _showingMoreScores;
    BOOL _forceInitialShowMore;
    GKLeaderboard *_leaderboard;
    id _timeScopeTarget;
    SEL _timeScopeAction;
    GKGameRecord *_gameRecord;
    NSArray *_scores;
    long long _visibleItemCount;
}

@property (nonatomic) BOOL forceInitialShowMore; // @synthesize forceInitialShowMore=_forceInitialShowMore;
@property (strong, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property (strong, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property (readonly, nonatomic) BOOL needsShowMoreCell; // @dynamic needsShowMoreCell;
@property (readonly, nonatomic) BOOL needsShowcaseCell; // @dynamic needsShowcaseCell;
@property (nonatomic) long long playerScope; // @dynamic playerScope;
@property (strong, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property (readonly, nonatomic) UIFont *sectionHeaderFont;
@property (nonatomic, getter=isShowingMoreScores) BOOL showingMoreScores; // @synthesize showingMoreScores=_showingMoreScores;
@property (nonatomic) long long timeScope; // @dynamic timeScope;
@property (nonatomic) SEL timeScopeAction; // @synthesize timeScopeAction=_timeScopeAction;
@property (weak, nonatomic) id timeScopeTarget; // @synthesize timeScopeTarget=_timeScopeTarget;
@property (nonatomic) long long visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)hasFriendsButton;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;
- (BOOL)isShowMoreIndexPath:(id)arg1;
- (BOOL)isShowcaseIndexPath:(id)arg1;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)preferredCollectionHeight;
- (void)revealMoreItemsInCollectionView:(id)arg1 section:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sectionHeaderButtonPressed:(id)arg1;
- (id)sectionHeaderText;
- (void)setupCollectionView:(id)arg1;
- (void)showMoreInCollectionView:(id)arg1 section:(long long)arg2;

@end


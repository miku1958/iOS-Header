//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKDashboardLeaderboardScoreDataSource, GKDashboardLeaderboardScoreHeaderView, GKLeaderboard;

@interface GKDashboardLeaderboardScoreViewController : GKDashboardCollectionViewController
{
    GKDashboardLeaderboardScoreHeaderView *_headerView;
    GKLeaderboard *_leaderboard;
    GKDashboardLeaderboardScoreDataSource *_friendDataSource;
    GKDashboardLeaderboardScoreDataSource *_globalDataSource;
    long long _timeScope;
}

@property (strong, nonatomic) GKDashboardLeaderboardScoreDataSource *friendDataSource; // @synthesize friendDataSource=_friendDataSource;
@property (strong, nonatomic) GKDashboardLeaderboardScoreDataSource *globalDataSource; // @synthesize globalDataSource=_globalDataSource;
@property (strong, nonatomic) GKDashboardLeaderboardScoreHeaderView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property (nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;

+ (long long)initialTimeScope;
+ (void)setInitialTimeScope:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dataUpdated:(BOOL)arg1 withError:(id)arg2;
- (void)donePressed:(id)arg1;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (BOOL)shouldUseTwoColumnLayoutForSize:(struct CGSize)arg1;
- (void)timeScopePressed:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateColumnLayoutForSize:(struct CGSize)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end


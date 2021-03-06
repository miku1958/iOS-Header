//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@interface GKChallengeListViewController : GKDashboardCollectionViewController
{
    BOOL _shouldShowPlayForChallenge;
    double _startTime;
}

@property (nonatomic) BOOL shouldShowPlayForChallenge; // @synthesize shouldShowPlayForChallenge=_shouldShowPlayForChallenge;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;

- (void)configureCloseButton;
- (void)configureCollectionView;
- (void)donePressed:(id)arg1;
- (id)initWithGameRecord:(id)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end


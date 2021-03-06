//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKSplittingDataSource.h>

@class GKGame, NSObject;
@protocol GKTurnBasedMatchesDataSourceDelegate;

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource
{
    NSObject<GKTurnBasedMatchesDataSourceDelegate> *_delegateWeak;
    GKGame *_game;
    SEL _detailPressedAction;
    struct UIEdgeInsets _cellMarginInsets;
}

@property (nonatomic) struct UIEdgeInsets cellMarginInsets; // @synthesize cellMarginInsets=_cellMarginInsets;
@property (weak, nonatomic) NSObject<GKTurnBasedMatchesDataSourceDelegate> *delegate; // @synthesize delegate=_delegateWeak;
@property (nonatomic) SEL detailPressedAction; // @synthesize detailPressedAction=_detailPressedAction;
@property (strong, nonatomic) GKGame *game; // @synthesize game=_game;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)configureDataSource;
- (unsigned long long)numberOfMatches;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


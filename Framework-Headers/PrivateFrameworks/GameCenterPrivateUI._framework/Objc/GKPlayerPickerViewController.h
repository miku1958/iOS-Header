//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKCollectionViewController.h>

@class GKGame, GKSearchBarView, NSArray;
@protocol GKNearbyBrowserDelegate;

@interface GKPlayerPickerViewController : GKCollectionViewController
{
    BOOL _supportsNearby;
    long long _maxSelectable;
    GKGame *_game;
    id<GKNearbyBrowserDelegate> _nearbyDelegate;
    GKSearchBarView *_searchBar;
    CDUnknownBlockType _handler;
    NSArray *_preselectedPlayers;
}

@property (strong, nonatomic) GKGame *game; // @synthesize game=_game;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;
@property (nonatomic) id<GKNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property (strong, nonatomic) NSArray *preselectedPlayers; // @synthesize preselectedPlayers=_preselectedPlayers;
@property (nonatomic) GKSearchBarView *searchBar; // @synthesize searchBar=_searchBar;
@property (nonatomic) BOOL supportsNearby; // @synthesize supportsNearby=_supportsNearby;

+ (id)challengesPickerWithChallenge:(id)arg1 selectedPlayers:(id)arg2;
+ (id)multiplayerPickerForGame:(id)arg1 hiddenPlayers:(id)arg2;
- (BOOL)_gkWantsCustomRightBarButtonItemInViewService;
- (void)cancel;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)configureSearchBar:(id)arg1;
- (void)configureSectionHeader:(id)arg1 indexPath:(id)arg2;
- (void)configureViewFactories;
- (void)dealloc;
- (void)done;
- (id)initWithGame:(id)arg1 selectedPlayers:(id)arg2;
- (id)splitingDataSource;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMetrics;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

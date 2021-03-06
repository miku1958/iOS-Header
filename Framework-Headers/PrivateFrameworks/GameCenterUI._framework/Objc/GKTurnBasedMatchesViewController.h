//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionViewController.h>

#import <GameCenterUI/GKTurnBasedInviteViewControllerDelegate-Protocol.h>
#import <GameCenterUI/GKTurnBasedMatchDetailViewControllerDelegate-Protocol.h>
#import <GameCenterUI/GKTurnBasedMatchesDataSourceDelegate-Protocol.h>
#import <GameCenterUI/UIPopoverControllerDelegate-Protocol.h>
#import <GameCenterUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <GameCenterUI/UIStateRestoring-Protocol.h>

@class GKGame, GKMatchRequest, GKTurnBasedInviteViewController, GKTurnBasedMatchesDataSource, NSString;
@protocol GKTurnBasedMatchesViewControllerDelegate, UIStateRestoring;

@interface GKTurnBasedMatchesViewController : GKCollectionViewController <GKTurnBasedInviteViewControllerDelegate, GKTurnBasedMatchDetailViewControllerDelegate, GKTurnBasedMatchesDataSourceDelegate, UIPopoverControllerDelegate, UIStateRestoring, UIPopoverPresentationControllerDelegate>
{
    BOOL _showExistingMatches;
    BOOL _showPlay;
    BOOL _showQuit;
    GKCollectionViewController *_masterViewController;
    GKGame *_game;
    GKMatchRequest *_matchRequest;
    id<GKTurnBasedMatchesViewControllerDelegate> _delegate;
    GKTurnBasedMatchesDataSource *_matchesDataSource;
    long long _maxMatchesSeen;
    NSString *_matchIDWaitingForTurnEvent;
    GKTurnBasedInviteViewController *_inviteController;
    double _initialSectionHeaderHeight;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GKTurnBasedMatchesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) GKGame *game; // @synthesize game=_game;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialSectionHeaderHeight; // @synthesize initialSectionHeaderHeight=_initialSectionHeaderHeight;
@property (strong, nonatomic) GKTurnBasedInviteViewController *inviteController; // @synthesize inviteController=_inviteController;
@property (weak, nonatomic) GKCollectionViewController *masterViewController; // @synthesize masterViewController=_masterViewController;
@property (strong, nonatomic) NSString *matchIDWaitingForTurnEvent; // @synthesize matchIDWaitingForTurnEvent=_matchIDWaitingForTurnEvent;
@property (strong, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
@property (strong, nonatomic) GKTurnBasedMatchesDataSource *matchesDataSource; // @synthesize matchesDataSource=_matchesDataSource;
@property (nonatomic) long long maxMatchesSeen; // @synthesize maxMatchesSeen=_maxMatchesSeen;
@property (readonly, nonatomic) Class objectRestorationClass;
@property (readonly, nonatomic) id<UIStateRestoring> restorationParent;
@property (nonatomic) BOOL showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;
@property (nonatomic) BOOL showPlay; // @synthesize showPlay=_showPlay;
@property (nonatomic) BOOL showQuit; // @synthesize showQuit=_showQuit;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)acceptInviteForMatch:(id)arg1;
- (void)addPressed;
- (void)applicationDidEnterBackground;
- (void)cancelButtonPressed;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureDataSource;
- (void)configureHeader:(id)arg1 indexPath:(id)arg2;
- (void)configureViewFactories;
- (void)dealloc;
- (void)detailPressedForMatch:(id)arg1;
- (void)didEnterNoContentState;
- (void)dismissDetailViewControllerAnimated:(BOOL)arg1;
- (void)dismissDetailViewControllerInPopover:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleTurnBasedEvent:(id)arg1;
- (id)init;
- (id)initWithMatchRequest:(id)arg1;
- (BOOL)isInGame;
- (void)launchGameAndShowMatch:(id)arg1;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)notifyGameWithMatch:(id)arg1 orError:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentNavigationControllerInPopover:(id)arg1 fromCell:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showDetailForMatch:(id)arg1;
- (void)showInviteControllerAnimated:(BOOL)arg1;
- (void)showMatch:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2;
- (void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidChooseMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidQuitMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidRemoveMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidShowStore:(id)arg1;
- (void)turnBasedMatchesDataSource:(id)arg1 didQuitMatch:(id)arg2;
- (void)updateUIBasedOnTraitCollection;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end


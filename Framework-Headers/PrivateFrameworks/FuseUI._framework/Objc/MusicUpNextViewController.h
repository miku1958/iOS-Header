//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicUpNextAggregateDataSourceDelegate-Protocol.h>
#import <FuseUI/MusicUpNextNowPlayingLockupViewDelegate-Protocol.h>
#import <FuseUI/MusicUpNextTableViewDelegate-Protocol.h>
#import <FuseUI/UITableViewDataSource-Protocol.h>
#import <FuseUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class MusicAVPlayer, MusicClientContext, MusicUpNextAggregateDataSource, MusicUpNextNowPlayingLockupView, MusicUpNextTableView, NSIndexPath, NSString, SKUIClientContext, UIView;

@interface MusicUpNextViewController : UIViewController <UITableViewDataSource, MusicUpNextTableViewDelegate, MusicUpNextAggregateDataSourceDelegate, MusicUpNextNowPlayingLockupViewDelegate, MusicClientContextConsuming, UIViewControllerTransitioningDelegate>
{
    MusicUpNextTableView *_tableView;
    NSIndexPath *_indexPathForNowPlayingFrame;
    MusicUpNextNowPlayingLockupView *_nowPlayingView;
    UIView *_hairlineView;
    struct UIEdgeInsets _appliedEdgeInsets;
    BOOL _ignoreUpdates;
    BOOL _isReordering;
    BOOL _loadingCells;
    BOOL _didMutateWhileLoading;
    BOOL _shouldDismissOnItemChange;
    BOOL _hidesNowPlaying;
    BOOL _shouldDismissImmediately;
    MusicClientContext *_clientContext;
    MusicUpNextAggregateDataSource *_dataSource;
    MusicAVPlayer *_player;
    UIView *_itemContentViewContainerView;
}

@property (strong, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) MusicUpNextAggregateDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesNowPlaying; // @synthesize hidesNowPlaying=_hidesNowPlaying;
@property (readonly, nonatomic) UIView *itemContentViewContainerView; // @synthesize itemContentViewContainerView=_itemContentViewContainerView;
@property (strong, nonatomic) MusicAVPlayer *player; // @synthesize player=_player;
@property (nonatomic) BOOL shouldDismissImmediately; // @synthesize shouldDismissImmediately=_shouldDismissImmediately;
@property (readonly, nonatomic) BOOL shouldDismissOnItemChange; // @synthesize shouldDismissOnItemChange=_shouldDismissOnItemChange;
@property (readonly) Class superclass;

+ (id)upNextViewControllerWithPlayer:(id)arg1;
- (void).cxx_destruct;
- (void)_dismissUpNext;
- (double)_maximumRowHeight;
- (void)_playlistManagerDisableUserQueueModifcationsDidChange:(id)arg1;
- (void)_preferredContentSizeDidChange:(id)arg1;
- (struct CGRect)_rectForNowPlayingAndQueue;
- (struct CGRect)_rectForQueue;
- (void)_reloadNowPlayingView;
- (id)_translateTableViewUpdatesToMoveIfPossible:(id)arg1;
- (void)_updateTableViewInsets;
- (void)aggregateDataSource:(id)arg1 didUpdate:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (void)nowPlayingLockupView:(id)arg1 touchEnded:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepareForDismissal;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectContextualActionsButton:(id)arg2 forCell:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 pinView:(id)arg2 didUpdatePinLocation:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <GameCenterPrivateUI/UISearchBarDelegate-Protocol.h>
#import <GameCenterPrivateUI/UISearchControllerDelegate-Protocol.h>
#import <GameCenterPrivateUI/UISearchResultsUpdating-Protocol.h>
#import <GameCenterPrivateUI/UITableViewDataSource-Protocol.h>
#import <GameCenterPrivateUI/UITableViewDelegate-Protocol.h>

@class GKNoContentView, NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UISearchController;
@protocol GKFriendListViewControllerDelegate;

@interface GKFriendListViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource>
{
    id<GKFriendListViewControllerDelegate> _delegate;
    NSMutableArray *_friendPlayers;
    NSArray *_searchPlayers;
    GKNoContentView *_noContentView;
    UISearchController *_searchController;
    UIActivityIndicatorView *_activityIndicator;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<GKFriendListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableArray *friendPlayers; // @synthesize friendPlayers=_friendPlayers;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) GKNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property (strong, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property (strong, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property (readonly) Class superclass;

- (void)hideNoContentPlaceholder;
- (void)loadData;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeAllFriendsButtonPressed;
- (void)setupNavBarItems;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)setupSearchController;
- (void)showLoadingIndicator;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateTitlesWith:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

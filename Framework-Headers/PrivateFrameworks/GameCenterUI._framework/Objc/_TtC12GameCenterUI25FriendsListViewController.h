//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/_TtC12GameCenterUI28BaseCollectionViewController.h>

#import <GameCenterUI/UISearchControllerDelegate-Protocol.h>
#import <GameCenterUI/UISearchResultsUpdating-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI25FriendsListViewController : _TtC12GameCenterUI28BaseCollectionViewController <UISearchResultsUpdating, UISearchControllerDelegate>
{
    MISSING_TYPE *bootstrapPresenter;
    MISSING_TYPE *statePresenter;
    MISSING_TYPE *collectionContent;
    MISSING_TYPE *components;
    MISSING_TYPE *searchController;
    MISSING_TYPE *addFriendsBarButtonItem;
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)didDismissSearchController:(id)arg1;
- (void)didTapAddFriends;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end


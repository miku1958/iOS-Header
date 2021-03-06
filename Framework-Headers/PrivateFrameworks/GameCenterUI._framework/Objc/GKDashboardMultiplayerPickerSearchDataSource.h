//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionDataSource.h>

@class NSArray, NSMutableDictionary, UISearchBar;

@interface GKDashboardMultiplayerPickerSearchDataSource : GKCollectionDataSource
{
    BOOL _searching;
    NSMutableDictionary *_playerStates;
    UISearchBar *_searchBar;
    NSArray *_allPlayers;
    NSArray *_searchPlayers;
    long long _maxSelectable;
}

@property (copy, nonatomic) NSArray *allPlayers; // @synthesize allPlayers=_allPlayers;
@property (readonly, nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;
@property (strong, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
@property (weak, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property (copy, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property (nonatomic, getter=isSearching) BOOL searching; // @synthesize searching=_searching;
@property (readonly, nonatomic) NSArray *selectedPlayers;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)initWithSearchPlayers:(id)arg1 maxSelectable:(long long)arg2;
- (long long)itemCount;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)preferredCollectionHeight;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchKeyForSection:(long long)arg1;
- (void)searchTextHasChanged;
- (void)setupCollectionView:(id)arg1;

@end


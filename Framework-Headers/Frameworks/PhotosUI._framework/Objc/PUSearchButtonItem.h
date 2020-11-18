//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class PUSearchButtonItemCustomView, UINavigationItem, UISearchBar, UIView;
@protocol UISearchBarDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchButtonItem : UIBarButtonItem
{
    PUSearchButtonItemCustomView *_customView;
    UIView *_searchIcon;
    struct CGRect _searchIconDefaultBounds;
    UISearchBar *_searchBar;
    BOOL _wantsShowingSearchBar;
    BOOL _showingSearchBar;
    BOOL _nudgesSearchIcon;
    UINavigationItem *_navigationItem;
    id<UISearchBarDelegate> _searchBarDelegate;
}

@property (nonatomic) double maxSearchBarWidth;
@property (readonly, weak, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property (nonatomic) BOOL nudgesSearchIcon; // @synthesize nudgesSearchIcon=_nudgesSearchIcon;
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (weak, nonatomic) id<UISearchBarDelegate> searchBarDelegate; // @synthesize searchBarDelegate=_searchBarDelegate;
@property (readonly, nonatomic) BOOL showingSearchBar; // @synthesize showingSearchBar=_showingSearchBar;

- (void).cxx_destruct;
- (id)_allNavigationButtonItems;
- (struct CGRect)_targetBoundsForSearchBarInNavigationBar:(id)arg1;
- (id)initWithNavigationItem:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)navigationBarDidUpdate;
- (void)setShowingSearchBar:(BOOL)arg1 animated:(BOOL)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUSearchableViewController-Protocol.h>

@class NSString, UIScrollView, UIView;
@protocol HUSearchBar;

@interface HUSearchableItemTableViewController : HUItemTableViewController <HUSearchableViewController>
{
    UIView<HUSearchBar> *_searchBar;
    unsigned long long _searchBarPosition;
    UIScrollView *_searchBarWrapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView<HUSearchBar> *searchBar; // @synthesize searchBar=_searchBar;
@property (readonly, nonatomic) unsigned long long searchBarPosition; // @synthesize searchBarPosition=_searchBarPosition;
@property (readonly, nonatomic) UIScrollView *searchBarWrapper; // @synthesize searchBarWrapper=_searchBarWrapper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 searchBar:(id)arg3 searchBarPosition:(unsigned long long)arg4;
- (void)setupSearchBar;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)updateForSearch;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HelpKit/UISearchBarDelegate-Protocol.h>
#import <HelpKit/UISearchControllerDelegate-Protocol.h>
#import <HelpKit/UISearchResultsUpdating-Protocol.h>

@class HLPHelpBookController, HLPHelpLocale, HLPHelpSearchIndexController, HLPHelpSearchResultTableViewController, HLPHelpUsageController, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, UISearchController, UIView;
@protocol HLPHelpTableOfContentViewControllerDelegate;

@interface HLPHelpTableOfContentViewController : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate>
{
    UILabel *_copyrightFooterLabel;
    UIButton *_footerViewOverlayButton;
    NSMutableArray *_openSections;
    NSMutableArray *_displayHelpItems;
    NSLayoutConstraint *_copyrightFooterLabelHeightConstraint;
    NSLayoutConstraint *_copyrightFooterLabelTopConstraint;
    HLPHelpSearchResultTableViewController *_searchResultTableViewController;
    BOOL _fullBookView;
    id<HLPHelpTableOfContentViewControllerDelegate> _delegate;
    NSArray *_searchTerms;
    HLPHelpLocale *_locale;
    HLPHelpBookController *_helpBookController;
    HLPHelpUsageController *_usageController;
    UISearchController *_searchController;
    UIView *_tableFooterView;
    HLPHelpSearchIndexController *_helpSearchIndexController;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HLPHelpTableOfContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fullBookView; // @synthesize fullBookView=_fullBookView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HLPHelpBookController *helpBookController; // @synthesize helpBookController=_helpBookController;
@property (strong, nonatomic) HLPHelpSearchIndexController *helpSearchIndexController; // @synthesize helpSearchIndexController=_helpSearchIndexController;
@property (strong, nonatomic) HLPHelpLocale *locale; // @synthesize locale=_locale;
@property (strong, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property (strong, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property (strong, nonatomic) HLPHelpUsageController *usageController; // @synthesize usageController=_usageController;

- (void).cxx_destruct;
- (void)appendChildrenForSectionItem:(id)arg1;
- (void)closeSectionItem:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)copyrightButtonTapped;
- (void)deselectCurrentRow;
- (id)initWithStyle:(long long)arg1;
- (void)loadError;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfVisibleHelpItemForSectionItem:(id)arg1;
- (void)openHelpItem:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToHelpItem:(id)arg1 deselectImmediately:(BOOL)arg2 animated:(BOOL)arg3;
- (void)showHelpBookInfo;
- (void)showTopicItem:(id)arg1 fromTableView:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateCellSelectionWithScollPosition:(long long)arg1 helpItem:(id)arg2 animated:(BOOL)arg3;
- (void)updateFooterViewLayout;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateWithHelpBookController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end


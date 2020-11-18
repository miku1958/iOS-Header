//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <SearchToShareCore/STSCategoryTitleTableViewCellDelegate-Protocol.h>
#import <SearchToShareCore/UIScrollViewDelegate-Protocol.h>
#import <SearchToShareCore/UITableViewDataSource-Protocol.h>
#import <SearchToShareCore/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, STSCategoryView, STSSearchModel;
@protocol STSCategoryViewControllerDelegate;

@interface STSCategoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, STSCategoryTitleTableViewCellDelegate, UIScrollViewDelegate>
{
    BOOL _isScrolling;
    NSMutableArray *_displayedResults;
    BOOL _sendFeedbackOnViewDidAppear;
    STSSearchModel *_searchModel;
    id<STSCategoryViewControllerDelegate> _selectionDelegate;
    NSArray *_categories;
    NSArray *_recents;
    NSMutableArray *_model;
}

@property (strong, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *model; // @synthesize model=_model;
@property (strong, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property (strong, nonatomic) STSSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property (weak, nonatomic) id<STSCategoryViewControllerDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property (nonatomic) BOOL sendFeedbackOnViewDidAppear; // @synthesize sendFeedbackOnViewDidAppear=_sendFeedbackOnViewDidAppear;
@property (readonly) Class superclass;
@property (strong, nonatomic) STSCategoryView *view; // @dynamic view;

- (void).cxx_destruct;
- (void)_commitClearRecents;
- (void)_reportFeedbackDisplayedResultsDidScroll:(BOOL)arg1;
- (id)_searchResultIdentifierForSuggestion:(id)arg1 recent:(BOOL)arg2;
- (void)clearButton:(id)arg1 pressedForCategoryResult:(id)arg2;
- (void)clearRecents;
- (id)init;
- (void)reload;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sendRankSectionsFeedback;
- (void)sendVisibleResultsFeedback;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)updateContentOffset:(double)arg1;
- (void)updateModel;
- (void)updateRecents:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

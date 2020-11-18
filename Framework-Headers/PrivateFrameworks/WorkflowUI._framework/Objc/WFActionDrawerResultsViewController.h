//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerActionTableViewCellDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerResultsControlling-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateConfigurable-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateRepresentable-Protocol.h>

@class NSString, UILabel, UITableView, WFActionDrawerResults, WFActionDrawerState;
@protocol WFActionDrawerResultsViewControllerDelegate;

@interface WFActionDrawerResultsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerActionTableViewCellDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable, WFActionDrawerResultsControlling>
{
    id<WFActionDrawerResultsViewControllerDelegate> _delegate;
    WFActionDrawerResults *_results;
    NSString *_emptyText;
    UITableView *_tableView;
    UILabel *_emptyLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFActionDrawerResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property (copy, nonatomic) NSString *emptyText; // @synthesize emptyText=_emptyText;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WFActionDrawerResults *results; // @synthesize results=_results;
@property (nonatomic) BOOL scrollsToTop;
@property (readonly, nonatomic) WFActionDrawerState *state;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (void)loadView;
- (BOOL)moveToState:(id)arg1 animated:(BOOL)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollToTop;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setResults:(id)arg1 animated:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateEmptyLabelVisibility;
- (void)viewWillAppear:(BOOL)arg1;

@end

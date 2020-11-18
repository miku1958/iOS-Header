//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateConfigurable-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateRepresentable-Protocol.h>

@class NSString, WFActionDrawerState;

@interface WFActionDrawerAppsDetailViewController : WFActionDrawerCompositeResultsViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable>
{
    BOOL _loading;
    NSString *_bundleIdentifier;
}

@property (readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL loading; // @synthesize loading=_loading;
@property (readonly, nonatomic) WFActionDrawerState *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)detailSectionForSection:(long long)arg1;
- (long long)detailSectionIndexForIndexPath:(long long)arg1;
- (id)initWithCoordinator:(id)arg1 bundleIdentifier:(id)arg2;
- (void)loadView;
- (BOOL)moveToState:(id)arg1 animated:(BOOL)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadViews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

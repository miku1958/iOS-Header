//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSString, UIView, WFWorkflowTypeManagerResultsController;

@interface WFWorkflowTypeManagerViewController : UITableViewController <UIAdaptivePresentationControllerDelegate>
{
    WFWorkflowTypeManagerResultsController *_resultsController;
    CDUnknownBlockType _doneHandler;
    NSString *_workflowType;
    UIView *_headerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType doneHandler; // @synthesize doneHandler=_doneHandler;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (readonly, nonatomic) WFWorkflowTypeManagerResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *workflowType; // @synthesize workflowType=_workflowType;

+ (void)registerRequestHandler;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)done;
- (id)initWithWorkflowType:(id)arg1;
- (void)loadView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class UIBarButtonItem, WFRunWorkflowToolbar;

@protocol WFRunWorkflowToolbarDelegate <NSObject>

@optional
- (void)runToolbarPlayTapped:(WFRunWorkflowToolbar *)arg1;
- (void)runToolbarRedoTapped:(WFRunWorkflowToolbar *)arg1;
- (void)runToolbarShareTapped:(WFRunWorkflowToolbar *)arg1 sender:(UIBarButtonItem *)arg2;
- (void)runToolbarStopTapped:(WFRunWorkflowToolbar *)arg1;
- (void)runToolbarUndoTapped:(WFRunWorkflowToolbar *)arg1;
@end


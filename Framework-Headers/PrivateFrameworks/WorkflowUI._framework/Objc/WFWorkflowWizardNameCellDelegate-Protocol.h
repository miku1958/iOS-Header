//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSString, WFWorkflowWizardNameCell;

@protocol WFWorkflowWizardNameCellDelegate <NSObject>
- (void)workflowWizardNameCell:(WFWorkflowWizardNameCell *)arg1 didUpdateName:(NSString *)arg2;
- (void)workflowWizardNameCellDidSelectEditIcon:(WFWorkflowWizardNameCell *)arg1;

@optional
- (void)workflowWizardNameCellDidFinishEditing:(WFWorkflowWizardNameCell *)arg1;
@end

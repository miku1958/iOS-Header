//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFBaseLibraryWorkflowCell;

@protocol WFBaseLibraryWorkflowCellDelegate <NSObject>

@optional
- (void)workflowCellDidRequestRun:(WFBaseLibraryWorkflowCell *)arg1;
- (void)workflowCellDidRequestStop:(WFBaseLibraryWorkflowCell *)arg1;
@end

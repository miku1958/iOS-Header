//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSError, WFAction, WFContentCollection, WFRunWorkflowToolbar, WFRunWorkflowViewController, WFWorkflowControllerState;

@protocol WFRunWorkflowViewControllerDelegate <NSObject>

@optional
- (BOOL)isDrawerAvailableForWorkflowViewController:(WFRunWorkflowViewController *)arg1;
- (WFRunWorkflowToolbar *)runWorkflowToolbarForWorkflowViewController:(WFRunWorkflowViewController *)arg1;
- (NSError *)workflowViewController:(WFRunWorkflowViewController *)arg1 displayableErrorForError:(NSError *)arg2;
- (BOOL)workflowViewController:(WFRunWorkflowViewController *)arg1 handleUnsupportedEnvironmentForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(WFContentCollection *, NSError *))arg4;
- (BOOL)workflowViewController:(WFRunWorkflowViewController *)arg1 handleUnsupportedUserInterfaceForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(void))arg4;
- (void)workflowViewControllerDidRun:(WFRunWorkflowViewController *)arg1 withOutput:(WFContentCollection *)arg2 error:(NSError *)arg3 cancelled:(BOOL)arg4 continueHandler:(void (^)(void))arg5;
- (void)workflowViewControllerRequestsActionDrawer:(WFRunWorkflowViewController *)arg1;
- (void)workflowViewControllerRequestsDismissal:(WFRunWorkflowViewController *)arg1 withCompletionHandler:(void (^)(void))arg2;
- (void)workflowViewControllerRequestsSettings:(WFRunWorkflowViewController *)arg1;
- (void)workflowViewControllerWillRun:(WFRunWorkflowViewController *)arg1 continueHandler:(void (^)(void))arg2;
@end


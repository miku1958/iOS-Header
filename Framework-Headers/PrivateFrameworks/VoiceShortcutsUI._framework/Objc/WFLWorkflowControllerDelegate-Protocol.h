//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutsUI/NSObject-Protocol.h>

@class NSArray, NSError, WFLAction, WFLWorkflowController;
@protocol WFLActionUserInterface;

@protocol WFLWorkflowControllerDelegate <NSObject>

@optional
- (void)workflowController:(WFLWorkflowController *)arg1 didRunAction:(WFLAction *)arg2;
- (id<WFLActionUserInterface>)workflowController:(WFLWorkflowController *)arg1 userInterfaceForRunningAction:(WFLAction *)arg2;
- (void)workflowController:(WFLWorkflowController *)arg1 willRunAction:(WFLAction *)arg2 withInput:(NSArray *)arg3 proceedHandler:(void (^)(void))arg4;
- (void)workflowControllerDidFinishRunning:(WFLWorkflowController *)arg1 withOutput:(NSArray *)arg2;
- (void)workflowControllerDidStop:(WFLWorkflowController *)arg1 withError:(NSError *)arg2;
- (void)workflowControllerWillRun:(WFLWorkflowController *)arg1;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/NSObject-Protocol.h>

@class WFDialogPresentationManager, WFWorkflowRunningContext;

@protocol WFDialogPresentationManagerDelegate <NSObject>
- (void)presentationManager:(WFDialogPresentationManager *)arg1 cancelExecutionOfWorkflowWithContext:(WFWorkflowRunningContext *)arg2;
- (void)presentationManager:(WFDialogPresentationManager *)arg1 pauseExecutionOfWorkflowWithContext:(WFWorkflowRunningContext *)arg2;
@end


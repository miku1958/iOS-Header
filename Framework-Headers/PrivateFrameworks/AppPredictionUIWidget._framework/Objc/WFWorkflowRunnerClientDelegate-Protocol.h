//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppPredictionUIWidget/NSObject-Protocol.h>

@class NSError, NSProgress, WFWorkflowRunnerClient;

@protocol WFWorkflowRunnerClientDelegate <NSObject>

@optional
- (void)workflowRunnerClient:(WFWorkflowRunnerClient *)arg1 didFinishRunningWorkflowWithError:(NSError *)arg2 cancelled:(BOOL)arg3;
- (void)workflowRunnerClient:(WFWorkflowRunnerClient *)arg1 didStartRunningWorkflowWithProgress:(NSProgress *)arg2;
@end

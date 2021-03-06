//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/WFWorkflowRunnerClientDelegate-Protocol.h>

@class NSString, SFSearchResult, WFSuggestionsWorkflowRunnerClient;
@protocol ATXActionSearchResultExecutionDelegate;

@interface ATXActionSearchResultExecution : NSObject <WFWorkflowRunnerClientDelegate>
{
    SFSearchResult *_searchResult;
    id<ATXActionSearchResultExecutionDelegate> _delegate;
    WFSuggestionsWorkflowRunnerClient *_workflowRunnerClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ATXActionSearchResultExecutionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property (readonly) Class superclass;
@property (strong, nonatomic) WFSuggestionsWorkflowRunnerClient *workflowRunnerClient; // @synthesize workflowRunnerClient=_workflowRunnerClient;

- (void).cxx_destruct;
- (BOOL)_delegateDoesRespond;
- (BOOL)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1;
- (void)_spawnShortcutExecutionWithShortcut:(id)arg1;
- (void)executeShortcut;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(BOOL)arg3;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end


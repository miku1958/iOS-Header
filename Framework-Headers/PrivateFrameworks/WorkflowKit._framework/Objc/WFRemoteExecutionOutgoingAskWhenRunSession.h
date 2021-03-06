//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class WFRemoteExecutionAskWhenRunRequest;

@interface WFRemoteExecutionOutgoingAskWhenRunSession : WFRemoteExecutionSession
{
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, nonatomic) WFRemoteExecutionAskWhenRunRequest *request; // @dynamic request;

- (void).cxx_destruct;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (void)finishWithoutCallingCompletion;
- (void)handleIncomingProtobuf:(id)arg1;
- (void)handleTimeout;
- (id)initWithService:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendToDestinations:(id)arg1 options:(id)arg2;
- (double)timeoutLimitInSeconds;

@end


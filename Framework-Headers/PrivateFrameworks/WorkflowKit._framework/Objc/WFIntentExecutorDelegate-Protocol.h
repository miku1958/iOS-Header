//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class INInteraction, WFIntentExecutor;

@protocol WFIntentExecutorDelegate <NSObject>

@optional
- (void)intentExecutor:(WFIntentExecutor *)arg1 showConfirmationForInteraction:(INInteraction *)arg2 confirmationRequired:(BOOL)arg3 authenticationRequired:(BOOL)arg4 completionHandler:(void (^)(BOOL, NSError *))arg5;
- (void)intentExecutorRequestsContinueInApp:(WFIntentExecutor *)arg1;
@end

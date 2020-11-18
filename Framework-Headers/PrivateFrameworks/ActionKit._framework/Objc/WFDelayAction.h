//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class NSObject, WFAutoIncrementingProgress;
@protocol OS_dispatch_source;

@interface WFDelayAction : WFAction
{
    NSObject<OS_dispatch_source> *_timer;
    WFAutoIncrementingProgress *_delayProgress;
}

@property (strong, nonatomic) WFAutoIncrementingProgress *delayProgress; // @synthesize delayProgress=_delayProgress;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;

- (void).cxx_destruct;
- (void)finishRunningWithError:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

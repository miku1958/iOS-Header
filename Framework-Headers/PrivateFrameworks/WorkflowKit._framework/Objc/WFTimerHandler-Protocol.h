//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class WFTimer;

@protocol WFTimerHandler <NSObject>
- (void)timerDidFire:(WFTimer *)arg1;

@optional
- (BOOL)timerShouldStart:(WFTimer *)arg1;
@end


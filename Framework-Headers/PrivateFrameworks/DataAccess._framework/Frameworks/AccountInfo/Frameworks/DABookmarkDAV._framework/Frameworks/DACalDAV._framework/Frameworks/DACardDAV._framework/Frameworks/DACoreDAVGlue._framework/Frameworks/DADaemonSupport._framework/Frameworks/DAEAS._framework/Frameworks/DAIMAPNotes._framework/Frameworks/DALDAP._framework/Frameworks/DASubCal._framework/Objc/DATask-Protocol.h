//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DASubCal/NSObject-Protocol.h>

@class DATaskManager, NSError;

@protocol DATask <NSObject>
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(NSError *)arg2;
- (void)finishWithError:(NSError *)arg1;
- (void)performTask;

@optional
- (void)requestCancelTaskWithReason:(int)arg1;
- (void)setTaskManager:(DATaskManager *)arg1;
- (BOOL)shouldForceNetworking;
- (BOOL)shouldHoldPowerAssertion;
- (void)startModal;
@end


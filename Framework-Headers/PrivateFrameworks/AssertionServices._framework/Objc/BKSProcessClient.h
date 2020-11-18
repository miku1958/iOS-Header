//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSBaseXPCClient.h>

@class NSObject;
@protocol BKSProcessClientDelegate, OS_dispatch_queue;

@interface BKSProcessClient : BSBaseXPCClient
{
    id<BKSProcessClientDelegate> _delegate;
}

@property (readonly, weak, nonatomic) id<BKSProcessClientDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_queue_handleDebuggingStateChanged:(id)arg1;
- (void)_queue_handleExited:(id)arg1;
- (void)_queue_handleExpirationWarning:(id)arg1;
- (void)_queue_handleSuspendedStateChanged:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)queue_connectionWasInterrupted;
- (void)queue_handleMessage:(id)arg1;

@end


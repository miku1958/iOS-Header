//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequest : NSObject
{
    id _requestInternal;
}

@property (weak, nonatomic) id<SKRequestDelegate> delegate;
@property (copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;

- (void).cxx_destruct;
- (void)_beginBackgroundTask;
- (void)_endBackgroundTask;
- (void)_shutdownRequest;
- (void)_start;
- (void)_startWithMessage:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)init;
- (void)start;

@end

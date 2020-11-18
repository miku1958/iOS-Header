//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCTWaiterManagement-Protocol.h>
#import <XCTest/XCTestExpectationDelegate-Protocol.h>

@class NSArray, NSString, _XCTWaiterImpl;
@protocol OS_dispatch_queue, XCTWaiterDelegate;

@interface XCTWaiter : NSObject <XCTestExpectationDelegate, XCTWaiterManagement>
{
    _XCTWaiterImpl *_internalImplementation;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<XCTWaiterDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *fulfilledExpectations;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isInProgress) BOOL inProgress;
@property (readonly) _XCTWaiterImpl *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly) double timeout;
@property (readonly, copy) NSArray *waitCallStackReturnAddresses;
@property struct __CFRunLoop *waitingRunLoop;

+ (void)handleStalledWaiter:(id)arg1;
+ (CDUnknownBlockType)installWatchdogForWaiter:(id)arg1 timeout:(double)arg2;
+ (void)setStallHandler:(CDUnknownBlockType)arg1;
+ (void)setWatchdogTimeoutSlop:(double)arg1;
+ (void)wait:(double)arg1;
+ (id)waitForActivity:(id)arg1 timeout:(double)arg2 block:(CDUnknownBlockType)arg3;
+ (long long)waitForExpectations:(id)arg1 timeout:(double)arg2;
+ (long long)waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(BOOL)arg3;
+ (double)watchdogTimeoutSlop;
- (void)_queue_computeInitiallyFulfilledExpectations;
- (BOOL)_queue_enforceOrderingWithFulfilledExpectations:(id)arg1;
- (void)_queue_setExpectations:(id)arg1;
- (void)_queue_validateExpectationFulfillmentWithTimeoutState:(BOOL)arg1;
- (void)_validateExpectationFulfillmentWithTimeoutState:(BOOL)arg1;
- (void)cancelPrimitiveWait;
- (void)cancelWaiting;
- (void)dealloc;
- (void)didFulfillExpectation:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)interruptForWaiter:(id)arg1;
- (void)primitiveWait:(double)arg1;
- (long long)result;
- (void)setState:(long long)arg1;
- (void)setWaitCallStackReturnAddresses:(id)arg1;
- (long long)state;
- (long long)waitForExpectations:(id)arg1 timeout:(double)arg2;
- (long long)waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(BOOL)arg3;

@end


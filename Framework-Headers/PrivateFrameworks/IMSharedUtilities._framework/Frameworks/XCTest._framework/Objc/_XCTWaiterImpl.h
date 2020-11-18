//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, XCTWaiterManager;
@protocol OS_dispatch_queue, XCTWaiterDelegate;

@interface _XCTWaiterImpl : NSObject
{
    id<XCTWaiterDelegate> _delegate;
    XCTWaiterManager *_manager;
    NSArray *_waitCallStackReturnAddresses;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSArray *_expectations;
    NSMutableArray *_fulfilledExpectations;
    struct __CFRunLoop *_waitingRunLoop;
    long long _state;
    double _timeout;
    long long _result;
    BOOL _enforceOrderOfFulfillment;
}

@property id<XCTWaiterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property BOOL enforceOrderOfFulfillment; // @synthesize enforceOrderOfFulfillment=_enforceOrderOfFulfillment;
@property (copy, nonatomic) NSArray *expectations; // @synthesize expectations=_expectations;
@property (readonly, nonatomic) NSMutableArray *fulfilledExpectations; // @synthesize fulfilledExpectations=_fulfilledExpectations;
@property XCTWaiterManager *manager; // @synthesize manager=_manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property long long result; // @synthesize result=_result;
@property long long state; // @synthesize state=_state;
@property double timeout; // @synthesize timeout=_timeout;
@property (copy) NSArray *waitCallStackReturnAddresses; // @synthesize waitCallStackReturnAddresses=_waitCallStackReturnAddresses;
@property struct __CFRunLoop *waitingRunLoop; // @synthesize waitingRunLoop=_waitingRunLoop;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSRunLoop, NSString, NSTimer, XCTNSPredicateExpectation;
@protocol OS_dispatch_queue, XCTNSPredicateExpectationObject;

@interface _XCTNSPredicateExpectationImplementation : NSObject
{
    XCTNSPredicateExpectation *_expectation;
    id<XCTNSPredicateExpectationObject> _object;
    NSPredicate *_predicate;
    CDUnknownBlockType _handler;
    NSRunLoop *_timerRunLoop;
    NSTimer *_timer;
    double _pollingInterval;
    NSString *_debugDescription;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasCleanedUp;
    BOOL _isEvaluating;
}

@property (copy) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
@property (copy) CDUnknownBlockType handler;
@property (readonly) id<XCTNSPredicateExpectationObject> object; // @synthesize object=_object;
@property double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property (readonly, copy) NSPredicate *predicate; // @synthesize predicate=_predicate;

- (void)_considerFulfilling;
- (void)_scheduleTimer;
- (BOOL)_shouldFulfillForExpectation:(id)arg1 object:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)cleanup;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 object:(id)arg2 expectation:(id)arg3;
- (void)startPolling;

@end


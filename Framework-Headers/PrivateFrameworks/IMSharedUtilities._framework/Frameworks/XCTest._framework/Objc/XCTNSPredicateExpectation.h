//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/XCTestExpectation.h>

@class NSPredicate, _XCTNSPredicateExpectationImplementation;

@interface XCTNSPredicateExpectation : XCTestExpectation
{
    _XCTNSPredicateExpectationImplementation *_internal;
}

@property (nonatomic) unsigned long long expectedFulfillmentCount; // @dynamic expectedFulfillmentCount;
@property (copy) CDUnknownBlockType handler;
@property (strong) _XCTNSPredicateExpectationImplementation *internal; // @synthesize internal=_internal;
@property (readonly) id object;
@property double pollingInterval;
@property (readonly, copy) NSPredicate *predicate;

- (void).cxx_destruct;
- (void)cleanup;
- (void)considerFulfilling;
- (void)dealloc;
- (id)debugDescription;
- (void)fulfill;
- (id)initWithPredicate:(id)arg1 object:(id)arg2;
- (void)setHasBeenWaitedOn:(BOOL)arg1;

@end

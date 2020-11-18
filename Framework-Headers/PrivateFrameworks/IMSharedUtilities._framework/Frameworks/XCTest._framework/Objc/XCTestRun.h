//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, XCTest, _XCInternalTestRun;

@interface XCTestRun : NSObject
{
    id _internalTestRun;
}

@property (readonly) unsigned long long executionCount;
@property unsigned long long executionCountBeforeCrash;
@property (readonly) unsigned long long failureCount;
@property unsigned long long failureCountBeforeCrash;
@property (readonly) BOOL hasSucceeded;
@property (readonly) _XCInternalTestRun *implementation; // @synthesize implementation=_internalTestRun;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *stopDate;
@property (readonly) XCTest *test;
@property (readonly) unsigned long long testCaseCount;
@property (readonly) double testDuration;
@property (readonly) double totalDuration;
@property (readonly) unsigned long long totalFailureCount;
@property (readonly) unsigned long long unexpectedExceptionCount;
@property unsigned long long unexpectedExceptionCountBeforeCrash;

+ (id)testRunWithTest:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithTest:(id)arg1;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4;
- (void)start;
- (void)stop;

@end


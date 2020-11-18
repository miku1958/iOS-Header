//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/XCTestRun.h>

@class NSArray, NSMutableArray;

@interface XCTestSuiteRun : XCTestRun
{
    NSMutableArray *_testRuns;
}

@property (readonly, copy) NSArray *testRuns;

- (void)addTestRun:(id)arg1;
- (void)dealloc;
- (unsigned long long)executionCount;
- (unsigned long long)failureCount;
- (id)initWithTest:(id)arg1;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4;
- (void)start;
- (void)stop;
- (double)testDuration;
- (unsigned long long)unexpectedExceptionCount;

@end


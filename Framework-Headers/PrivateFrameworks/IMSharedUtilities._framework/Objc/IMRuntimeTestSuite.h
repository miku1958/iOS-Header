//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMRuntimeTest.h>

@class NSArray, NSMutableArray, NSTimer;

@interface IMRuntimeTestSuite : IMRuntimeTest
{
    NSMutableArray *_tests;
    double _testSuiteStartDelay;
    double _testStartDelay;
    NSMutableArray *_runningTests;
    IMRuntimeTest *_currentTest;
    NSTimer *_timer;
}

@property (strong) IMRuntimeTest *currentTest; // @synthesize currentTest=_currentTest;
@property (strong) NSMutableArray *runningTests; // @synthesize runningTests=_runningTests;
@property double testStartDelay; // @synthesize testStartDelay=_testStartDelay;
@property double testSuiteStartDelay; // @synthesize testSuiteStartDelay=_testSuiteStartDelay;
@property (strong) NSArray *tests; // @synthesize tests=_tests;
@property (weak) NSTimer *timer; // @synthesize timer=_timer;

+ (void)runTestsIfNeededWithRepeatCount:(long long)arg1;
+ (void)runTestsIfNeededWithRepeatCount:(long long)arg1 withCount:(long long)arg2;
- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_startNextTest;
- (void)_timerExpired:(id)arg1;
- (void)addTest:(id)arg1;
- (void)currentTestDidFinish;
- (id)init;
- (void)removeTest:(id)arg1;
- (void)startTest;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CAMPerformanceTestHarness : NSObject
{
    NSString *_testName;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic, getter=isRunningTest) BOOL runningTest;
@property (readonly, copy, nonatomic) NSString *testName; // @synthesize testName=_testName;

- (void).cxx_destruct;
- (void)failedTestwithReason:(id)arg1;
- (id)initWithTestName:(id)arg1;
- (void)startSubtestWithName:(id)arg1;
- (void)startTesting;
- (void)stopSubtestWithName:(id)arg1;
- (void)stopTesting;

@end

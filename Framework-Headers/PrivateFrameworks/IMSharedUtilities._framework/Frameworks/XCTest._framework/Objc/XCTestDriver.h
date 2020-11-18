//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCDebugLogDelegate-Protocol.h>
#import <XCTest/XCTASDebugLogDelegate-Protocol.h>

@class NSMutableArray, NSString, XCTestConfiguration;
@protocol OS_dispatch_queue;

@interface XCTestDriver : NSObject <XCDebugLogDelegate, XCTASDebugLogDelegate>
{
    XCTestConfiguration *_testConfiguration;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_debugMessageBuffer;
    int _debugMessageBufferOverflow;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong) NSMutableArray *debugMessageBuffer; // @synthesize debugMessageBuffer=_debugMessageBuffer;
@property int debugMessageBufferOverflow; // @synthesize debugMessageBufferOverflow=_debugMessageBufferOverflow;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (readonly) XCTestConfiguration *testConfiguration; // @synthesize testConfiguration=_testConfiguration;

+ (double)IDEConnectionTimeout;
+ (void)initialize;
+ (id)sharedTestDriver;
- (void).cxx_destruct;
- (void)_queue_flushDebugMessageBufferWithBlock:(CDUnknownBlockType)arg1;
- (id)_readyIDESession:(id *)arg1;
- (id)_transportForIDESession:(id *)arg1;
- (id)initWithTestConfiguration:(id)arg1;
- (void)logDebugMessage:(id)arg1;
- (void)logStartupInfo;
- (void)printBufferedDebugMessages;
- (void)reportStallOnMainThreadInTestCase:(id)arg1 method:(id)arg2 file:(id)arg3 line:(unsigned long long)arg4;
- (void)runTestConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runTestSuite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)runTestsAndReturnError:(id *)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WBSCyclerTestSuite, WBSCyclerTestTarget;

@interface WBSCyclerTestRunner : NSObject
{
    BOOL _stopRequested;
    NSMutableArray *_pendingRequestQueue;
    NSMutableArray *_pendingRequestCompletionHandlerQueue;
    BOOL _running;
    id<WBSCyclerTestSuite> _testSuite;
    id<WBSCyclerTestTarget> _target;
}

@property (readonly, nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property (readonly, nonatomic) id<WBSCyclerTestTarget> target; // @synthesize target=_target;
@property (readonly, nonatomic) id<WBSCyclerTestSuite> testSuite; // @synthesize testSuite=_testSuite;

- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_handleNextPendingRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performNextIterationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_stop;
- (void)dealloc;
- (void)handleRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithTestSuite:(id)arg1 target:(id)arg2;
- (void)requestStop;
- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;

@end


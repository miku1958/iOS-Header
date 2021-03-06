//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBPPTOperation.h>

@interface SBPPTBlockOperation : SBPPTOperation
{
    double _timeoutInterval;
    CDUnknownBlockType _timeoutBlock;
    unsigned long long _state;
    CDUnknownBlockType _block;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (weak, nonatomic) CDUnknownBlockType timeoutBlock; // @synthesize timeoutBlock=_timeoutBlock;
@property (nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelAndFailTestWithReason:(id)arg1;
- (void)finish;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)start;

@end


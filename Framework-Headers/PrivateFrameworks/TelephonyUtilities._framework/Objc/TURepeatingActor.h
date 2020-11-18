//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface TURepeatingActor : NSObject
{
    BOOL _running;
    BOOL _stopped;
    BOOL _currentlyPerformingAction;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _iterationsRemaining;
    double _pauseDuration;
    CDUnknownBlockType _action;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _attemptNextIterationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property (weak, nonatomic) CDUnknownBlockType attemptNextIterationBlock; // @synthesize attemptNextIterationBlock=_attemptNextIterationBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (nonatomic, getter=isCurrentlyPerformingAction) BOOL currentlyPerformingAction; // @synthesize currentlyPerformingAction=_currentlyPerformingAction;
@property (nonatomic) unsigned long long iterationsRemaining; // @synthesize iterationsRemaining=_iterationsRemaining;
@property (nonatomic) double pauseDuration; // @synthesize pauseDuration=_pauseDuration;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property (nonatomic, getter=isStopped) BOOL stopped; // @synthesize stopped=_stopped;

- (void).cxx_destruct;
- (void)_attemptNextIteration;
- (void)_completeWithDidFinish:(BOOL)arg1;
- (BOOL)_hasIterationsRemaining;
- (void)_stopWithDidFinish:(BOOL)arg1;
- (void)beginRepeatingAction:(CDUnknownBlockType)arg1 iterations:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginRepeatingAction:(CDUnknownBlockType)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (void)stop;

@end


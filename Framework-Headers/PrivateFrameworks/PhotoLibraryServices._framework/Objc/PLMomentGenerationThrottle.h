//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PLMomentGenerationThrottleTimeProvider;

@interface PLMomentGenerationThrottle : NSObject
{
    BOOL _canDelayAnyQOS;
    CDUnknownBlockType _targetBlock;
    NSString *_name;
    id<PLMomentGenerationThrottleTimeProvider> _timeProvider;
    BOOL _singleThreaded;
    struct atomic_flag _shouldRunAgain;
    struct atomic_flag _isExecutingOrConsideringExecution;
    double _lastRunDuration;
    double _lastRunEndTime;
    double _nextExpectedRun;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 canDelayAnyQOS:(BOOL)arg2 singleThreadedMode:(BOOL)arg3 timeProvider:(id)arg4 target:(CDUnknownBlockType)arg5;
- (BOOL)isIdle;
- (void)update;

@end

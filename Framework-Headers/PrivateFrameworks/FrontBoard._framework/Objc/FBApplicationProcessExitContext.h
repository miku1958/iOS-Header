//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBProcessState;

@interface FBApplicationProcessExitContext : NSObject
{
    FBProcessState *_stateBeforeExiting;
    unsigned long long _launchdExitReason;
    unsigned long long _exitReason;
    long long _terminationReason;
}

@property (readonly, nonatomic) int exitCode;
@property (readonly, nonatomic) unsigned long long exitReason; // @synthesize exitReason=_exitReason;
@property (readonly, nonatomic) long long exitStatus;
@property (readonly, nonatomic) BOOL exitedNormally;
@property (readonly, copy, nonatomic) FBProcessState *stateBeforeExiting; // @synthesize stateBeforeExiting=_stateBeforeExiting;
@property (readonly, nonatomic) long long terminationReason; // @synthesize terminationReason=_terminationReason;
@property (readonly, nonatomic) int terminationSignal;

+ (id)descriptionForExitReason:(unsigned long long)arg1;
+ (unsigned long long)exitReasonForLaunchdExitReason:(unsigned long long)arg1;
- (BOOL)consideredJetsam;
- (void)dealloc;
- (id)description;
- (BOOL)fairPlayFailure;
- (id)initWithExitReason:(unsigned long long)arg1 terminationReason:(long long)arg2 state:(id)arg3;

@end


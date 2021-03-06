//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInvocation, NSTimer;
@protocol UIRepeatedActionDelegate;

__attribute__((visibility("hidden")))
@interface UIRepeatedAction : NSObject
{
    BOOL _didCompletePreInvocationDelay;
    BOOL _didCompleteInvocationDelay;
    BOOL _disableRepeat;
    BOOL _skipInitialFire;
    double _preInvocationDelay;
    double _invocationDelay;
    double _repeatedDelay;
    NSInvocation *_invocation;
    id _invocationArgument;
    NSTimer *_timer;
    NSObject<UIRepeatedActionDelegate> *_delegate;
}

@property (weak, nonatomic) NSObject<UIRepeatedActionDelegate> *delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL disableRepeat; // @synthesize disableRepeat=_disableRepeat;
@property (strong, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property (strong, nonatomic) id invocationArgument; // @synthesize invocationArgument=_invocationArgument;
@property (nonatomic) double invocationDelay; // @synthesize invocationDelay=_invocationDelay;
@property (nonatomic) double preInvocationDelay; // @synthesize preInvocationDelay=_preInvocationDelay;
@property (nonatomic) double repeatedDelay; // @synthesize repeatedDelay=_repeatedDelay;
@property (nonatomic) BOOL skipInitialFire; // @synthesize skipInitialFire=_skipInitialFire;
@property (strong, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

+ (id)_invocationForTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void).cxx_destruct;
- (void)_adjustInvocationForPhase:(unsigned long long)arg1;
- (void)_invocationTimerFire;
- (void)_preInvocationTimerFire;
- (void)_repeatedTimerFire;
- (void)dealloc;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)invalidate;
- (BOOL)invoke;
- (void)reset;
- (void)schedule;
- (void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end


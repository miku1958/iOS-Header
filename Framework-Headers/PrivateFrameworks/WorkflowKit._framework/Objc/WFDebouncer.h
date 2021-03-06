//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WFDebouncer : NSObject
{
    double _delay;
    double _maximumDelay;
    id _userInfo;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_targetTable;
    NSObject<OS_dispatch_source> *_delayTimer;
    NSObject<OS_dispatch_source> *_maximumDelayTimer;
}

@property (readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *delayTimer; // @synthesize delayTimer=_delayTimer;
@property (readonly, nonatomic) double maximumDelay; // @synthesize maximumDelay=_maximumDelay;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *maximumDelayTimer; // @synthesize maximumDelayTimer=_maximumDelayTimer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSMapTable *targetTable; // @synthesize targetTable=_targetTable;
@property (readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)fire;
- (id)initWithDelay:(double)arg1 maximumDelay:(double)arg2 queue:(id)arg3;
- (id)initWithDelay:(double)arg1 maximumDelay:(double)arg2 queue:(id)arg3 userInfo:(id)arg4;
- (id)initWithDelay:(double)arg1 queue:(id)arg2;
- (void)poke;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)resetDelayTimer;
- (void)resetMaximumDelayTimer;
- (void)restartDelayTimer;
- (void)startMaximumDelayTimerIfNecessary;

@end


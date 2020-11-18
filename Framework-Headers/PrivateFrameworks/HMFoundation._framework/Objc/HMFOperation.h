//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFTimerDelegate-Protocol.h>

@class HMFActivity, HMFTimer, HMFUnfairLock, NSDate, NSError, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMFOperation : NSOperation <HMFLogging, HMFTimerDelegate>
{
    BOOL _executing;
    BOOL _finished;
    NSError *_error;
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFActivity *_activity;
    NSUUID *_identifier;
    HMFTimer *_timer;
}

@property (strong) HMFActivity *activity; // @synthesize activity=_activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSDate *timeoutDate;
@property (strong) HMFTimer *timer; // @synthesize timer=_timer;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (void)finish;
- (id)init;
- (id)initWithTimeout:(double)arg1;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)logIdentifier;
- (void)setQualityOfService:(long long)arg1;
- (void)start;
- (void)timerDidFire:(id)arg1;

@end


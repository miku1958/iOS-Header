//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSString;

@interface HMFOperationBudget : HMFObject <HMFLogging, HMFTimerDelegate>
{
    struct os_unfair_recursive_lock_s _lock;
    HMFTimer *_timer;
    unsigned long long _value;
    unsigned long long _limit;
    struct _HMFRate _rate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly, getter=isFull) BOOL full;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property (readonly, nonatomic) struct _HMFRate rate; // @synthesize rate=_rate;
@property (readonly) Class superclass;
@property (readonly) unsigned long long value; // @synthesize value=_value;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;
- (void).cxx_destruct;
- (BOOL)decrement;
- (BOOL)decrementByCount:(unsigned long long)arg1;
- (id)init;
- (id)initWithLimit:(unsigned long long)arg1 rate:(struct _HMFRate)arg2;
- (void)reset;
- (void)timerDidFire:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ACRateLimiter : NSObject
{
    BOOL _isVacuumInProgress;
    unsigned long long _maximum;
    double _timeInterval;
    NSObject<OS_dispatch_queue> *_instanceQueue;
    NSObject<OS_dispatch_queue> *_vacuumQueue;
    NSMutableDictionary *_keyToSimpleRateLimiter;
    double _vacuumTimeInterval;
    NSDate *_nextVacuumDate;
}

@property (readonly) NSObject<OS_dispatch_queue> *instanceQueue; // @synthesize instanceQueue=_instanceQueue;
@property BOOL isVacuumInProgress; // @synthesize isVacuumInProgress=_isVacuumInProgress;
@property (strong) NSMutableDictionary *keyToSimpleRateLimiter; // @synthesize keyToSimpleRateLimiter=_keyToSimpleRateLimiter;
@property (readonly) unsigned long long maximum; // @synthesize maximum=_maximum;
@property (strong) NSDate *nextVacuumDate; // @synthesize nextVacuumDate=_nextVacuumDate;
@property (readonly) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property (readonly) NSObject<OS_dispatch_queue> *vacuumQueue; // @synthesize vacuumQueue=_vacuumQueue;
@property (readonly) double vacuumTimeInterval; // @synthesize vacuumTimeInterval=_vacuumTimeInterval;

- (void).cxx_destruct;
- (void)_vacuumQueue_vacuum;
- (BOOL)_vacuumQueue_vacuumKey:(id)arg1;
- (id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (BOOL)reservePerformActionForKey:(id)arg1;
- (id)simpleRateLimiterForKey:(id)arg1;
- (void)vacuumIfNeeded;

@end


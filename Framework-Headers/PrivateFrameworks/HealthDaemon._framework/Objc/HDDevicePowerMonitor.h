//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUPowerSourceMonitor, HKObserverSet;
@protocol OS_dispatch_queue;

@interface HDDevicePowerMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    CUPowerSourceMonitor *_monitor;
    BOOL _isCharging;
}

@property (readonly) BOOL primarySourceIsCharging;

- (void).cxx_destruct;
- (void)_queue_updatePrimaryPowerSourceState:(int)arg1;
- (void)addDevicePowerObserver:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)powerSource:(id)arg1 changed:(unsigned int)arg2;
- (void)powerSourceFound:(id)arg1;
- (void)powerSourceLost:(id)arg1;
- (void)removeDevicePowerObserver:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SYCountedSemaphore : NSObject
{
    _Atomic unsigned int _sem_port;
    _Atomic int _count;
    _Atomic int _signals;
    _Atomic BOOL _invalidated;
}

- (void)_ensureSemaphore;
- (void)_signalSemaphore;
- (BOOL)_waitSemaphoreWithTimeout:(double)arg1;
- (id)init;
- (id)initWithCount:(long long)arg1;
- (void)invalidate;
- (void)signal;
- (BOOL)waitWithTimeout:(double)arg1;

@end


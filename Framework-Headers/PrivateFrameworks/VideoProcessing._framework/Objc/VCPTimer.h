//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VCPTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    _Atomic BOOL _active;
    BOOL _isOneShot;
}

+ (id)timerWithInterval:(unsigned long long)arg1 unit:(unsigned long long)arg2 oneShot:(BOOL)arg3 andBlock:(CDUnknownBlockType)arg4;
+ (id)timerWithIntervalSeconds:(unsigned long long)arg1 isOneShot:(BOOL)arg2 andBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destroy;
- (id)initWithIntervalNanoseconds:(unsigned long long)arg1 isOneShot:(BOOL)arg2 andBlock:(CDUnknownBlockType)arg3;

@end


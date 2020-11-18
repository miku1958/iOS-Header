//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface MSVTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
}

+ (id)timerWithInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithInterval:(double)arg1 repeats:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithInterval:(double)arg1 repeats:(BOOL)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithInterval:(double)arg1 repeats:(BOOL)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)invalidate;

@end


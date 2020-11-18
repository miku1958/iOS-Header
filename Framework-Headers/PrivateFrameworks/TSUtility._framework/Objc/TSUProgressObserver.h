//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TSUProgressObserver : NSObject
{
    double mValueInterval;
    NSObject<OS_dispatch_queue> *mQueue;
    CDUnknownBlockType mHandler;
    double mLastHandledValue;
    BOOL mLastHandledIndeterminate;
}

@property (readonly, nonatomic) double valueInterval; // @synthesize valueInterval=mValueInterval;

- (void)dealloc;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(BOOL)arg3;
- (id)init;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end


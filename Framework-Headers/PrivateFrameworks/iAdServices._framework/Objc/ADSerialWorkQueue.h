//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADSerialWorkQueue : NSObject
{
}

+ (unsigned long long)addCancellableDelayedOperation:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addDelayedOperation:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addOperation:(CDUnknownBlockType)arg1;
+ (void)cancelDelayedOperation:(unsigned long long)arg1;
+ (void)initialize;
+ (id)primaryQueue;
+ (void)releaseCancellableOperation:(unsigned long long)arg1;

@end


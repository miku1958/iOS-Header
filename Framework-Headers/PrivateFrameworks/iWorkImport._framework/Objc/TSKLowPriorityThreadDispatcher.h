//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKThreadDispatcher.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher
{
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _suspendCount;
}

@property (readonly, getter=isSuspended) BOOL suspended;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLowPriorityDispatcher;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)p_dispatchQueue;
- (oneway void)release;
- (void)resume;
- (id)retain;
- (unsigned long long)retainCount;
- (void)suspend;

@end


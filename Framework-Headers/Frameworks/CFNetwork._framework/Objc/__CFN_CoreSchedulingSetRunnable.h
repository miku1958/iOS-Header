//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface __CFN_CoreSchedulingSetRunnable : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sem;
    CDUnknownBlockType _setup;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_tid;
    struct __CFRunLoop *_rl;
    long long _performCount;
    struct __CFRunLoopSource *_pinnedSource;
    long long _count[5];
}

+ (void)_run:(id)arg1;
- (void)dealloc;

@end

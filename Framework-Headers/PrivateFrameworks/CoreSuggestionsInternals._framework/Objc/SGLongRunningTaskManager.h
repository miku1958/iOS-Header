//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface SGLongRunningTaskManager : NSObject
{
    NSHashTable *_tasks;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)task;
- (id)taskWithDeadline:(double)arg1;
- (void)tellCurrentTasksToDefer;
- (void)unregister:(id)arg1;

@end


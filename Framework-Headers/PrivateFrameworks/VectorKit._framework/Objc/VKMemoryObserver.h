//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VKMemoryObserver : NSObject
{
    struct _geo_weak_ptr<id> {
        id _p;
    } _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_receivedMemoryNotification;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 taskContext:(const struct TaskContext *)arg3;
- (void)triggerMemoryNotification:(BOOL)arg1;

@end


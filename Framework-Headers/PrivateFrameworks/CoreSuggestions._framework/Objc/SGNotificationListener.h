//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGNotificationListener : NSObject
{
    CDUnknownBlockType _callback;
    struct __CFString *_notification;
    struct _opaque_pthread_mutex_t _lock;
}

- (void).cxx_destruct;
- (void)_notify;
- (void)dealloc;
- (id)initWithNotification:(struct __CFString *)arg1 callback:(CDUnknownBlockType)arg2;
- (BOOL)unsubscribe;

@end

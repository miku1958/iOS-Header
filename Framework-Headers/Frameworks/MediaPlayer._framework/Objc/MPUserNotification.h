//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPUserNotification : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackInvocationQueue;
    CDUnknownBlockType _willShowNotificationHandler;
    id strongSelf;
    BOOL _isShowing;
    struct __CFRunLoopSource *_runLoopSource;
    NSMutableArray *_showingCompletionHandlers;
    struct __CFUserNotification *_cfUserNotification;
}

@property (readonly, nonatomic) struct __CFUserNotification *cfUserNotification; // @synthesize cfUserNotification=_cfUserNotification;
@property (copy, nonatomic) CDUnknownBlockType willShowNotificationHandler;

+ (void)_setUserNotification:(id)arg1 forCFUserNotification:(struct __CFUserNotification *)arg2;
+ (id)_userNotificationConversionAccessQueue;
+ (id)_userNotificationForCFUserNotification:(struct __CFUserNotification *)arg1;
- (void).cxx_destruct;
- (void)_cancelSynchronously:(BOOL)arg1;
- (void)_didReceiveResponseWithFlags:(unsigned long long)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithCFUserNotification:(struct __CFUserNotification *)arg1;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;

@end


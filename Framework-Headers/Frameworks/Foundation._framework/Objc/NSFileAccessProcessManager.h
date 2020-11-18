//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, BKSProcessAssertion, NSArray;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSFileAccessProcessManager : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _suspensionHandler;
    NSArray *_urls;
    BKSApplicationStateMonitor *_monitor;
    BKSProcessAssertion *_assertion;
    int _pendingMessageCount;
}

@property (copy) NSArray *URLs;
@property (copy) CDUnknownBlockType suspensionHandler;

+ (BOOL)needToManageConnection:(id)arg1 forURLs:(id)arg2;
- (void)_ensureMonitor;
- (void)allowSuspension;
- (void)dealloc;
- (id)initWithClient:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)killProcessWithMessage:(id)arg1;
- (void)preventSuspensionWithActivityName:(id)arg1;
- (void)safelySendMessageWithReplyUsingBlock:(CDUnknownBlockType)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface AXSupportDefaultsObserver : NSObject
{
    NSUserDefaults *_axDomain;
    NSMutableSet *_observedPrefs;
    NSMutableArray *_actions;
    NSMutableDictionary *_actionLastNotifications;
    NSObject<OS_dispatch_queue> *_lastNotificationsQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObservingPreference:(struct __CFString *)arg1 andBroadcastDarwinNotification:(struct __CFString *)arg2;
- (void)startObservingPreference:(struct __CFString *)arg1 andPerformBlock:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol OS_os_log;

@interface HKObserverSet : NSObject
{
    NSMapTable *_observerMap;
    NSString *_name;
    NSObject<OS_os_log> *_category;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)_notifyObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 loggingCategory:(id)arg2;
- (void)notifyObservers:(CDUnknownBlockType)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNotificationCenter;

@interface CAMPriorityNotificationCenter : NSObject
{
    NSNotificationCenter *__notificationCenter;
    NSMutableDictionary *__observersByNameHighPriority;
    NSMutableDictionary *__observersByNameNormalPriority;
}

@property (readonly, strong, nonatomic) NSNotificationCenter *_notificationCenter; // @synthesize _notificationCenter=__notificationCenter;
@property (readonly, strong, nonatomic) NSMutableDictionary *_observersByNameHighPriority; // @synthesize _observersByNameHighPriority=__observersByNameHighPriority;
@property (readonly, strong, nonatomic) NSMutableDictionary *_observersByNameNormalPriority; // @synthesize _observersByNameNormalPriority=__observersByNameNormalPriority;

+ (id)defaultCenter;
- (void).cxx_destruct;
- (id)_allSubscriptions;
- (id)_entriesByName:(id)arg1 forPriority:(unsigned long long)arg2 creatingEmptyIfNeeded:(BOOL)arg3;
- (void)_notificationReceiver:(id)arg1;
- (id)_observersForPriority:(unsigned long long)arg1;
- (void)_postNotification:(id)arg1 forEntries:(id)arg2;
- (void)_removeObserver:(id)arg1 fromObserversByName:(id)arg2;
- (void)addObserver:(id)arg1 priority:(unsigned long long)arg2 selector:(SEL)arg3 name:(id)arg4 object:(id)arg5;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end

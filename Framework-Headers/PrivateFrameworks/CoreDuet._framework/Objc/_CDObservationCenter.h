//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface _CDObservationCenter : NSObject
{
    NSMapTable *_senderToNotificationObservers;
    NSMapTable *_senderToNotificationObserverObservers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingSelector:(SEL)arg5;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4;
- (id)init;
- (unsigned long long)observerCountOnName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2;
- (void)removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3;
- (void)removeObserverChangesObserver:(id)arg1 onName:(id)arg2;

@end


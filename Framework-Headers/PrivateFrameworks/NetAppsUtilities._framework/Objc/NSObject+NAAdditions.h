//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (NAAdditions)
- (void)_na_addNotificationObserverProxy:(id)arg1;
- (void)_na_removeNotificationObserverProxy:(id)arg1;
- (id)na_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)na_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)na_associatedObjectForDescriptor:(const CDStruct_b9c9288f *)arg1;
- (void)na_removeNotificationBlockObserver:(id)arg1;
- (void)na_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const CDStruct_b9c9288f *)arg2;
@end

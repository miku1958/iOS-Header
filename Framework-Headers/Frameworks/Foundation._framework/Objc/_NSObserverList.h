//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSObserverList : NSObject
{
    id _owner;
    id _observers;
    _Atomic unsigned int _observerCount;
    struct os_unfair_lock_s _observersLock;
}

- (void).cxx_destruct;
- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)finishObserving;
- (id)init;
- (void)removeObservation:(id)arg1;

@end

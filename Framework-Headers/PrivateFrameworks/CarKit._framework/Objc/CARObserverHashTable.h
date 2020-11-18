//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, Protocol;
@protocol OS_dispatch_queue;

@interface CARObserverHashTable : NSObject
{
    Protocol *_protocol;
    NSHashTable *_observers;
    struct os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (readonly) BOOL hasObservers;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithProtocol:(id)arg1;
- (id)initWithProtocol:(id)arg1 callbackQueue:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObserver:(id)arg1;

@end

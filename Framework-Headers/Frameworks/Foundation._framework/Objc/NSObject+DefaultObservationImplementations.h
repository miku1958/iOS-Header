//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (DefaultObservationImplementations)
- (void)_destroyObserverList;
- (BOOL)_isToManyChangeInformation;
- (id *)_observerStorage;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (BOOL)_overrideUseFastBlockObservers;
- (void)_receiveBox:(id)arg1;
- (id)addChainedObservers:(id)arg1;
- (id)addObservationTransformer:(CDUnknownBlockType)arg1;
- (id)addObserver:(id)arg1;
- (id)addObserverBlock:(CDUnknownBlockType)arg1;
- (void)finishObserving;
- (void)receiveObservedError:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(id)arg1;
@end


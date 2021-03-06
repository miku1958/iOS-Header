//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObservation.h>

@class NSObject;
@protocol NSObservable, NSObserver;

__attribute__((visibility("hidden")))
@interface _NSConcreteObservation : NSObservation
{
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)finishObserving;
- (id)initWithObservable:(id)arg1 observer:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)remove;

@end


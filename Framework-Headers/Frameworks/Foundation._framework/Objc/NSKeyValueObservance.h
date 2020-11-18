//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSWeakCallback.h>

@class NSKeyValueProperty, NSObject;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservance : NSWeakCallback
{
    int _retainCountMinusOne;
    NSObject *_observer;
    NSKeyValueProperty *_property;
    unsigned long long _options;
    void *_context;
    NSObject *_originalObservable;
    BOOL _cachedIsShareable;
}

- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4 originalObservable:(id)arg5;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

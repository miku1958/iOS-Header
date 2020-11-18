//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSKeyValueProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservance : NSObject
{
    NSObject *_observer;
    NSKeyValueProperty *_property;
    void *_context;
    NSObject *_originalObservable;
    unsigned int _options:6;
    unsigned int _cachedIsShareable:1;
    unsigned int _isInternalObservationHelper:1;
}

- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4 originalObservable:(id)arg5;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

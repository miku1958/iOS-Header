//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNObserver;

__attribute__((visibility("hidden")))
@interface _CNKeyValueObserverHandler : NSObject
{
    id _object;
    NSString *_keyPath;
    id<CNObserver> _observer;
}

- (void)dealloc;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 observer:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObservingWithOptions:(unsigned long long)arg1;
- (void)stopObserving;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference;

@interface AVWeakKeyValueObserverProxy : NSObject
{
    AVWeakReference *_weakReferenceToObserver;
}

- (void)dealloc;
- (id)initWithWeakReferenceToObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

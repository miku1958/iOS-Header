//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetAppsUtilitiesUI/_NAUIObserverProxy.h>

@class NSString;

@interface _NAUIKeyValueObserverProxy : _NAUIObserverProxy
{
    BOOL _isObserving;
    CDUnknownBlockType _observerBlock;
    id _observedObject;
    NSString *_keyPath;
}

@property (readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property (readonly, weak, nonatomic) id observedObject; // @synthesize observedObject=_observedObject;
@property (readonly, copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;

- (void).cxx_destruct;
- (id)initWithWeakObserver:(id)arg1 observedObject:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 observerBlock:(CDUnknownBlockType)arg5;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end


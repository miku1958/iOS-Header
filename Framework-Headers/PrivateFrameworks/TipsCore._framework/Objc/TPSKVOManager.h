//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPSKVOManager : NSObject
{
    id _observer;
    struct __CFDictionary *_KVODictionary;
}

@property (nonatomic) struct __CFDictionary *KVODictionary; // @synthesize KVODictionary=_KVODictionary;
@property (weak, nonatomic) id observer; // @synthesize observer=_observer;

- (void).cxx_destruct;
- (void)addKVOObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeAllKVOObjects;
- (void)removeKVOForObject:(id)arg1;
- (void)removeKVOObject:(id)arg1 forKeyPath:(id)arg2;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface TSUObserverNotifier : NSObject
{
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)notifyObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;

@end

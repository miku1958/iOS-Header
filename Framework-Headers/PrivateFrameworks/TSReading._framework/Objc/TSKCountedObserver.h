//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSUWeakReference;

@interface TSKCountedObserver : NSObject
{
    TSUWeakReference *mWeakObserver;
    unsigned long long mCount;
}

- (void)dealloc;
- (unsigned long long)decrementCount;
- (unsigned long long)incrementCount;
- (id)initWithObserver:(id)arg1;
- (id)observer;

@end

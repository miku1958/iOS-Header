//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUProgress.h>

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUProgressGroup : TSUProgress
{
    NSArray *_children;
    NSArray *_childrenProgressObservers;
    NSObject<OS_dispatch_queue> *_childrenProgressObserversQueue;
}

- (void).cxx_destruct;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initForSubclass;
- (id)initWithChildren:(id)arg1;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (void)p_updateChildrenProgressObservers;
- (void)removeProgressObserver:(id)arg1;
- (double)value;

@end


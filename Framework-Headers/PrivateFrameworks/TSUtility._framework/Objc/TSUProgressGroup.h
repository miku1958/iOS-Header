//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUProgress.h>

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSUProgressGroup : TSUProgress
{
    NSArray *mChildren;
    NSArray *mChildrenProgressObservers;
    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;
}

- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (void)p_updateChildrenProgressObservers;
- (void)removeProgressObserver:(id)arg1;
- (double)value;

@end

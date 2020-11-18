//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUProgress.h>

@class NSObject, TSUProgressContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUProgressContextProgress : TSUProgress
{
    TSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    BOOL hasAddedProgressContextObserver;
}

- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithProgressContext:(id)arg1;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (void)p_progressDidChange:(id)arg1;
- (void)p_updateProgressContextObserver;
- (void)removeProgressObserver:(id)arg1;
- (double)value;

@end


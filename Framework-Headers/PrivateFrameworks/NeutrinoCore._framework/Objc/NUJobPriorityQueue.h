//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NUJobQueue;
@protocol OS_dispatch_queue;

@interface NUJobPriorityQueue : NSObject
{
    NSMutableArray *_jobs;
    BOOL _needSort;
    NUJobQueue *_owner;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    BOOL _isRunning;
    NSString *_name;
}

@property (readonly) long long count;
@property (readonly) NSString *name; // @synthesize name=_name;

- (void).cxx_destruct;
- (void)_addJob:(id)arg1;
- (id)_popJob;
- (BOOL)_removeJob:(id)arg1;
- (void)_run;
- (BOOL)_runNextJob;
- (void)_sort;
- (void)_sortIfNeeded;
- (void)_startRunning;
- (void)addJob:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned int)arg3;
- (id)popJob;
- (BOOL)removeJob:(id)arg1;
- (BOOL)start;

@end


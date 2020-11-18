//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODataURLSession, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEODataURLSessionTaskQueue : NSObject
{
    GEODataURLSession *_session;
    NSMutableArray *_tasks;
    NSObject<OS_dispatch_queue> *_isolation;
    unsigned long long _inflightTaskCount;
    unsigned long long _maximumInflightTaskCount;
}

@property (readonly, weak, nonatomic) GEODataURLSession *session; // @synthesize session=_session;

- (void).cxx_destruct;
- (BOOL)_startNextTask;
- (void)_startNextTaskIfCapacityAllows;
- (void)enqueueTask:(id)arg1;
- (id)init;
- (id)initWithSession:(id)arg1 isolationQueue:(id)arg2;
- (BOOL)removeTask:(id)arg1;
- (void)setMaximumInflightTaskCount:(unsigned long long)arg1;
- (void)taskDidComplete:(id)arg1;

@end

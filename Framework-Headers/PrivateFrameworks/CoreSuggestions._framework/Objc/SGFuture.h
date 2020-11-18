//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol OS_dispatch_queue;

@interface SGFuture : NSObject
{
    NSObject *_result;
    NSError *_error;
    struct _opaque_pthread_mutex_t _lock;
    NSObject<OS_dispatch_queue> *_callbacks;
    BOOL _isComplete;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, nonatomic) BOOL isComplete; // @synthesize isComplete=_isComplete;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)futureForObject:(id)arg1 withKey:(void *)arg2 onCreate:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (BOOL)_finishWithResult:(id)arg1 orError:(id)arg2;
- (void)dealloc;
- (BOOL)fail:(id)arg1;
- (id)init;
- (BOOL)succeed:(id)arg1;
- (id)wait;
- (void)wait:(CDUnknownBlockType)arg1;

@end


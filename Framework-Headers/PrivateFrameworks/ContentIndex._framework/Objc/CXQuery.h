//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CXIndex, NSArray;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CXQuery : NSObject
{
    BOOL _started;
    BOOL _complete;
    BOOL _canceled;
    BOOL _waiting;
    CXIndex *_index;
    struct __SIQuery *_siQuery;
    struct __SIResultQueue *_resultQueue;
    struct __SIJobRef *_job;
    CDStruct_4e0944f1 *_batch;
    long long _batchOffset;
    NSArray *_batchValues;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (readonly, nonatomic) CDStruct_4e0944f1 *batch; // @synthesize batch=_batch;
@property (readonly, nonatomic) long long batchOffset; // @synthesize batchOffset=_batchOffset;
@property (readonly, nonatomic) NSArray *batchValues; // @synthesize batchValues=_batchValues;
@property (readonly, nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
@property (readonly, nonatomic) BOOL complete; // @synthesize complete=_complete;
@property (readonly, nonatomic) CXIndex *index; // @synthesize index=_index;
@property (readonly, nonatomic) struct __SIJobRef *job; // @synthesize job=_job;
@property (readonly, nonatomic) struct __SIResultQueue *resultQueue; // @synthesize resultQueue=_resultQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property (readonly, nonatomic) struct __SIQuery *siQuery; // @synthesize siQuery=_siQuery;
@property (readonly, nonatomic) BOOL started; // @synthesize started=_started;
@property (readonly, nonatomic) BOOL waiting; // @synthesize waiting=_waiting;

+ (void)initialize;
- (void)cancel;
- (void)dealloc;
- (BOOL)findDocuments:(unsigned int *)arg1 docNames:(id *)arg2 valueLists:(id *)arg3 maxCount:(unsigned int)arg4 timeOut:(double)arg5 foundCount:(unsigned int *)arg6;
- (unsigned int)getResults:(unsigned int *)arg1 docNames:(id *)arg2 valueLists:(id *)arg3 maxCount:(unsigned int)arg4;
- (id)initWithSting:(id)arg1 forIndex:(id)arg2 withOptions:(id)arg3;
- (void)processResults:(BOOL)arg1;
- (BOOL)start;

@end


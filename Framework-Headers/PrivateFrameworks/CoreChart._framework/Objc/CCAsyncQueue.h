//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CCVegaWorkerClient, NSMutableArray;
@protocol CCAsyncQueueDelegate;

@interface CCAsyncQueue : NSObject
{
    CCVegaWorkerClient *_workerClient;
    unsigned long long _nextActionID;
    NSMutableArray *_queue;
    BOOL _isProcessing;
    NSObject<CCAsyncQueueDelegate> *_delegate;
}

@property (weak, nonatomic) NSObject<CCAsyncQueueDelegate> *delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (unsigned long long)enqueueOperation:(id)arg1;
- (unsigned long long)enqueueOperationWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithWorkerClient:(id)arg1;
- (void)keepAliveUntilCurrentOperationIsComplete;
- (void)processOperations;
- (void)startProcessOperations;
- (void)waitForOperation:(unsigned long long)arg1;
- (void)waitForPendingOperations;

@end

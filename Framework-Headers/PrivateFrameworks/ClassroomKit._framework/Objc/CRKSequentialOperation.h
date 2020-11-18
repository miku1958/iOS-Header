//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class CATOperationQueue, NSArray;

@interface CRKSequentialOperation : CATOperation
{
    CATOperation *_failedOperation;
    unsigned long long _frontOfQueue;
    NSArray *_operations;
    CATOperationQueue *_queue;
}

@property (strong, nonatomic) CATOperation *failedOperation; // @synthesize failedOperation=_failedOperation;
@property (nonatomic) unsigned long long frontOfQueue; // @synthesize frontOfQueue=_frontOfQueue;
@property (readonly, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property (readonly, nonatomic) CATOperationQueue *queue; // @synthesize queue=_queue;

+ (id)sequentialOperationWithOperations:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)enqueueFront;
- (void)frontOperationDidFinish:(id)arg1;
- (id)init;
- (id)initWithSequentialOperations:(id)arg1 queue:(id)arg2;
- (BOOL)isAsynchronous;
- (void)main;

@end

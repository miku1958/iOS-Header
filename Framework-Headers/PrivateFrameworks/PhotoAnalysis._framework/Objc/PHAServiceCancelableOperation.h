//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface PHAServiceCancelableOperation : NSObject
{
    NSLock *_mutex;
    CDUnknownBlockType _operationBlock;
    long long _operationId;
    _Atomic int _canceled;
    CDUnknownBlockType _cancellationBlock;
}

+ (id)operationNotFoundError:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)cancel;
- (id)description;
- (id)initWithLock:(id)arg1 operationId:(long long)arg2;
- (BOOL)isCancelled;
- (id)operationCanceledError:(BOOL)arg1;
- (long long)operationId;
- (void)setCancellationBlock:(CDUnknownBlockType)arg1;
- (void)setOperationBlock:(CDUnknownBlockType)arg1;
- (void)start;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface ISOperationQueue : NSObject
{
    NSOperationQueue *_queue;
}

@property BOOL adjustsMaxConcurrentOperationCount;

+ (id)mainQueue;
- (void)addOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)init;
- (long long)maxConcurrentOperationCount;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)operationCount;
- (id)operations;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setSuspended:(BOOL)arg1;

@end

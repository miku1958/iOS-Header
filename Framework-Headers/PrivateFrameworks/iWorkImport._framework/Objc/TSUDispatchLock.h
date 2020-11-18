//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUDispatchLock : NSObject
{
    BOOL _allowRecursiveRead;
    NSObject<OS_dispatch_queue> *_underlyingQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingQueue; // @synthesize underlyingQueue=_underlyingQueue;

- (void).cxx_destruct;
- (void)assertHasReadLock;
- (void)assertHasWriteLock;
- (id)init;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 allowRecursiveRead:(BOOL)arg2;
- (BOOL)isInUnderlyingQueue;
- (void)performAsynchronousRead:(CDUnknownBlockType)arg1;
- (void)performAsynchronousWrite:(CDUnknownBlockType)arg1;
- (void)performSynchronousRead:(CDUnknownBlockType)arg1;
- (void)performSynchronousWrite:(CDUnknownBlockType)arg1;

@end

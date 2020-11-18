//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCOperationThrottler-Protocol.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface RCOperationThrottler : NSObject <RCOperationThrottler>
{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
    BOOL _suspended;
}

@property BOOL suspended; // @synthesize suspended=_suspended;

- (void).cxx_destruct;
- (void)addCompletionForCurrentOperation:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 updateQueue:(id)arg2;
- (void)tickle;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;

@end


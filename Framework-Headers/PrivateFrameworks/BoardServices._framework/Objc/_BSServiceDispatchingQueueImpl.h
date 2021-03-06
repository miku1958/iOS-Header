//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSServiceDispatchingQueue-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _BSServiceDispatchingQueueImpl : NSObject <BSServiceDispatchingQueue>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assertBarrierOnQueue;
- (id)backingQueueIfExists;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)performAsync:(CDUnknownBlockType)arg1 withHandoff:(id)arg2;

@end


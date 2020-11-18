//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDelegateCaller, HMFMessageDispatcher, HMPendingRequests;
@protocol OS_dispatch_queue;

@interface _HMContext : NSObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMPendingRequests *_pendingRequests;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_messageDispatcher;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) HMPendingRequests *pendingRequests; // @synthesize pendingRequests=_pendingRequests;

+ (id)context;
- (void).cxx_destruct;
- (id)init;
- (id)initWithClientQueue:(id)arg1 pendingRequests:(id)arg2 delegateCaller:(id)arg3 messageDispatcher:(id)arg4;

@end

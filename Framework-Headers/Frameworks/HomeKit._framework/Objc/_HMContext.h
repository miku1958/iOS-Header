//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDelegateCaller, HMFMessageDispatcher, HMPendingRequests, HMXPCClient, NSString;
@protocol OS_dispatch_queue;

@interface _HMContext : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    HMPendingRequests *_pendingRequests;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_messageDispatcher;
}

@property (readonly, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) HMXPCClient *messageTransport;
@property (readonly, copy) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) HMPendingRequests *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)contextWithName:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 pendingRequests:(id)arg2 delegateCaller:(id)arg3 messageDispatcher:(id)arg4;
- (id)subcontextWithName:(id)arg1;

@end


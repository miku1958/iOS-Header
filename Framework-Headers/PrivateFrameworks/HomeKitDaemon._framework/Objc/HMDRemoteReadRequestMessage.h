//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessage, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRemoteReadRequestMessage : HMFObject
{
    HMFMessage *_readMessage;
    NSUUID *_accessoryUUID;
    NSObject<OS_dispatch_queue> *_responseQueue;
}

@property (readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property (readonly, nonatomic) HMFMessage *readMessage; // @synthesize readMessage=_readMessage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithReadMessage:(id)arg1 accessoryUUID:(id)arg2 responseQueue:(id)arg3;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class NSArray, NSString, NSUUID, _HMContext;
@protocol HMUserCloudShareManagerDelegate, OS_dispatch_queue;

@interface HMUserCloudShareManager : NSObject <HMFMessageReceiver>
{
    BOOL _registered;
    id<HMUserCloudShareManagerDelegate> _delegate;
    _HMContext *_context;
    NSUUID *_identifier;
    NSArray *_containerIDs;
}

@property (strong, nonatomic) NSArray *containerIDs; // @synthesize containerIDs=_containerIDs;
@property (readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMUserCloudShareManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (nonatomic, getter=isRegistered) BOOL registered; // @synthesize registered=_registered;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)__registerForMessages;
- (void)_handleDidReceiveRepairRequest:(id)arg1;
- (void)_handleDidReceiveShare:(id)arg1;
- (void)_registerWithCompletion:(CDUnknownBlockType)arg1;
- (void)configure;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)messageDestination;
- (void)reconnect;
- (void)registerForContainerIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

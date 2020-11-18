//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCameraPowerAssertionProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, HMDCameraSessionID, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotSender : NSObject <HMFLogging, HMDCameraPowerAssertionProtocol>
{
    NSUUID *_uniqueIdentifier;
    NSString *_destinationID;
    HMDAccessory *_accessory;
    HMDCameraSessionID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, weak, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_sendImageSendFailure:(id)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 accessory:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6;
- (id)logIdentifier;

@end


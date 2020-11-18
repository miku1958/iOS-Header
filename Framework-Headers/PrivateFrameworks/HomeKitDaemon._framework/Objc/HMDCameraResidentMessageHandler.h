//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, HMDCentralMessageDispatcher, NSString;

@interface HMDCameraResidentMessageHandler : NSObject <HMFLogging>
{
    NSString *_logID;
    HMDAccessory *_accessory;
    HMDCentralMessageDispatcher *_remoteMessageDispatcher;
}

@property (readonly, weak, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property (strong, nonatomic) HMDCentralMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)arg1 logID:(id)arg2;
- (id)logIdentifier;
- (id)residentDeviceForCamera;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)sendRemoteMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (void)updateMessageDispatcher:(id)arg1;

@end


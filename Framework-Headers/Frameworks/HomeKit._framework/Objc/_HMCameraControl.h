//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMFUnfairLock, HMHome, HMService, NSString, NSUUID, _HMCameraProfile, _HMContext;
@protocol OS_dispatch_queue;

@interface _HMCameraControl : NSObject <HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    _HMContext *_context;
    _HMCameraProfile *_cameraProfile;
    HMService *_service;
    NSUUID *_profileUniqueIdentifier;
    HMHome *_home;
}

@property (readonly, weak, nonatomic) _HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property (strong, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
@property (readonly, nonatomic) HMService *service; // @synthesize service=_service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;

@end

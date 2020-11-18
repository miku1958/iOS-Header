//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMCameraView, HMFUnfairLock, NSNumber, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

@interface _HMCameraSource : NSObject <HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    HMCameraView *_cameraView;
    _HMContext *_context;
    NSNumber *_aspectRatio;
    NSUUID *_profileUniqueIdentifier;
    NSNumber *_slotIdentifier;
    NSString *_sessionID;
}

@property (readonly, copy, nonatomic) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property (weak, nonatomic) HMCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property (readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly, copy, nonatomic) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5;

@end


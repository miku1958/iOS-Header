//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDDevice, IDSService, NSObject, NSString;
@protocol HMDCompanionManagerDelegate, OS_dispatch_queue;

@interface HMDCompanionManager : HMFObject <HMFLogging, IDSServiceDelegate>
{
    HMDDevice *_companion;
    id<HMDCompanionManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    IDSService *_service;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (strong, nonatomic) HMDDevice *companion; // @synthesize companion=_companion;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDCompanionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property (readonly) Class superclass;

+ (BOOL)isCompatibleCompanionDevice:(id)arg1;
+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
- (void)__initializeConnectedDevices;
- (void)_updateConnectedDevices:(id)arg1;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (void)notifyDelegateOfCompanionChange:(id)arg1;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (id)shortDescription;

@end

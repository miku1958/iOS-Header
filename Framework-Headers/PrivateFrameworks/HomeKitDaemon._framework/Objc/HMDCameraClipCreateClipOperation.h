//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraClipAddSignificantEventOperation.h>

@class HMCameraClipEncryptionManager, NSDate;

@interface HMDCameraClipCreateClipOperation : HMDCameraClipAddSignificantEventOperation
{
    double _targetFragmentDuration;
    NSDate *_clipStartDate;
    HMCameraClipEncryptionManager *_encryptionManager;
}

@property (readonly, copy) NSDate *clipStartDate; // @synthesize clipStartDate=_clipStartDate;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property (readonly) double targetFragmentDuration; // @synthesize targetFragmentDuration=_targetFragmentDuration;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 encryptionManager:(id)arg7;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 encryptionManager:(id)arg7 dataSource:(id)arg8;
- (id)modelsToUpdate;

@end


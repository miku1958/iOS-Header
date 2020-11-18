//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBCloudZone, HMDCloudShareParticipantsManager, HMDUser, HMDUserSettingsBackingStoreController, NSUUID;

@protocol HMDUserSettingsBackingStoreControllerDelegate <NSObject>

@property (readonly) BOOL isCurrentUser;
@property (readonly) BOOL isRunningOnHomeOwnersDevice;
@property (readonly) NSUUID *userUUID;

- (HMDCloudShareParticipantsManager *)backingStoreController:(HMDUserSettingsBackingStoreController *)arg1 createParticipantManagerForCloudZone:(HMBCloudZone *)arg2;
- (void)didStartBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1;
- (void)didStopBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1;
- (HMDUser *)ownerForUserSettingsBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCloudShareParticipantsManager, HMDUser;

@protocol HMDCloudShareParticipantsManagerDataSource <NSObject>
- (BOOL)manager:(HMDCloudShareParticipantsManager *)arg1 shouldShareWithUser:(HMDUser *)arg2;

@optional
- (BOOL)areShareModificationsEnabledForManager:(HMDCloudShareParticipantsManager *)arg1;
- (BOOL)canUseUntrustedAccountHandlesForParticipantManager:(HMDCloudShareParticipantsManager *)arg1;
- (BOOL)manager:(HMDCloudShareParticipantsManager *)arg1 shouldGrantWriteAccessToUser:(HMDUser *)arg2;
@end


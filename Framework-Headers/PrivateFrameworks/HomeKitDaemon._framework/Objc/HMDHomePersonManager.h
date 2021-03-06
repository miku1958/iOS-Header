//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDPersonManager.h>

#import <HomeKitDaemon/HMDDatabaseZoneManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, HMHomePersonManagerSettings, HMIHomePersonManager, NSString;

@interface HMDHomePersonManager : HMDPersonManager <HMFLogging, HMDDatabaseZoneManagerDataSource>
{
    HMHomePersonManagerSettings *_dataUnavailableHomeSettings;
    HMDHome *_home;
}

@property (readonly, copy) HMHomePersonManagerSettings *dataUnavailableHomeSettings; // @synthesize dataUnavailableHomeSettings=_dataUnavailableHomeSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMIHomePersonManager *hmiPersonManager;
@property (weak) HMDHome *home; // @synthesize home=_home;
@property (readonly, copy) HMHomePersonManagerSettings *settings;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)configureWithHome:(id)arg1;
- (void)handleUpdatedSettings:(id)arg1;
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1;
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;
- (id)initWithHome:(id)arg1 zoneUUID:(id)arg2 workQueue:(id)arg3;
- (id)initWithUUID:(id)arg1 zoneManager:(id)arg2 dataReceivers:(id)arg3 workQueue:(id)arg4 home:(id)arg5;
- (id)logIdentifier;
- (BOOL)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;
- (BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (BOOL)sharesFaceClassifications;
- (BOOL)syncsPersonData;
- (id)updateSettingsUsingMessagePayload:(id)arg1;
- (BOOL)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;

@end


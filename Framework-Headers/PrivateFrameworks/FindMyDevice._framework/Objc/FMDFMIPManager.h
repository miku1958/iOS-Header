//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface FMDFMIPManager : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionCreationQueue;
    NSURL *_managedLostModeFileURL;
    NSURL *_needsLocateAckLostModeFileURL;
}

@property (strong, nonatomic) NSURL *managedLostModeFileURL; // @synthesize managedLostModeFileURL=_managedLostModeFileURL;
@property (strong, nonatomic) NSURL *needsLocateAckLostModeFileURL; // @synthesize needsLocateAckLostModeFileURL=_needsLocateAckLostModeFileURL;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionCreationQueue; // @synthesize xpcConnectionCreationQueue=_xpcConnectionCreationQueue;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (void)_forceFMWUpgradeAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_isRunningAsMobileUser;
- (unsigned long long)_managedLostModeType;
- (unsigned long long)_needsAckLostModeType;
- (id)_postWipePrefPath;
- (BOOL)_quickFetchFMIPEnabledstate;
- (void)_stopAlarm;
- (void)_updateManagedLostModeWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateNeedsLocateAckLostModeWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addNotificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearData:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentXPCConnection;
- (void)dealloc;
- (void)deviceActivationDidSucceed;
- (void)didChangeFMIPAccountInfo:(id)arg1;
- (void)didReceiveLostModeExitAuthToken:(id)arg1;
- (void)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2;
- (void)disableLostMode;
- (void)disableManagedLostModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableManagedLostModeWithLocatedMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableTouchIDForLostModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableActivationLockWithCompletion:(CDUnknownBlockType)arg1;
- (id)enableFMIPInContext:(unsigned long long)arg1;
- (id)enableLostModeWithInfo:(id)arg1;
- (void)enableManagedLostModeWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fmipAccount;
- (void)fmipAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)fmipStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAccessoriesWithCompletion:(CDUnknownBlockType)arg1;
- (id)getManagedLostModeFileURL;
- (id)getNeedsLocateAckLostModeFileURL;
- (id)init;
- (void)initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)initiateLostModeExitAuthWithCompletion:(CDUnknownBlockType)arg1;
- (void)isActivationLockAllowedWithCompletion:(CDUnknownBlockType)arg1;
- (void)isActivationLockEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)isActivationLockedWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isManagedLostModeActive;
- (BOOL)lockdownShouldDisableDevicePairing;
- (BOOL)lockdownShouldDisableDeviceRestore;
- (id)lostModeInfo;
- (BOOL)lostModeIsActive;
- (void)lowBatteryLocateEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)markPairedDeviceWithUDID:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)needsLostModeExitAuth;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (id)pathsToPreserveAcrossWipe;
- (void)playSoundWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLowBatteryLocateEnabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)signatureHeadersWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)soundStoppedForAccessoryIdentifier:(id)arg1;
- (void)startPlayingSoundForAccessory:(id)arg1 duration:(double)arg2 rampUpDuration:(double)arg3 channels:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)stopPlayingSoundForAccessory:(id)arg1 rampDownDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)userDidAckManagedLostModeLocateWithCompletion:(CDUnknownBlockType)arg1;
- (void)userNotifiedOfActivationLockForAllPairedDevices;
- (void)userNotifiedOfActivationLockForPairedDevices:(id)arg1;
- (void)waitForRoutableAccessory:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end


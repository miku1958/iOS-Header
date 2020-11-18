//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAuthenticationPolicy-Protocol.h>

@class NSString, SBSoftwareUpdatePasscodePolicyManager, SBiCloudPasscodeRequirementLockoutController, SecureBackup;

@interface SBDefaultAuthenticationPolicy : NSObject <SBFAuthenticationPolicy>
{
    SBiCloudPasscodeRequirementLockoutController *_iCloudPasscodeRequirementLockoutController;
    SBSoftwareUpdatePasscodePolicyManager *_softwareUpdatePasscodePolicyManager;
    SecureBackup *_secureBackupHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBiCloudPasscodeRequirementLockoutController *iCloudPasscodeRequirementLockoutController; // @synthesize iCloudPasscodeRequirementLockoutController=_iCloudPasscodeRequirementLockoutController;
@property (strong, nonatomic, getter=_secureBackupHelper, setter=_setSecureBackupHelper:) SecureBackup *secureBackupHelper; // @synthesize secureBackupHelper=_secureBackupHelper;
@property (strong, nonatomic) SBSoftwareUpdatePasscodePolicyManager *softwareUpdatePasscodePolicyManager; // @synthesize softwareUpdatePasscodePolicyManager=_softwareUpdatePasscodePolicyManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)allowAuthenticationRevocation;
- (void)cachePasscode:(id)arg1;
- (void)clearPasscodeCache;
- (void)passcodeAuthenticationFailedWithError:(id)arg1;
- (BOOL)shouldClearBlockStateOnSync;
- (BOOL)usesSecureMode;
- (void)wipeDeviceWithReason:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPDDeviceSecretValidator, CDPDSecureBackupContext, CDPDevice, NSDictionary, NSError;

@protocol CDPDDeviceSecretValidatorDelegate <NSObject>
- (void)secretValidator:(CDPDDeviceSecretValidator *)arg1 recoverSecureBackupWithContext:(CDPDSecureBackupContext *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (BOOL)secretValidator:(CDPDDeviceSecretValidator *)arg1 shouldContinueValidationAfterError:(NSError *)arg2;

@optional
- (void)secretValidator:(CDPDDeviceSecretValidator *)arg1 didFailRecovery:(CDPDevice *)arg2 withError:(NSError *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)secretValidator:(CDPDDeviceSecretValidator *)arg1 didFailRecoveryWithErrors:(NSDictionary *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (BOOL)secretValidator:(CDPDDeviceSecretValidator *)arg1 shouldAcceptRecoveryError:(id *)arg2;
- (void)secretValidatorWillAttemptRecovery;
@end


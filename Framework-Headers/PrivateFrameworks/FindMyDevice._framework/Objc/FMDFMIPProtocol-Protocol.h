//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class FMDFMIPAccountInfo, FMDLostModeInfo, NSData, NSDictionary, NSString;

@protocol FMDFMIPProtocol <NSObject>
- (void)_forceFMWUpgradeAlertUsingCallback:(void (^)(NSError *))arg1;
- (oneway void)activationLockVersionWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
- (oneway void)clearData:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)deviceActivationDidSucceedUsingCallback:(void (^)(NSError *))arg1;
- (oneway void)didChangeFMIPAccountInfo:(NSString *)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)didReceiveLostModeExitAuthToken:(NSString *)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)disableFMIPForAccount:(FMDFMIPAccountInfo *)arg1 pairedDeviceWithUDID:(NSString *)arg2 usingCallback:(void (^)(NSError *))arg3;
- (oneway void)disableFMIPUsingToken:(NSString *)arg1 forPairedDeviceWithUDID:(NSString *)arg2 usingCallback:(void (^)(NSError *))arg3;
- (oneway void)disableFMIPUsingToken:(NSString *)arg1 inContext:(unsigned long long)arg2 usingCallback:(void (^)(NSError *))arg3;
- (oneway void)disableLostModeUsingCallback:(void (^)(NSError *))arg1;
- (oneway void)enableActivationLockUsingCallback:(void (^)(NSError *))arg1;
- (oneway void)enableFMIPInContext:(unsigned long long)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)enableLostModeWithInfo:(FMDLostModeInfo *)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)getAccessoriesWithCompletion:(void (^)(NSError *, NSArray *))arg1;
- (oneway void)getFMIPStateUsingCallback:(void (^)(unsigned long long, NSError *))arg1;
- (oneway void)getFmipAccountUsingCallback:(void (^)(NSString *, NSString *, NSError *))arg1;
- (oneway void)getLockdownShouldDisableDevicePairingUsingCallback:(void (^)(BOOL, NSError *))arg1;
- (oneway void)getLockdownShouldDisableDeviceRestoreUsingCallback:(void (^)(BOOL, NSError *))arg1;
- (oneway void)initiateLostModeExitAuthForApp:(NSString *)arg1 idsDeviceID:(NSString *)arg2 usingCallback:(void (^)(NSError *))arg3;
- (oneway void)isActivationLockAllowedUsingCallback:(void (^)(BOOL, NSError *))arg1;
- (oneway void)isActivationLockEnabledUsingCallback:(void (^)(BOOL, NSError *))arg1;
- (oneway void)isActivationLockedUsingCallback:(void (^)(BOOL, NSError *))arg1;
- (void)lowBatteryLocateEnabledUsingCallback:(void (^)(BOOL, NSError *))arg1;
- (oneway void)markAsMissingSupportedForPairedDeviceWithUDID:(NSString *)arg1 usingCallback:(void (^)(BOOL, NSError *))arg2;
- (oneway void)markPairedDeviceWithUDID:(NSString *)arg1 asMissingUsingToken:(NSString *)arg2 callback:(void (^)(NSError *))arg3;
- (void)playSoundWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setDailyLocateReportEnabled:(BOOL)arg1;
- (void)setLowBatteryLocateEnabled:(BOOL)arg1 usingCallback:(void (^)(NSError *))arg2;
- (void)showDailyLocateReport;
- (void)signatureHeadersWithData:(NSData *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)soundStoppedForAccessoryIdentifier:(NSString *)arg1;
@end

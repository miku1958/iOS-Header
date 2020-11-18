//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CDPContext, NSArray, NSError, NSNumber;
@protocol CDPLocalDeviceSecretHandlerProtocol, CDPRecoveryKeyValidatorInternal, CDPRemoteDeviceSecretValidatorProtocol;

@protocol CDPStateUIProviderInternal
- (void)cdpContext:(CDPContext *)arg1 beginRemoteApprovalWithValidator:(id<CDPRemoteDeviceSecretValidatorProtocol>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)cdpContext:(CDPContext *)arg1 presentRecoveryKeyWithValidator:(id<CDPRecoveryKeyValidatorInternal>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)cdpContext:(CDPContext *)arg1 promptForAdoptionOfMultipleICSC:(void (^)(BOOL, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(NSNumber *)arg3 isRandom:(BOOL)arg4 validator:(id<CDPRemoteDeviceSecretValidatorProtocol>)arg5;
- (void)cdpContext:(CDPContext *)arg1 promptForInteractiveAuthenticationWithCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForLocalSecretWithHandler:(id<CDPLocalDeviceSecretHandlerProtocol>)arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForRecoveryKeyWithValidator:(id<CDPRecoveryKeyValidatorInternal>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)cdpContext:(CDPContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id<CDPRemoteDeviceSecretValidatorProtocol>)arg4;
- (void)cdpContext:(CDPContext *)arg1 showError:(NSError *)arg2 withCompletion:(void (^)(long long))arg3;
- (void)cdpContext:(CDPContext *)arg1 showError:(NSError *)arg2 withDefaultIndex:(long long)arg3 withCompletion:(void (^)(long long))arg4;
@end

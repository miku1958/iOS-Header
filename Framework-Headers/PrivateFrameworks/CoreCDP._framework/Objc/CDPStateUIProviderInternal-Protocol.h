//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CDPContext, NSArray, NSNumber;
@protocol CDPLocalDeviceSecretHandlerProtocol, CDPRemoteDeviceSecretValidatorProtocol;

@protocol CDPStateUIProviderInternal
- (void)cdpContext:(CDPContext *)arg1 promptForAccountPasswordWithCompletion:(void (^)(NSString *, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForAdoptionOfMultipleICSC:(void (^)(BOOL, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(NSNumber *)arg3 isRandom:(BOOL)arg4 validator:(id<CDPRemoteDeviceSecretValidatorProtocol>)arg5;
- (void)cdpContext:(CDPContext *)arg1 promptForInteractiveAuthenticationWithCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForLocalSecretWithHandler:(id<CDPLocalDeviceSecretHandlerProtocol>)arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id<CDPRemoteDeviceSecretValidatorProtocol>)arg4;
- (void)cdpContext:(CDPContext *)arg1 promptToInformUserOfAccountLockOutWithCompletion:(void (^)(void))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptToInformUserOfAccountUnlockWithCompletion:(void (^)(void))arg2;
@end


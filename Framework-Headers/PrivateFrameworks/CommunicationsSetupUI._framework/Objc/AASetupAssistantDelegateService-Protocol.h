//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol AASetupAssistantDelegateService
- (NSDictionary *)accountSetupRequestParameters;
- (void)completeSetupWithResponseParameters:(NSDictionary *)arg1 handler:(void (^)(BOOL, NSError *))arg2;
- (NSString *)delegateServiceIdentifier;

@optional
- (BOOL)canAutoSetupMailAccount:(NSString *)arg1;
- (void)completeEnablingCloudServicesWithHandler:(void (^)(BOOL, NSError *))arg1;
- (BOOL)needSetupForMailAccount:(NSString *)arg1;
- (void)setBackupEnabled:(BOOL)arg1 handler:(void (^)(BOOL, NSError *))arg2;
- (void)setCloudServicesEnabled:(BOOL)arg1 handler:(void (^)(BOOL, NSError *))arg2;
- (void)setDeviceLocatorEnabled:(BOOL)arg1;
- (void)setupMailAccount:(NSString *)arg1 password:(NSString *)arg2 handler:(void (^)(BOOL, NSError *))arg3;
- (void)setupOperationFailed;
- (void)verifyAccountWithAppleID:(NSString *)arg1 handler:(void (^)(BOOL, NSError *))arg2;
@end


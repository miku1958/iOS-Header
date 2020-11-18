//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, PKPaymentPass, PKPaymentWebService;

@protocol PKPaymentWebServiceTargetDeviceProtocol <NSObject>
- (NSString *)bridgedClientInfo;
- (NSString *)deviceDescriptionForPaymentWebService:(PKPaymentWebService *)arg1;
- (NSString *)deviceName;
- (NSString *)deviceRegion;
- (void)downloadAllPaymentPassesForPaymentWebService:(PKPaymentWebService *)arg1;
- (void)noteProvisioningInProgress:(BOOL)arg1;
- (int)paymentSupportedInCurrentRegionForWebService:(PKPaymentWebService *)arg1;
- (void)paymentWebService:(PKPaymentWebService *)arg1 addPaymentPass:(PKPaymentPass *)arg2 withCompletionHandler:(void (^)(void))arg3;
- (BOOL)paymentWebService:(PKPaymentWebService *)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(NSString *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 configurationDataWithCompletionHandler:(void (^)(PKPaymentDeviceConfigurationData *, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 deleteApplicationWithAID:(NSString *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didRegisterWithRegionMap:(NSDictionary *)arg2;
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 filterVerificationChannels:(NSArray *)arg2;
- (BOOL)paymentWebService:(PKPaymentWebService *)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 provisioningDataWithCompletionHandler:(void (^)(PKPaymentDeviceProvisioningData *, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(NSString *)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 registrationDataWithAuthToken:(NSString *)arg2 completionHandler:(void (^)(PKPaymentDeviceRegistrationData *, NSError *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 setNewAuthRandomIfNecessary:(void (^)(BOOL))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 signData:(NSData *)arg2 withCompletionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 validateAddPreconditionsWithCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(PKPaymentWebService *)arg1;
- (BOOL)supportsAutomaticPassPresentation;

@optional
- (void)paymentWebService:(PKPaymentWebService *)arg1 addPaymentPass:(PKPaymentPass *)arg2 withCompletionHandlerV2:(void (^)(PKPaymentPass *))arg3;
@end


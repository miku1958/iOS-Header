//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/AKAnisetteProvisioningClientProtocol-Protocol.h>

@class AKAccountRecoveryContext, AKAppleIDAuthenticationContext, AKAppleIDServerResourceLoadDelegate, NSDictionary, NSError, NSString, NSURLRequest, NSUUID;

@protocol AKAppleIDAuthenticationClientProtocol <AKAnisetteProvisioningClientProtocol>
- (void)dismissBasicLoginUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)dismissKeepUsingUIForContext:(AKAppleIDAuthenticationContext *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)dismissNativeRecoveryUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)dismissSecondFactorUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)dismissServerProvidedUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)presentBasicLoginUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg2;
- (void)presentKeepUsingUIForContext:(AKAppleIDAuthenticationContext *)arg1 appleID:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)presentLoginAlertForContext:(AKAppleIDAuthenticationContext *)arg1 withError:(NSError *)arg2 title:(NSString *)arg3 message:(NSString *)arg4 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg5;
- (void)presentNativeRecoveryUIForContext:(AKAppleIDAuthenticationContext *)arg1 recoveryContext:(AKAccountRecoveryContext *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)presentSecondFactorAlertForContext:(AKAppleIDAuthenticationContext *)arg1 withError:(NSError *)arg2 title:(NSString *)arg3 message:(NSString *)arg4 completion:(void (^)(NSNumber *, NSError *))arg5;
- (void)presentSecondFactorUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)presentServerProvidedUIForContext:(AKAppleIDAuthenticationContext *)arg1 URLRequest:(NSURLRequest *)arg2 delegate:(AKAppleIDServerResourceLoadDelegate *)arg3 completion:(void (^)(NSHTTPURLResponse *, NSDictionary *, NSError *))arg4;
- (void)shouldContinueWithAuthenticationResults:(NSDictionary *)arg1 error:(NSError *)arg2 forContextID:(NSUUID *)arg3 completion:(void (^)(BOOL, NSDictionary *))arg4;
@end


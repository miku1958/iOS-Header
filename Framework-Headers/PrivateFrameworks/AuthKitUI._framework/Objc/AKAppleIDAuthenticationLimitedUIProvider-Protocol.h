//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class NSError, NSString;

@protocol AKAppleIDAuthenticationLimitedUIProvider <NSObject>
- (void)dismissBasicLoginUIWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)dismissSecondFactorUIWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)presentBasicLoginUIWithCompletion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg1;
- (void)presentLoginAlertWithError:(NSError *)arg1 title:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg4;
- (void)presentSecondFactorAlertWithError:(NSError *)arg1 title:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(NSNumber *, NSError *))arg4;
- (void)presentSecondFactorUIWithCompletion:(void (^)(NSNumber *, NSError *))arg1;

@optional
- (void)presentBiometricOrPasscodeValidationForAppleID:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
@end

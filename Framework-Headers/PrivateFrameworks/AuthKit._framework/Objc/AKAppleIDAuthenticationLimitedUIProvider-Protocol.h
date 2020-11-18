//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString;

@protocol AKAppleIDAuthenticationLimitedUIProvider <NSObject>
- (void)dismissBasicLoginUIWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)dismissICSCRecoveryUIWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)dismissSecondFactorUIWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)presentBasicLoginUIWithCompletion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg1;
- (void)presentICSCRecoveryUIWithInfo:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)presentLoginAlertWithError:(NSError *)arg1 title:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg4;
- (void)presentSecondFactorAlertWithError:(NSError *)arg1 title:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(NSNumber *, NSError *))arg4;
- (void)presentSecondFactorUIWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
@end

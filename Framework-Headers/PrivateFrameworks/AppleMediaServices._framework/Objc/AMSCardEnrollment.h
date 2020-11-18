//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSCardEnrollment : NSObject
{
}

+ (id)_cardEligibilityStatusForCountryCode:(id)arg1;
+ (id)_currentIdentifier;
+ (id)_paymentServicesMerchantURLPromise;
+ (id)_shouldAttemptApplePayWithCountryCode:(id)arg1 paymentNetworks:(id)arg2;
+ (BOOL)beginCardEnrollmentAttemptWithBag:(id)arg1 account:(id)arg2;
+ (void)clearAutoEnrollmentIdentifier;
+ (void)finishCardEnrollmentAttemptWithBag:(id)arg1 buyParams:(id)arg2 purchaseResult:(id)arg3;
+ (id)paymentServicesMerchantURL;
+ (BOOL)shouldAttemptApplePayClassicWithBag:(id)arg1 accessControlRef:(struct __SecAccessControl *)arg2;
+ (BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 accessControlRef:(struct __SecAccessControl *)arg3;
+ (BOOL)shouldAttemptAutoEnrollment;
+ (BOOL)shouldAttemptAutoEnrollmentWithBag:(id)arg1 accessControlRef:(struct __SecAccessControl *)arg2;
+ (BOOL)shouldAttemptAutoEnrollmentWithCountryCode:(id)arg1;
+ (BOOL)shouldUseApplePayClassicWithBag:(id)arg1;
+ (BOOL)shouldUseAutoEnrollmentWithBag:(id)arg1;
+ (BOOL)shouldUseAutoEnrollmentWithPercentage:(double)arg1 sessionDuration:(double)arg2;
+ (void)updateAutoEnrollmentIdentifier;

@end

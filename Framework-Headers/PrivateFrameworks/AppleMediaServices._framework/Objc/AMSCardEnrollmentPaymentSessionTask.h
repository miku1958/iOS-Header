//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@interface AMSCardEnrollmentPaymentSessionTask : AMSTask
{
}

+ (id)_paymentServiceURLStringForMerchantURL:(id)arg1;
+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1;
+ (void)paymentSessionWithBag:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)paymentSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)performPaymentSessionEnrollment;
+ (id)performPaymentSessionEnrollmentWithBag:(id)arg1;

@end

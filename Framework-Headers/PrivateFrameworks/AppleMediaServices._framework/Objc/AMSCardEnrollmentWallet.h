//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSCardEnrollmentWallet : NSObject
{
}

+ (id)countryCodeWithBagContract:(id)arg1;
+ (id)gsTokenForAccount:(id)arg1 error:(id *)arg2;
+ (id)headersForAccount:(id)arg1;
+ (BOOL)shouldUseSilentEnrollmentWithBagContract:(id)arg1;
+ (id)silentEnrollmentEligibilityURLWithBagContract:(id)arg1;
+ (id)silentEnrollmentPaymentSessionURLWithBagContract:(id)arg1;
+ (id)silentEnrollmentVerificationURLWithBagContract:(id)arg1;

@end

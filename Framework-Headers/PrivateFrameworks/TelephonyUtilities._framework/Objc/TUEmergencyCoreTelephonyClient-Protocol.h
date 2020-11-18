//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCoreTelephonyClient-Protocol.h>

@class NSString;
@protocol TUTelephonySubscription;

@protocol TUEmergencyCoreTelephonyClient <TUCoreTelephonyClient>
- (BOOL)isEmergencyNumberForDigits:(NSString *)arg1 subscription:(id<TUTelephonySubscription>)arg2 error:(id *)arg3;
- (BOOL)isEmergencyNumberForDigits:(NSString *)arg1 subscriptionLabelID:(NSString *)arg2 error:(id *)arg3;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(NSString *)arg1 subscription:(id<TUTelephonySubscription>)arg2 error:(id *)arg3;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(NSString *)arg1 subscriptionLabelID:(NSString *)arg2 error:(id *)arg3;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSubscriptionLabelID:(NSString *)arg1 error:(id *)arg2;
@end


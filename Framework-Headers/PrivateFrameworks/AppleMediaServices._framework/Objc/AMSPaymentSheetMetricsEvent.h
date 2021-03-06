//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent
{
}

+ (id)_timestamp;
+ (id)dictionaryForBiometricMatchState:(long long)arg1 didBiometricsLockout:(BOOL)arg2;
+ (id)dictionaryForCancellationEvent:(unsigned long long)arg1 didBiometricsLockout:(BOOL)arg2;
+ (id)dictionaryForUserAction:(long long)arg1 didBiometricsLockout:(BOOL)arg2;
- (void)addBiometricMatchStateFinal:(long long)arg1;
- (void)addClientMetadataForPurchaseInfo:(id)arg1 metricsDictionary:(id)arg2;
- (void)addDualActionSuccess:(BOOL)arg1;
- (void)addUserActions:(id)arg1;

@end


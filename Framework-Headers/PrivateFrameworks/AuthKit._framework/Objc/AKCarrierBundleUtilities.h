//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface AKCarrierBundleUtilities : NSObject
{
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_carrierUtilitiesQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_formattedValueForPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (id)init;
- (id)phoneBundleInfoWithAdditionalInfo:(id)arg1 error:(id *)arg2;

@end


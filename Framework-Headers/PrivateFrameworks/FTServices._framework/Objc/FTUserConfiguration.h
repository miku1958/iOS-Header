//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface FTUserConfiguration : NSObject
{
}

@property (readonly, nonatomic) BOOL _nonWifiFaceTimeEntitled;
@property (nonatomic) BOOL allowAnyNetwork;
@property (nonatomic) BOOL cellularFaceTimeEnabled;
@property (nonatomic) BOOL isDeviceInDualPhoneIdentityMode;
@property (nonatomic) BOOL isDeviceInManualPhoneSelectionMode;
@property (copy, nonatomic) NSArray *selectedPhoneNumberRegistrationSubscriptionLabels;
@property (readonly, copy, nonatomic) NSNumber *selectedPhoneNumberRegistrationSubscriptionNumber;

+ (id)sharedInstance;
- (BOOL)_adequateInternalOrCarrierInstall;
- (BOOL)cellularDataEnabledForBundleId:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)nonBluetoothAllowedForBundleId:(id)arg1;
- (void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)arg1;
- (BOOL)wifiAllowedForBundleId:(id)arg1;

@end

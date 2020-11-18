//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <IMSharedUtilities/CoreTelephonyClientDelegate-Protocol.h>

@class CoreTelephonyClient, IDSPhoneCertificateVendor, IMCTXPCServiceSubscriptionInfo, NSArray, NSMutableDictionary, NSString;

@interface IMCTSubscriptionUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate>
{
    CoreTelephonyClient *_coreTelephonyClient;
    NSMutableDictionary *_cachedCarrierSettings;
    IMCTXPCServiceSubscriptionInfo *_ctSubscriptionInfo;
    IDSPhoneCertificateVendor *_phoneCertificateVendor;
    NSString *_registeredSIMID;
    NSString *_registeredPhoneNumber;
}

@property (strong, nonatomic) NSMutableDictionary *cachedCarrierSettings; // @synthesize cachedCarrierSettings=_cachedCarrierSettings;
@property (strong, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property (readonly, copy, nonatomic) NSString *ctPhoneNumber;
@property (readonly, nonatomic) NSArray *ctServiceSubscriptions;
@property (strong, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo; // @synthesize ctSubscriptionInfo=_ctSubscriptionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IDSPhoneCertificateVendor *phoneCertificateVendor; // @synthesize phoneCertificateVendor=_phoneCertificateVendor;
@property (copy, nonatomic) NSString *registeredPhoneNumber; // @synthesize registeredPhoneNumber=_registeredPhoneNumber;
@property (copy, nonatomic) NSString *registeredSIMID; // @synthesize registeredSIMID=_registeredSIMID;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_cachedCarrierKeyForKeyHierarchy:(id)arg1 bundleType:(long long)arg2;
- (id)_cachedCarrierSettingsUniqueIDKeyForSubscriptionContext:(id)arg1;
- (id)_createSettingsDictionaryForUniqueID:(id)arg1;
- (id)_getCachedCarrierSettingValueForBundleKey:(id)arg1 uniqueID:(id)arg2;
- (id)_getCachedSettingOrReadFromBundleForCarrierBundleKey:(id)arg1 bundleType:(long long)arg2 forContext:(id)arg3 defaultValue:(id)arg4;
- (id)_getCarrierSettingsForUniqueID:(id)arg1;
- (void)_resetCachedCarrierSettingsForUniqueID:(id)arg1;
- (void)_resetSubscriptionInfo;
- (void)_setCachedCarrierSettingValue:(id)arg1 bundleKey:(id)arg2 uniqueID:(id)arg3;
- (void)_setCarrierSettings:(id)arg1 uniqueID:(id)arg2;
- (void)carrierBundleChange:(id)arg1;
- (id)copyBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 bundleType:(long long)arg3 defaultValue:(id)arg4 valueIfError:(id)arg5;
- (id)copyCarrierBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4;
- (id)copyOperatorBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4;
- (id)ctSubscriptionInfoWithError:(id)arg1;
- (BOOL)deviceSupportsMultipleSubscriptions;
- (id)init;
- (id)newSubscriptionContextWithPhoneNumber:(id)arg1 labelID:(id)arg2 isDefaultVoice:(id)arg3 isDefaultData:(id)arg4 slot:(long long)arg5;
- (id)newSubscriptionContextWithSlot:(long long)arg1;
- (unsigned long long)numberOfSubscriptions;
- (id)stringForBundleType:(long long)arg1;
- (void)subscriptionInfoDidChange;

@end


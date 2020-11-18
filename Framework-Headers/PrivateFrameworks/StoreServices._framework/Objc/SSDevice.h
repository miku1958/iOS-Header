//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/SSRequestDelegate-Protocol.h>

@class NSSet, NSString, SSKeyValueStore, SSPromise, SSURLBag;
@protocol OS_dispatch_queue;

@interface SSDevice : NSObject <SSRequestDelegate>
{
    NSString *_appleTVProductVersion;
    NSSet *_automaticDownloadKinds;
    id _cloudMediaLibraryIdentifier;
    long long _deviceType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSKeyValueStore *_keyValueStore;
    NSString *_legacyUserAgent;
    NSString *_localStoreFrontIdentifier;
    id _mediaLibraryIdentifier;
    NSString *_phoneNumber;
    NSString *_productType;
    NSString *_productVersion;
    id _softwareLibraryIdentifier;
    NSString *_udid;
    SSURLBag *_urlBag;
    NSString *_userAgent;
    NSString *_clientName;
}

@property (readonly) NSSet *automaticDownloadKinds;
@property (readonly) double batteryLevel;
@property (readonly) NSString *clientName;
@property (readonly) NSString *clientVersion;
@property (copy) NSString *cloudMediaLibraryIdentifier;
@property (readonly) NSString *compatibleProductType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long deviceType;
@property (readonly) unsigned int deviceTypeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *legacyUserAgent;
@property (copy) NSString *mediaLibraryIdentifier;
@property (readonly) NSString *phoneNumber;
@property (readonly, getter=isPluggedIn) BOOL pluggedIn;
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion;
@property (readonly) float screenScale;
@property (readonly) NSString *serialNumber;
@property (copy) NSString *softwareLibraryIdentifier;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly, nonatomic) SSPromise *storeFrontIdentifierPromise;
@property (readonly) Class superclass;
@property (readonly) NSString *thinnedApplicationVariantIdentifier;
@property (readonly) NSString *uniqueDeviceIdentifier;
@property (readonly) NSString *userAgent;

+ (id)copyCachedAvailableItemKinds;
+ (id)currentDevice;
+ (BOOL)deviceIsAppleTV;
+ (BOOL)deviceIsAppleWatch;
+ (BOOL)deviceIsAudioAccessory;
+ (BOOL)deviceIsInternalBuild;
+ (BOOL)deviceIsSeedBuild;
+ (BOOL)deviceIsiPad;
+ (BOOL)deviceIsiPhone;
+ (BOOL)deviceIsiPod;
+ (BOOL)promptNeedsDisplay:(id)arg1;
+ (BOOL)setCachedAvailableItemKinds:(id)arg1;
+ (void)setLastPromptAttemptDate:(id)arg1 forPromptWithIdentifier:(id)arg2;
+ (void)setPromptWithIdentifier:(id)arg1 needsDisplay:(BOOL)arg2;
- (id)_appleTVProductVersion;
- (void)_cacheKeyValueStoreValues;
- (id)_copyCarrierBundleEligibilityWithStatus:(id)arg1;
- (id)_copyKeyValueStoreValueForDomain:(id)arg1 key:(id)arg2;
- (id)_copyProductType;
- (int)_deviceClass;
- (long long)_deviceType;
- (long long)_deviceTypeForProductType:(id)arg1;
- (long long)_deviceTypeForUnknownAppleTV:(id)arg1;
- (long long)_deviceTypeForUnknownIPad:(id)arg1;
- (long long)_deviceTypeForUnknownIPhone:(id)arg1;
- (long long)_deviceTypeForUnknownIPod:(id)arg1;
- (id)_diskCapacityString;
- (id)_fairPlayDeviceTypeString;
- (BOOL)_getDeviceType:(unsigned int *)arg1 error:(id *)arg2;
- (void)_invalidateAutomaticDownloadKinds;
- (void)_invalidatePhoneNumber;
- (void)_invalidateSoftwareCUID;
- (BOOL)_is1080pCapable;
- (BOOL)_is720pCapable;
- (id)_newLegacyUserAgent:(BOOL *)arg1;
- (id)_newModernUserAgentWithClientName:(id)arg1 version:(id)arg2 isCachable:(BOOL *)arg3;
- (void)_postStoreFrontDidChangeNotification;
- (id)_productVersion;
- (void)_reloadPluggedInState;
- (int)_screenClass;
- (void)_updateAutomaticDownloadKinds:(id)arg1 withValue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_updateBatteryLevelFromService:(unsigned int)arg1;
- (id)_userAgentClientNameForAppleTVBundleID:(id)arg1;
- (id)_userAgentClientNameForBundleID:(id)arg1;
- (id)_userAgentClientNameForInfoPlist:(id)arg1;
- (id)_userAgentClientVersionForInfoPlist:(id)arg1 clientName:(id)arg2;
- (id)carrierBundleStatusForService:(long long)arg1;
- (id)copyStoreFrontRequestHeaders;
- (void)dealloc;
- (void)enableAllAutomaticDownloadKindsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAvailableItemKindsWithBlock:(CDUnknownBlockType)arg1;
- (void)getCarrierBundleStatusForService:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCellularNetworkingAllowedWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)getMachineIdentifier:(id *)arg1 otp:(id *)arg2 forAccountIdentifier:(id)arg3;
- (id)init;
- (BOOL)isStoreFrontIdentifierTransient;
- (void)loadStoreFrontWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)minusAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)reloadStoreFrontIdentifier;
- (void)sdk_loadStoreFrontIdentifier:(CDUnknownBlockType)arg1;
- (void)sdk_loadStorefrontCountryCode:(CDUnknownBlockType)arg1;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setCellularNetworkingAllowed:(BOOL)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2;
- (void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2 isTransient:(BOOL)arg3;
- (void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2;
- (void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2 isTransient:(BOOL)arg3;
- (void)setStoreFrontIdentifier:(id)arg1 forRequest:(id)arg2 response:(id)arg3 account:(id)arg4;
- (void)setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (void)setStoreFrontWithResponseHeaders:(id)arg1;
- (void)showPromptWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startPowerMonitoring;
- (void)stopPowerMonitoring;
- (BOOL)supportsDeviceCapability:(long long)arg1;
- (id)synchedStoreFrontIdentifier;
- (void)synchronizeAutomaticDownloadKinds;
- (void)unionAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)userAgentWithBundleIdentifier:(id)arg1 version:(id)arg2;
- (id)userAgentWithBundleRef:(struct __CFBundle *)arg1 isCachable:(BOOL *)arg2;
- (id)userAgentWithClientName:(id)arg1 version:(id)arg2;

@end

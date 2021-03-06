//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyPreferences/TUCallCapabilitiesDelegatePrivate-Protocol.h>

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString, TPSCarrierBundleController, TPSCloudCallingEmergencyAddressURLController, TPSCloudCallingThumperProvisioningURLController, TPSEncryptedIdentityClient, TUSenderIdentityCapabilities;

@interface TPSWiFiCallingController : NSObject <TUCallCapabilitiesDelegatePrivate>
{
    TPSCloudCallingEmergencyAddressURLController *_emergencyAddressURLController;
    TPSCloudCallingThumperProvisioningURLController *_thumperProvisioningURLController;
    TPSCarrierBundleController *_carrierBundleController;
    TPSEncryptedIdentityClient *_encryptedIdentityClient;
    NSDictionary *_encryptedIdentityInfo;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    TUSenderIdentityCapabilities *_subscriptionCapabilities;
}

@property (strong, nonatomic) TPSCarrierBundleController *carrierBundleController; // @synthesize carrierBundleController=_carrierBundleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) TPSCloudCallingEmergencyAddressURLController *emergencyAddressURLController; // @synthesize emergencyAddressURLController=_emergencyAddressURLController;
@property (strong, nonatomic) TPSEncryptedIdentityClient *encryptedIdentityClient; // @synthesize encryptedIdentityClient=_encryptedIdentityClient;
@property (copy, nonatomic) NSDictionary *encryptedIdentityInfo; // @synthesize encryptedIdentityInfo=_encryptedIdentityInfo;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *localizedCarrierName;
@property (strong, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities; // @synthesize subscriptionCapabilities=_subscriptionCapabilities;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEncryptedIdentity;
@property (readonly, nonatomic) BOOL supportsThumperCalling;
@property (readonly, nonatomic) BOOL supportsWiFiCalling;
@property (readonly, nonatomic) BOOL supportsWiFiEmergencyCalling;
@property (nonatomic, getter=isThumperCallingEnabled) BOOL thumperCallingEnabled;
@property (strong, nonatomic) TPSCloudCallingThumperProvisioningURLController *thumperProvisioningURLController; // @synthesize thumperProvisioningURLController=_thumperProvisioningURLController;
@property (nonatomic, getter=isWiFiCallingEnabled) BOOL wiFiCallingEnabled;
@property (nonatomic, getter=isWiFiCallingRoamingEnabled) BOOL wiFiCallingRoamingEnabled;

- (void).cxx_destruct;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
- (void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg1;

@end


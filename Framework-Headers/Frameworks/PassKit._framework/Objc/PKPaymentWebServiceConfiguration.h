//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSURL;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_configuration;
    NSNumber *_version;
    NSURL *_configurationURL;
}

@property (copy) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property (copy) NSURL *configurationURL; // @synthesize configurationURL=_configurationURL;
@property (readonly, weak) NSNumber *version; // @synthesize version=_version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_queue_region:(id)arg1;
- (id)_queue_regions;
- (BOOL)_queue_supportedForOSVersion:(id)arg1 inRegion:(id)arg2 deviceClass:(id)arg3 platform:(id)arg4;
- (id)brokerURLForRegion:(id)arg1;
- (BOOL)buddyManualProvisioningEnabledForRegion:(id)arg1;
- (BOOL)buddyProvisioningEnabledForRegion:(id)arg1;
- (BOOL)cameraFirstProvisioningEnabledForRegion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)findWithoutNumberEnabledForRegion:(id)arg1;
- (id)heroImageManifestURLForRegion:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 url:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)manualProvisioningEnabledForRegion:(id)arg1;
- (id)paymentServicesMerchantURLForRegion:(id)arg1;
- (id)paymentServicesURLForRegion:(id)arg1;
- (id)paymentSetupBrowsableProductTypesForRegion:(id)arg1;
- (id)paymentSetupFeaturedNetworksForRegion:(id)arg1;
- (id)primaryFeaturedNetworkForRegion:(id)arg1;
- (double)provisioningEnablementPercentageForRegion:(id)arg1;
- (BOOL)regionHasProvisioningEnablementPercentage:(id)arg1;
- (BOOL)remotePaymentsRequiredForVoiceover;
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2;
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3;
- (id)unsupportedWebPaymentConfigurations;

@end


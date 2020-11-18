//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDClientAuthorizationOracle, HDProfile, HDXPCClient, HKHealthStoreConfiguration, NSString, NSXPCConnection, _HKEntitlements;

@interface HDHealthStoreClient : NSObject
{
    HDXPCClient *_XPCClient;
    HDProfile *_profile;
    HDClientAuthorizationOracle *_authorizationOracle;
    HKHealthStoreConfiguration *_configuration;
    NSString *_sourceBundleIdentifier;
    NSString *_defaultSourceBundleIdentifier;
}

@property (readonly) HDXPCClient *XPCClient; // @synthesize XPCClient=_XPCClient;
@property (readonly) HDClientAuthorizationOracle *authorizationOracle; // @synthesize authorizationOracle=_authorizationOracle;
@property (readonly, copy) HKHealthStoreConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *defaultSourceBundleIdentifier; // @synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier;
@property (readonly) _HKEntitlements *entitlements;
@property (readonly) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly, copy) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;

- (void).cxx_destruct;
- (id)_watchKitAvailabilityFilter;
- (id)baseDataEntityEncodingOptions;
- (id)filterWithQueryFilter:(id)arg1 objectType:(id)arg2;
- (BOOL)hasEntitlement:(id)arg1;
- (BOOL)hasPrivateMetadataAccess;
- (BOOL)hasRequiredEntitlement:(id)arg1 error:(id *)arg2;
- (id)initWithXPCClient:(id)arg1 configuration:(id)arg2 profile:(id)arg3;
- (BOOL)shouldBypassAuthorization;
- (id)sourceVersionWithDaemon:(id)arg1;
- (id)valueForEntitlement:(id)arg1;
- (BOOL)verifyHealthRecordsPermissionGrantedWithError:(id *)arg1;

@end

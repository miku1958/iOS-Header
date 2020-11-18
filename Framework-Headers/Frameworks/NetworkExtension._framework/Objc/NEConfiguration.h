//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEProfilePayloadHandlerDelegate-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEAOVPN, NEContentFilter, NEPathController, NEProfileIngestionPayloadInfo, NEVPN, NEVPNApp, NSString, NSUUID;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying>
{
    long long _grade;
    NSUUID *_identifier;
    NSString *_application;
    NSString *_name;
    NSString *_applicationName;
    NSString *_applicationIdentifier;
    NSString *_externalIdentifier;
    NEVPN *_VPN;
    NEAOVPN *_alwaysOnVPN;
    NEVPNApp *_appVPN;
    NEContentFilter *_contentFilter;
    NEProfileIngestionPayloadInfo *_payloadInfo;
    NEPathController *_pathController;
}

@property (copy) NEVPN *VPN; // @synthesize VPN=_VPN;
@property (copy) NEAOVPN *alwaysOnVPN; // @synthesize alwaysOnVPN=_alwaysOnVPN;
@property (copy) NEVPNApp *appVPN; // @synthesize appVPN=_appVPN;
@property (copy) NSString *application; // @synthesize application=_application;
@property (copy) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (copy) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property (copy) NEContentFilter *contentFilter; // @synthesize contentFilter=_contentFilter;
@property (copy) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property (readonly) long long grade; // @synthesize grade=_grade;
@property (readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy) NSString *name; // @synthesize name=_name;
@property (copy) NEPathController *pathController; // @synthesize pathController=_pathController;
@property (copy) NEProfileIngestionPayloadInfo *payloadInfo; // @synthesize payloadInfo=_payloadInfo;
@property (readonly) NSString *pluginType;

+ (BOOL)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(struct __SCPreferences *)arg2;
+ (void)addError:(id)arg1 toList:(id)arg2;
+ (id)configurationWithProfilePayload:(id)arg1;
+ (id)configurationWithProfilePayload:(id)arg1 grade:(long long)arg2;
+ (struct __CFDictionary *)copyConfigurationForProtocol:(struct __CFString *)arg1 inService:(struct __SCNetworkService *)arg2;
+ (BOOL)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(struct __SCPreferences *)arg2;
+ (BOOL)setConfiguration:(struct __CFDictionary *)arg1 forProtocol:(struct __CFString *)arg2 inService:(struct __SCNetworkService *)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)applyChangesToSCServiceInPreferences:(struct __SCPreferences *)arg1;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (void)clearKeychainInDomain:(long long)arg1;
- (void)clearSystemKeychain;
- (void)clearUserKeychain;
- (id)configureAOVPNTunnelFromTunnelDict:(id)arg1 tunnelDict:(id)arg2 payloadBase:(id)arg3 interfaceType:(id)arg4;
- (BOOL)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4;
- (BOOL)configureL2TPWithPPPOptions:(id)arg1;
- (BOOL)configurePPPCommon:(id)arg1;
- (BOOL)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2;
- (BOOL)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3;
- (BOOL)configureVpnOnDemand:(id)arg1 vpnType:(id)arg2;
- (BOOL)configureVpnOnDemandRules:(id)arg1;
- (void)copyPasswordsFromSystemKeychain;
- (id)copyProfileDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithOptions:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateSignature;
- (id)getCertificates;
- (id)getConfigurationIdentifier;
- (id)getConfigurationProtocol;
- (id)getPendingCertificateInfo:(id)arg1;
- (id)getPendingCertificateUUIDs:(id)arg1;
- (id)getPendingCertificateUUIDsAOVpn:(id)arg1;
- (id)getPendingCertificateUUIDsAppVPN:(id)arg1;
- (id)getPendingCertificateUUIDsContentFilter:(id)arg1;
- (id)getPendingCertificateUUIDsInternal:(id)arg1;
- (id)getPendingCertificateUUIDsVPN:(id)arg1;
- (unsigned long long)hash;
- (BOOL)ingestDNSOptions:(id)arg1;
- (BOOL)ingestDisconnectOptions:(id)arg1;
- (BOOL)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3;
- (BOOL)ingestPPPData:(id)arg1 vnpType:(id)arg2;
- (BOOL)ingestPPPDict:(id)arg1;
- (BOOL)ingestProxyOptions:(id)arg1;
- (id)initFromSCService:(struct __SCNetworkService *)arg1;
- (id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithName:(id)arg1 grade:(long long)arg2;
- (id)initWithPathControllerPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSupportedBySC;
- (BOOL)needToUpdateKeychain;
- (BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
- (BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
- (BOOL)setCertificateContentFilter:(id)arg1;
- (BOOL)setCertificates:(id)arg1;
- (BOOL)setCertificatesAOVpn:(id)arg1;
- (BOOL)setCertificatesAppVPN:(id)arg1;
- (BOOL)setCertificatesVPN:(id)arg1;
- (BOOL)setConfigurationSharedSecret:(id)arg1;
- (BOOL)setConfigurationVPNPassword:(id)arg1;
- (BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
- (BOOL)setPayloadInfoIdentity:(id)arg1;
- (BOOL)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1;
- (BOOL)setPayloadInfoIdentityPIN:(id)arg1;
- (BOOL)setPayloadInfoIdentityProxy:(id)arg1;
- (BOOL)setPayloadInfoIdentityUserNameAndPassword:(id)arg1;
- (BOOL)setProfileInfo:(id)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1;
- (void)syncWithSystemKeychain;
- (void)syncWithUserKeychain;
- (BOOL)updateFromSCService:(struct __SCNetworkService *)arg1;
- (void)updateWithConfiguration:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEVPNProtocolIPSec.h>

@class NEVPNIKEv2SecurityAssociationParameters, NSArray, NSString;

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec
{
    BOOL _useConfigurationAttributeInternalIPSubnet;
    BOOL _disableMOBIKE;
    BOOL _disableRedirect;
    BOOL _enablePFS;
    BOOL _enableRevocationCheck;
    BOOL _strictRevocationCheck;
    BOOL _wakeForRekey;
    int _natKeepAliveOffloadEnable;
    int _natKeepAliveOffloadInterval;
    int _disableMOBIKERetryOnWake;
    long long _deadPeerDetectionRate;
    NSString *_serverCertificateIssuerCommonName;
    NSString *_serverCertificateCommonName;
    long long _certificateType;
    NEVPNIKEv2SecurityAssociationParameters *_IKESecurityAssociationParameters;
    NEVPNIKEv2SecurityAssociationParameters *_childSecurityAssociationParameters;
    NSArray *_IKESecurityAssociationParametersArray;
    NSArray *_childSecurityAssociationParametersArray;
    NSString *_providerBundleIdentifier;
    NSString *_pluginType;
}

@property (readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters; // @synthesize IKESecurityAssociationParameters=_IKESecurityAssociationParameters;
@property (strong) NSArray *IKESecurityAssociationParametersArray; // @synthesize IKESecurityAssociationParametersArray=_IKESecurityAssociationParametersArray;
@property long long certificateType; // @synthesize certificateType=_certificateType;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters; // @synthesize childSecurityAssociationParameters=_childSecurityAssociationParameters;
@property (strong) NSArray *childSecurityAssociationParametersArray; // @synthesize childSecurityAssociationParametersArray=_childSecurityAssociationParametersArray;
@property long long deadPeerDetectionRate; // @synthesize deadPeerDetectionRate=_deadPeerDetectionRate;
@property BOOL disableMOBIKE; // @synthesize disableMOBIKE=_disableMOBIKE;
@property int disableMOBIKERetryOnWake; // @synthesize disableMOBIKERetryOnWake=_disableMOBIKERetryOnWake;
@property BOOL disableRedirect; // @synthesize disableRedirect=_disableRedirect;
@property BOOL enablePFS; // @synthesize enablePFS=_enablePFS;
@property BOOL enableRevocationCheck; // @synthesize enableRevocationCheck=_enableRevocationCheck;
@property int natKeepAliveOffloadEnable; // @synthesize natKeepAliveOffloadEnable=_natKeepAliveOffloadEnable;
@property int natKeepAliveOffloadInterval; // @synthesize natKeepAliveOffloadInterval=_natKeepAliveOffloadInterval;
@property (readonly) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property (copy) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
@property (copy) NSString *serverCertificateCommonName; // @synthesize serverCertificateCommonName=_serverCertificateCommonName;
@property (copy) NSString *serverCertificateIssuerCommonName; // @synthesize serverCertificateIssuerCommonName=_serverCertificateIssuerCommonName;
@property BOOL strictRevocationCheck; // @synthesize strictRevocationCheck=_strictRevocationCheck;
@property BOOL useConfigurationAttributeInternalIPSubnet; // @synthesize useConfigurationAttributeInternalIPSubnet=_useConfigurationAttributeInternalIPSubnet;
@property BOOL wakeForRekey; // @synthesize wakeForRekey=_wakeForRekey;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)clone;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (void)setPluginType:(id)arg1;

@end


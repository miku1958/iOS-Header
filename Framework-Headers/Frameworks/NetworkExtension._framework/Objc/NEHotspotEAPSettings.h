//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface NEHotspotEAPSettings : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _tlsClientCertificateRequired;
    NSArray *_supportedEAPTypes;
    NSString *_username;
    NSString *_outerIdentity;
    long long _ttlsInnerAuthenticationType;
    NSString *_password;
    NSArray *_trustedServerNames;
    long long _preferredTLSVersion;
    NSArray *_clientTrustChainReference;
    NSData *_identityReference;
    NSArray *_trustedServerCertificateReferences;
}

@property (copy) NSArray *clientTrustChainReference; // @synthesize clientTrustChainReference=_clientTrustChainReference;
@property (copy) NSData *identityReference; // @synthesize identityReference=_identityReference;
@property (copy) NSString *outerIdentity; // @synthesize outerIdentity=_outerIdentity;
@property (copy) NSString *password; // @synthesize password=_password;
@property long long preferredTLSVersion; // @synthesize preferredTLSVersion=_preferredTLSVersion;
@property (copy) NSArray *supportedEAPTypes; // @synthesize supportedEAPTypes=_supportedEAPTypes;
@property (getter=isTLSClientCertificateRequired) BOOL tlsClientCertificateRequired; // @synthesize tlsClientCertificateRequired=_tlsClientCertificateRequired;
@property (copy) NSArray *trustedServerCertificateReferences; // @synthesize trustedServerCertificateReferences=_trustedServerCertificateReferences;
@property (copy) NSArray *trustedServerNames; // @synthesize trustedServerNames=_trustedServerNames;
@property long long ttlsInnerAuthenticationType; // @synthesize ttlsInnerAuthenticationType=_ttlsInnerAuthenticationType;
@property (copy) NSString *username; // @synthesize username=_username;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)setIdentity:(struct __SecIdentity *)arg1;
- (BOOL)setTrustedServerCertificates:(id)arg1;

@end


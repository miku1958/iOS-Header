//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEHotspotEAPSettings, NEHotspotHS20Settings, NSNumber, NSString;

@interface NEHotspotConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _joinOnce;
    BOOL _hidden;
    BOOL _useSSIDPrefix;
    NSString *_SSID;
    NSString *_SSIDPrefix;
    NSNumber *_lifeTimeInDays;
    long long _securityType;
    NSString *_passphrase;
    NEHotspotEAPSettings *_eapSettings;
    NEHotspotHS20Settings *_hs20Settings;
}

@property (readonly) NSString *SSID; // @synthesize SSID=_SSID;
@property (readonly) NSString *SSIDPrefix; // @synthesize SSIDPrefix=_SSIDPrefix;
@property (copy) NEHotspotEAPSettings *eapSettings; // @synthesize eapSettings=_eapSettings;
@property BOOL hidden; // @synthesize hidden=_hidden;
@property (copy) NEHotspotHS20Settings *hs20Settings; // @synthesize hs20Settings=_hs20Settings;
@property BOOL joinOnce; // @synthesize joinOnce=_joinOnce;
@property (copy) NSNumber *lifeTimeInDays; // @synthesize lifeTimeInDays=_lifeTimeInDays;
@property (copy) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property long long securityType; // @synthesize securityType=_securityType;
@property BOOL useSSIDPrefix; // @synthesize useSSIDPrefix=_useSSIDPrefix;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)buildClientTrustChainReference:(struct __SecIdentity *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHS20Settings:(id)arg1 eapSettings:(id)arg2;
- (id)initWithSSID:(id)arg1;
- (id)initWithSSID:(id)arg1 eapSettings:(id)arg2;
- (id)initWithSSID:(id)arg1 passphrase:(id)arg2 isWEP:(BOOL)arg3;
- (id)initWithSSIDPrefix:(id)arg1;
- (id)initWithSSIDPrefix:(id)arg1 passphrase:(id)arg2 isWEP:(BOOL)arg3;
- (BOOL)isWEPPassphraseValid;
- (long long)validate;
- (BOOL)validateClientTrustChainReference;
- (BOOL)validateEAPSettings;
- (BOOL)validateSecIdentityReference:(BOOL)arg1;
- (BOOL)validateTrustedServerCertificateReferences;

@end

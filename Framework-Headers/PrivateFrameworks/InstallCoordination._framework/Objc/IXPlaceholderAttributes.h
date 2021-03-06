//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSCopying-Protocol.h>
#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface IXPlaceholderAttributes : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _launchProhibited;
    BOOL _watchOnlyApp;
    BOOL _runsIndependentlyOfCompanionApp;
    BOOL _arcadeApp;
    NSString *_bundleVersion;
    NSDictionary *_extensionDictionary;
    NSDictionary *_exAppExtensionAttributes;
    NSString *_minimumOSVersion;
    NSDictionary *_requiredDeviceCapabilities;
    NSArray *_sbAppTags;
    NSArray *_lsCounterpartIdentifiers;
    NSString *_sbIconMasqueradeIdentifier;
    NSString *_companionBundleIdentifierForWatchApp;
}

@property (nonatomic) BOOL arcadeApp; // @synthesize arcadeApp=_arcadeApp;
@property (copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property (copy, nonatomic) NSString *companionBundleIdentifierForWatchApp; // @synthesize companionBundleIdentifierForWatchApp=_companionBundleIdentifierForWatchApp;
@property (copy, nonatomic) NSDictionary *exAppExtensionAttributes; // @synthesize exAppExtensionAttributes=_exAppExtensionAttributes;
@property (copy, nonatomic) NSDictionary *extensionDictionary; // @synthesize extensionDictionary=_extensionDictionary;
@property (nonatomic) BOOL launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property (copy, nonatomic) NSArray *lsCounterpartIdentifiers; // @synthesize lsCounterpartIdentifiers=_lsCounterpartIdentifiers;
@property (copy, nonatomic) NSString *minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property (copy, nonatomic) NSDictionary *requiredDeviceCapabilities; // @synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities;
@property (nonatomic) BOOL runsIndependentlyOfCompanionApp; // @synthesize runsIndependentlyOfCompanionApp=_runsIndependentlyOfCompanionApp;
@property (copy, nonatomic) NSArray *sbAppTags; // @synthesize sbAppTags=_sbAppTags;
@property (copy, nonatomic) NSString *sbIconMasqueradeIdentifier; // @synthesize sbIconMasqueradeIdentifier=_sbIconMasqueradeIdentifier;
@property (nonatomic) BOOL watchOnlyApp; // @synthesize watchOnlyApp=_watchOnlyApp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_plistKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)infoPlistContent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfoPlistDictionary:(id)arg1;
- (id)initWithInfoPlistFromBundle:(struct __CFBundle *)arg1 error:(id *)arg2;
- (id)initWithInfoPlistFromBundleURL:(id)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setRequiredDeviceCapabilitiesWithArray:(id)arg1;

@end


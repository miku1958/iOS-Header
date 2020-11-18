//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface PKPlugInCore : NSObject
{
    NSString *_identifier;
    NSString *_originalIdentifier;
    NSURL *_url;
    NSURL *_containingUrl;
    NSString *_containingBundleIdentifier;
    BOOL _onSystemVolume;
    NSDictionary *_bundleInfoDictionary;
    NSDictionary *_plugInDictionary;
    NSDictionary *_entitlements;
    unsigned long long _hubProtocolVersion;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSString *_localizedContainingName;
    NSDictionary *_localizedFileProviderActionNames;
    NSDictionary *_annotations;
    long long _lastModified;
    NSUUID *_uuid;
    NSData *_cdhash;
    NSString *_requirement;
    NSURL *_dataContainerURL;
    unsigned int _extensionPointPlatform;
    BOOL _isRBManaged;
    NSUUID *_discoveryInstanceUUID;
}

@property (strong) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property (readonly) NSDictionary *attributes;
@property (strong) NSDictionary *bundleInfoDictionary; // @synthesize bundleInfoDictionary=_bundleInfoDictionary;
@property (strong) NSData *cdhash; // @synthesize cdhash=_cdhash;
@property (copy) NSString *containingBundleIdentifier; // @synthesize containingBundleIdentifier=_containingBundleIdentifier;
@property (readonly) NSString *containingPath;
@property (copy) NSURL *containingUrl; // @synthesize containingUrl=_containingUrl;
@property (readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property (readonly) NSUUID *discoveryInstanceUUID; // @synthesize discoveryInstanceUUID=_discoveryInstanceUUID;
@property (strong) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property (readonly) unsigned int extensionPointPlatform; // @synthesize extensionPointPlatform=_extensionPointPlatform;
@property unsigned long long hubProtocolVersion; // @synthesize hubProtocolVersion=_hubProtocolVersion;
@property (strong) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) BOOL isAppExtension;
@property (readonly) BOOL isData;
@property (readonly) BOOL isDedicated;
@property (readonly) BOOL isHybrid;
@property (readonly) BOOL isMultiplexed;
@property BOOL isRBManaged; // @synthesize isRBManaged=_isRBManaged;
@property long long lastModified; // @synthesize lastModified=_lastModified;
@property (strong) NSString *localizedContainingName; // @synthesize localizedContainingName=_localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames; // @synthesize localizedFileProviderActionNames=_localizedFileProviderActionNames;
@property (readonly) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (readonly) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
@property (readonly) BOOL oldStyle;
@property BOOL onSystemVolume; // @synthesize onSystemVolume=_onSystemVolume;
@property (strong) NSString *originalIdentifier; // @synthesize originalIdentifier=_originalIdentifier;
@property (readonly) NSString *path;
@property (strong) NSDictionary *plugInDictionary; // @synthesize plugInDictionary=_plugInDictionary;
@property (readonly) NSString *principalSpec;
@property (readonly) id protocolSpec;
@property (strong) NSString *requirement; // @synthesize requirement=_requirement;
@property (readonly) NSString *sdkSpec;
@property (readonly) NSDate *timestamp;
@property (strong) NSURL *url; // @synthesize url=_url;
@property (strong) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (readonly) NSString *version;

+ (id)readSDKDictionary:(id)arg1 forPlatform:(unsigned int)arg2;
- (void).cxx_destruct;
- (void)_loadLocalizedFileProviderActionNames;
- (void)_loadLocalizedNames;
- (id)_localizedFileProviderActionNamesForPKDict:(id)arg1 fromBundle:(id)arg2;
- (id)attribute:(id)arg1;
- (id)augmentInterface:(id)arg1;
- (void)canonicalize;
- (id)description;
- (id)diagnose;
- (id)embeddedCodePath;
- (id)embeddedProtocolSpec;
- (id)export:(id *)arg1;
- (unsigned long long)hash;
- (id)infoKey:(id)arg1;
- (id)init;
- (id)initWithForm:(id)arg1;
- (id)initWithName:(id)arg1 extensionPointPlatform:(unsigned int)arg2 url:(id)arg3 bundleInfo:(id)arg4 uuid:(id)arg5 discoveryInstanceUUID:(id)arg6 extensionPointCache:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (void)localizedInfoDictionaryForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)mergeSDKDictionary:(id)arg1 intoExtensionDictionary:(id)arg2;
- (id)mergeSharedResources:(id)arg1 into:(id)arg2;
- (id)normalizeInfoDictionary:(id)arg1;
- (id)pluginKey:(id)arg1;
- (id)resolveSDKWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2;
- (id)sdkDictionaryWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2;
- (id)sdkOnlyKeyPaths;
- (void)setAnnotation:(id)arg1 value:(id)arg2;
- (BOOL)setDictionaries:(id)arg1;
- (BOOL)setupWithForm:(id)arg1;
- (BOOL)setupWithName:(id)arg1 extensionPointPlatform:(unsigned int)arg2 url:(id)arg3 bundleInfo:(id)arg4 uuid:(id)arg5 discoveryInstanceUUID:(id)arg6 extensionPointCache:(id)arg7;
- (void)updateFromForm:(id)arg1;
- (BOOL)useBundle:(id)arg1 error:(id *)arg2;

@end

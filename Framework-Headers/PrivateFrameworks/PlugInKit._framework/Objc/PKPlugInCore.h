//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface PKPlugInCore : NSObject
{
    BOOL _onSystemVolume;
    NSDictionary *_topDictionary;
    NSDictionary *_plugInDictionary;
    NSString *_identifier;
    NSString *_originalIdentifier;
    NSURL *_url;
    NSURL *_containingUrl;
    NSDictionary *_bundleInfoDictionary;
    unsigned long long _hubProtocolVersion;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSString *_localizedContainingName;
    NSDictionary *_annotations;
    long long _lastModified;
    NSUUID *_uuid;
    NSData *_cdhash;
    NSString *_requirement;
}

@property (strong) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property (readonly) NSDictionary *attributes;
@property (strong) NSDictionary *bundleInfoDictionary; // @synthesize bundleInfoDictionary=_bundleInfoDictionary;
@property (strong) NSData *cdhash; // @synthesize cdhash=_cdhash;
@property (readonly) NSString *containingPath;
@property (strong) NSURL *containingUrl; // @synthesize containingUrl=_containingUrl;
@property unsigned long long hubProtocolVersion; // @synthesize hubProtocolVersion=_hubProtocolVersion;
@property (strong) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) BOOL isAppExtension;
@property (readonly) BOOL isData;
@property (readonly) BOOL isDedicated;
@property (readonly) BOOL isHybrid;
@property (readonly) BOOL isMultiplexed;
@property long long lastModified; // @synthesize lastModified=_lastModified;
@property (strong) NSString *localizedContainingName; // @synthesize localizedContainingName=_localizedContainingName;
@property (strong) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (strong) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
@property (readonly) BOOL oldStyle;
@property BOOL onSystemVolume; // @synthesize onSystemVolume=_onSystemVolume;
@property (strong) NSString *originalIdentifier; // @synthesize originalIdentifier=_originalIdentifier;
@property (readonly) NSString *path;
@property (strong) NSDictionary *plugInDictionary; // @synthesize plugInDictionary=_plugInDictionary;
@property (readonly) id protocolSpec;
@property (strong) NSString *requirement; // @synthesize requirement=_requirement;
@property (readonly) NSString *sdkSpec;
@property (readonly) NSDate *timestamp;
@property (strong) NSDictionary *topDictionary; // @synthesize topDictionary=_topDictionary;
@property (strong) NSURL *url; // @synthesize url=_url;
@property (strong) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (readonly) NSString *version;

+ (id)readSDKDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)augmentInterface:(id)arg1;
- (void)canonicalize;
- (id)diagnose;
- (id)embeddedCodePath;
- (id)embeddedProtocolSpec;
- (id)export:(id *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithForm:(id)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)mergeDictionary:(id)arg1 into:(id)arg2;
- (id)mergeSharedResources:(id)arg1 into:(id)arg2;
- (id)normalizeInfoDictionary:(id)arg1;
- (void)resolveSDK;
- (BOOL)sdkOverridesKey:(id)arg1;
- (void)setAnnotation:(id)arg1 value:(id)arg2;
- (BOOL)setDictionaries:(id)arg1;
- (BOOL)setupWithForm:(id)arg1;
- (BOOL)setupWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5;
- (void)updateFromForm:(id)arg1;

@end


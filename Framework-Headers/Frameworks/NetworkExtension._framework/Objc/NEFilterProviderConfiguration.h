//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface NEFilterProviderConfiguration : NSObject <NEConfigurationValidating, NSSecureCoding, NSCopying>
{
    BOOL _filterBrowsers;
    BOOL _filterSockets;
    BOOL _filterPackets;
    BOOL _controlProviderInitialized;
    NSDictionary *_vendorConfiguration;
    NSString *_serverAddress;
    NSString *_username;
    NSString *_organization;
    NSData *_passwordReference;
    NSData *_identityReference;
    NSString *_filterDataProviderBundleIdentifier;
    NSString *_filterPacketProviderBundleIdentifier;
    NSString *_pluginType;
    NSString *_dataProviderDesignatedRequirement;
    NSString *_packetProviderDesignatedRequirement;
    NSString *_keychainAccessGroup;
}

@property BOOL controlProviderInitialized; // @synthesize controlProviderInitialized=_controlProviderInitialized;
@property (copy) NSString *dataProviderDesignatedRequirement; // @synthesize dataProviderDesignatedRequirement=_dataProviderDesignatedRequirement;
@property BOOL filterBrowsers; // @synthesize filterBrowsers=_filterBrowsers;
@property (copy) NSString *filterDataProviderBundleIdentifier; // @synthesize filterDataProviderBundleIdentifier=_filterDataProviderBundleIdentifier;
@property (copy) NSString *filterPacketProviderBundleIdentifier; // @synthesize filterPacketProviderBundleIdentifier=_filterPacketProviderBundleIdentifier;
@property BOOL filterPackets; // @synthesize filterPackets=_filterPackets;
@property BOOL filterSockets; // @synthesize filterSockets=_filterSockets;
@property (copy) NSData *identityReference; // @synthesize identityReference=_identityReference;
@property (copy) NSString *keychainAccessGroup; // @synthesize keychainAccessGroup=_keychainAccessGroup;
@property (copy) NSString *organization; // @synthesize organization=_organization;
@property (copy) NSString *packetProviderDesignatedRequirement; // @synthesize packetProviderDesignatedRequirement=_packetProviderDesignatedRequirement;
@property (copy) NSData *passwordReference; // @synthesize passwordReference=_passwordReference;
@property (copy) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property (copy) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property (copy) NSString *username; // @synthesize username=_username;
@property (copy) NSDictionary *vendorConfiguration; // @synthesize vendorConfiguration=_vendorConfiguration;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


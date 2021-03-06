//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEVPNProtocol.h>

@class NSDictionary, NSString;

@interface NEDNSProxyProviderProtocol : NEVPNProtocol
{
    NSDictionary *_providerConfiguration;
    NSString *_providerBundleIdentifier;
    NSString *_pluginType;
    NSString *_designatedRequirement;
}

@property (copy) NSString *designatedRequirement; // @synthesize designatedRequirement=_designatedRequirement;
@property (copy) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property (copy) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
@property (copy) NSDictionary *providerConfiguration; // @synthesize providerConfiguration=_providerConfiguration;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;

@end


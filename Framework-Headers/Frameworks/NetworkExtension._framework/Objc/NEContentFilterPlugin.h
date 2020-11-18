//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface NEContentFilterPlugin : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    BOOL _filterBrowsers;
    BOOL _filterSockets;
    NSDictionary *_vendorConfiguration;
    NSString *_serverAddress;
    NSString *_username;
    NSString *_organization;
    NSData *_passwordReference;
    NSData *_identityReference;
    NSString *_pluginType;
}

@property BOOL filterBrowsers; // @synthesize filterBrowsers=_filterBrowsers;
@property BOOL filterSockets; // @synthesize filterSockets=_filterSockets;
@property (copy) NSData *identityReference; // @synthesize identityReference=_identityReference;
@property (copy) NSString *organization; // @synthesize organization=_organization;
@property (copy) NSData *passwordReference; // @synthesize passwordReference=_passwordReference;
@property (strong) NSString *pluginType; // @synthesize pluginType=_pluginType;
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
- (id)initWithPluginType:(id)arg1;

@end

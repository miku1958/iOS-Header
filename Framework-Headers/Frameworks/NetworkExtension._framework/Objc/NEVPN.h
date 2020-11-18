//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEVPNProtocol, NSArray;

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    BOOL _enabled;
    BOOL _onDemandEnabled;
    NSArray *_onDemandRules;
    NEVPNProtocol *_protocol;
    NSArray *_exceptionApps;
}

@property (getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (copy) NSArray *exceptionApps; // @synthesize exceptionApps=_exceptionApps;
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled; // @synthesize onDemandEnabled=_onDemandEnabled;
@property (copy) NSArray *onDemandRules; // @synthesize onDemandRules=_onDemandRules;
@property (copy) NEVPNProtocol *protocol; // @synthesize protocol=_protocol;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyProfileDictionaryWithCertificateUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


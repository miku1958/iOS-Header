//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NEIPv4Settings, NEIPv6Settings, NSNumber;

@interface NEPacketTunnelNetworkSettings : NETunnelNetworkSettings
{
    NEIPv4Settings *_IPv4Settings;
    NEIPv6Settings *_IPv6Settings;
    NSNumber *_tunnelOverheadBytes;
    NSNumber *_MTU;
}

@property (copy) NEIPv4Settings *IPv4Settings; // @synthesize IPv4Settings=_IPv4Settings;
@property (copy) NEIPv6Settings *IPv6Settings; // @synthesize IPv6Settings=_IPv6Settings;
@property (copy) NSNumber *MTU; // @synthesize MTU=_MTU;
@property (copy) NSNumber *tunnelOverheadBytes; // @synthesize tunnelOverheadBytes=_tunnelOverheadBytes;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


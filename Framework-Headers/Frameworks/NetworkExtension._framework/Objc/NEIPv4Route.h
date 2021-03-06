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

@class NSString;

@interface NEIPv4Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    NSString *_destinationAddress;
    NSString *_destinationSubnetMask;
    NSString *_gatewayAddress;
}

@property (readonly) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property (readonly) NSString *destinationSubnetMask; // @synthesize destinationSubnetMask=_destinationSubnetMask;
@property (copy) NSString *gatewayAddress; // @synthesize gatewayAddress=_gatewayAddress;

+ (id)defaultRoute;
+ (void)initGlobals;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationAddress:(id)arg1 subnetMask:(id)arg2;
- (BOOL)isDefaultRoute;

@end


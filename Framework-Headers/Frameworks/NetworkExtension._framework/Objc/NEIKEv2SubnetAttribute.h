//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2ConfigurationAttribute.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NWAddressEndpoint;

@interface NEIKEv2SubnetAttribute : NEIKEv2ConfigurationAttribute <NSCopying>
{
    unsigned char _prefix;
    unsigned int _ipv4SubnetMask;
    NWAddressEndpoint *_address;
    unsigned long long _customType;
}

@property (strong) NWAddressEndpoint *address; // @synthesize address=_address;
@property (nonatomic) unsigned long long customType; // @synthesize customType=_customType;
@property unsigned int ipv4SubnetMask; // @synthesize ipv4SubnetMask=_ipv4SubnetMask;
@property unsigned char prefix; // @synthesize prefix=_prefix;
@property (readonly) NWAddressEndpoint *subnetMaskAddress;

+ (id)copyTypeDescription;
- (void).cxx_destruct;
- (unsigned long long)attributeType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 ipv4SubnetMask:(unsigned int)arg4;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 prefix:(unsigned char)arg4;
- (id)initWithAddress:(id)arg1 ipv4SubnetMask:(unsigned int)arg2;
- (id)initWithAddress:(id)arg1 prefix:(unsigned char)arg2;

@end

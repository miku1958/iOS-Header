//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/NSCopying-Protocol.h>

@interface TSBonjourIPv6Address : NSObject <NSCopying>
{
    unsigned char _ipv6Address[16];
    unsigned char _linkLayerAddress[6];
    BOOL _hasLinkLayerAddress;
}

@property (nonatomic) BOOL hasLinkLayerAddress; // @synthesize hasLinkLayerAddress=_hasLinkLayerAddress;
@property (readonly, nonatomic) const char *ipv6Address;
@property (readonly, nonatomic) const char *linkLayerAddress; // @dynamic linkLayerAddress;

+ (BOOL)getLinkLayerAddress:(char *)arg1 forIPv6Address:(const char *)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)getLinkLayerAddressError:(id *)arg1;
- (id)init;
- (id)initWithIPv6Address:(const char *)arg1;
- (void)pokeDestinationAtPort:(unsigned short)arg1 onInterfaceIndex:(unsigned int)arg2;

@end


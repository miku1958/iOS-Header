//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSSockAddrWrapper, NSData, NSString;

@interface IDSInterfaceAddress : NSObject
{
    IDSSockAddrWrapper *_address;
    IDSSockAddrWrapper *_external;
    IDSSockAddrWrapper *_netmask;
    IDSSockAddrWrapper *_destination;
    NSString *_name;
    unsigned int _index;
    NSString *_delegatedName;
    unsigned int _delegatedIndex;
    NSData *_bssid;
    BOOL _AWDL;
    BOOL _Cellular;
    BOOL _temporary;
}

@property (readonly, getter=isAWDL) BOOL AWDL; // @synthesize AWDL=_AWDL;
@property (readonly, getter=isCellular) BOOL Cellular; // @synthesize Cellular=_Cellular;
@property (readonly) unsigned long long IPVersion;
@property (readonly) IDSSockAddrWrapper *address; // @synthesize address=_address;
@property (readonly) NSData *bssid; // @synthesize bssid=_bssid;
@property (readonly) unsigned int delegatedIndex; // @synthesize delegatedIndex=_delegatedIndex;
@property (readonly) NSString *delegatedName; // @synthesize delegatedName=_delegatedName;
@property (readonly) IDSSockAddrWrapper *destination; // @synthesize destination=_destination;
@property (copy) IDSSockAddrWrapper *external; // @synthesize external=_external;
@property (readonly) unsigned int index; // @synthesize index=_index;
@property (readonly) NSString *name; // @synthesize name=_name;
@property (readonly) IDSSockAddrWrapper *netmask; // @synthesize netmask=_netmask;
@property (readonly, getter=isTemporaryIPv6) BOOL temporary; // @synthesize temporary=_temporary;

+ (id)BSSIDWithInterfaceName:(id)arg1;
+ (id)interfaceAddress:(struct ifaddrs *)arg1 eflags:(unsigned long long)arg2 v6flags:(int)arg3 iftype:(int)arg4;
+ (id)interfaceAddressWithTransmittedBytes:(char *)arg1 length:(long long)arg2 withLocalInterfaceName:(id)arg3;
- (void).cxx_destruct;
- (id)description;
- (long long)getTransmittableBytes:(char *)arg1 withPrefixByte:(unsigned char)arg2;
- (id)initWithInterfaceAddress:(struct ifaddrs *)arg1 bflags:(unsigned char)arg2 bssid:(char *)arg3 bssidLength:(unsigned char)arg4;

@end


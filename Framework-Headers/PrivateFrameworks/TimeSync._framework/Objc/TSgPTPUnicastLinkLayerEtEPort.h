//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSgPTPFDEtEPort.h>

@interface TSgPTPUnicastLinkLayerEtEPort : TSgPTPFDEtEPort
{
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andMACAddress:(char *)arg2;
- (void)dealloc;
- (id)destinationAddressString;
- (id)initWithInterfaceName:(id)arg1 andMACAddress:(char *)arg2;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (long long)portType;
- (id)sourceAddressString;

@end


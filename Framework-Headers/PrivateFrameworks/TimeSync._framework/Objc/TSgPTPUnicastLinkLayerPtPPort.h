//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSgPTPFDPtPPort.h>

@interface TSgPTPUnicastLinkLayerPtPPort : TSgPTPFDPtPPort
{
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andMACAddress:(char *)arg2;
- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (void)dealloc;
- (id)initWithInterfaceName:(id)arg1 andMACAddress:(char *)arg2;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (long long)portType;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSgPTPFDPtPPort.h>

@interface TSgPTPUnicastUDPv6PtPPort : TSgPTPFDPtPPort
{
}

+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char *)arg2;
- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (id)initWithInterfaceName:(id)arg1 andIPv6Address:(char *)arg2;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(id)arg1;
- (int)portType;

@end

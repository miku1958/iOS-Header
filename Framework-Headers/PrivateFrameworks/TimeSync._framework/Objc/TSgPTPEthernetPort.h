//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSgPTPFDPtPPort.h>

@class NSString;

@interface TSgPTPEthernetPort : TSgPTPFDPtPPort
{
    NSString *_interfaceName;
}

@property (readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
- (void)dealloc;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithMatchingDictionary:(id)arg1;

@end

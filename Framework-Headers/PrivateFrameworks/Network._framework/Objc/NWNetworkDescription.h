//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;

@interface NWNetworkDescription : NSObject
{
    NSSet *_interfaceTypeOptions;
    NSSet *_ssidOptions;
    NSSet *_dnsSearchDomainOptions;
    NSSet *_dnsServerAddressOptions;
    long long _roamingPreference;
    NSURL *_probeURL;
    long long _state;
}

@property (copy) NSSet *dnsSearchDomainOptions; // @synthesize dnsSearchDomainOptions=_dnsSearchDomainOptions;
@property (copy) NSSet *dnsServerAddressOptions; // @synthesize dnsServerAddressOptions=_dnsServerAddressOptions;
@property (copy) NSSet *interfaceTypeOptions; // @synthesize interfaceTypeOptions=_interfaceTypeOptions;
@property (readonly, nonatomic) NSString *privateDescription;
@property (copy) NSURL *probeURL; // @synthesize probeURL=_probeURL;
@property long long roamingPreference; // @synthesize roamingPreference=_roamingPreference;
@property (copy) NSSet *ssidOptions; // @synthesize ssidOptions=_ssidOptions;
@property long long state; // @synthesize state=_state;

+ (long long)getNewStateFromPathMatch:(BOOL)arg1 oldState:(long long)arg2 probeExists:(BOOL)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesPath:(id)arg1;
- (void)updateStateWithPath:(id)arg1;

@end


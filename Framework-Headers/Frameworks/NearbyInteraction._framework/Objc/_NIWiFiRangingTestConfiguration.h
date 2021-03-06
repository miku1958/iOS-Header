//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearbyInteraction/NIConfiguration.h>

@class NIDiscoveryToken, NSDictionary;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration
{
    NIDiscoveryToken *_peerDiscoveryToken;
    NSDictionary *_parameters;
}

@property (readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (readonly, copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken; // @synthesize peerDiscoveryToken=_peerDiscoveryToken;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiscoveryToken:(id)arg1 wifiRangingParameters:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end


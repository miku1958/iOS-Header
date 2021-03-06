//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMNetworkRouterProfile.h>

@class NSString;

@interface HMNetworkRouterProfile (HFAdditions)

@property (readonly, nonatomic) BOOL hf_isCableOrSatelliteNotConnected;
@property (readonly, nonatomic) BOOL hf_isConnected;
@property (readonly, nonatomic) BOOL hf_isReady;
@property (readonly, nonatomic) BOOL hf_isStatusKnown;
@property (readonly, copy, nonatomic) NSString *hf_statusLocalizedDescription;

- (id)hf_iconDescriptor;
@end


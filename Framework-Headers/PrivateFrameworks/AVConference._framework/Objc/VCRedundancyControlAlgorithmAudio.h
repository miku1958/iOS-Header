//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCRedundancyControlAlgorithm-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudio : NSObject <VCRedundancyControlAlgorithm>
{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    double _packetLossPercentageIncreaseThresholds[3];
    double _packetLossPercentageDecreaseThresholds[3];
    BOOL _isPacketLossIncreasing;
    double _packetLossPercentage;
    double _packetLossPercentageThreshold;
    unsigned int _burstLossPacketCount;
    BOOL _isUplinkRecentlyCongested;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property (readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
@property (readonly) Class superclass;

- (void)computeRedundancyInfo;
- (id)init;
- (unsigned int)updateRedundancyPercentageWithPLRThresholds:(double *)arg1;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_bae76c55)arg1;

@end


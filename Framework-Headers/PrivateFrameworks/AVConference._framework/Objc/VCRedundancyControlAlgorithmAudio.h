//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCRedundancyControlAlgorithm-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudio : NSObject <VCRedundancyControlAlgorithm>
{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    unsigned int _packetLossPercentageIncreaseThresholds[3];
    unsigned int _packetLossPercentageDecreaseThresholds[3];
    BOOL _isPacketLossIncreasing;
    unsigned int _packetLossPercentage;
    unsigned int _packetLossPercentageThreshold;
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
- (unsigned int)updateRedundancyPercentageWithPLRThresholds:(unsigned int *)arg1;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_5cb394a5)arg1;

@end


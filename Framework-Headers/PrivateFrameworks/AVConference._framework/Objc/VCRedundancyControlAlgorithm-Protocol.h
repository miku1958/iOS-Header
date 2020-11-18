//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCRedundancyControlAlgorithm <NSObject>

@property (readonly, nonatomic) double redundancyInterval;
@property (readonly, nonatomic) unsigned int redundancyPercentage;

- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_5cb394a5)arg1;
@end

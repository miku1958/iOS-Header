//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideoImpressionTracking <NSObject>

@property (readonly, nonatomic) double impressionThreshold;
@property (readonly, nonatomic, getter=hasPassedImpressionThreshold) BOOL passedImpressionThreshold;
@property (readonly, nonatomic) unsigned long long quartile;
@property (copy, nonatomic, setter=uponQuartileImpression:) CDUnknownBlockType quartileImpressionBlock;
@property (copy, nonatomic, setter=uponThresholdImpression:) CDUnknownBlockType thresholdImpressionBlock;

@end

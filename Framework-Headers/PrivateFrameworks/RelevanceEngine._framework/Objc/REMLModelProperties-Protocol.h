//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REExportedInterface-Protocol.h>

@class NSString;

@protocol REMLModelProperties <REExportedInterface>

@property (readonly, nonatomic) BOOL allowsExploreExploit;
@property (readonly, nonatomic) float averagePrediction;
@property (readonly, nonatomic) float exploreExploitModulator;
@property (readonly, nonatomic) unsigned long long featureBitWidth;
@property (readonly, nonatomic) long long getNumberOfCoordinates;
@property (readonly, nonatomic) unsigned long long maxFeatureCount;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) float normalizedEntropy;
@property (readonly, nonatomic) float priorMean;
@property (readonly, nonatomic) float simulationExploreExploitModulator;
@property (readonly, nonatomic) unsigned long long totalExampleCount;
@property (readonly, nonatomic) unsigned long long totalPositiveCount;

@end


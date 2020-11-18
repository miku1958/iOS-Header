//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface CSEndpointerMetrics : NSObject
{
    double _totalAudioRecorded;
    NSArray *_featuresAtEndpoint;
    long long _endpointerType;
    NSDictionary *_serverFeatureLatencyDistribution;
    NSDictionary *_additionalMetrics;
}

@property (strong, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
@property (nonatomic) long long endpointerType; // @synthesize endpointerType=_endpointerType;
@property (strong, nonatomic) NSArray *featuresAtEndpoint; // @synthesize featuresAtEndpoint=_featuresAtEndpoint;
@property (strong, nonatomic) NSDictionary *serverFeatureLatencyDistribution; // @synthesize serverFeatureLatencyDistribution=_serverFeatureLatencyDistribution;
@property (nonatomic) double totalAudioRecorded; // @synthesize totalAudioRecorded=_totalAudioRecorded;

- (void).cxx_destruct;
- (id)initWithTotalAudioRecorded:(double)arg1 featuresAtEndpoint:(id)arg2 endpointerType:(long long)arg3 serverFeatureLatencyDistribution:(id)arg4 additionalMetrics:(id)arg5;

@end


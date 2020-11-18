//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, VCRateControlBandwidthEstimator, VCRateControlServerBag;

__attribute__((visibility("hidden")))
@interface VCRateControlBandwidthEstimatorMap : NSObject
{
    unsigned int _mode;
    unsigned int _radioAccessTechnology;
    double _estimatedBandwidth;
    double _estimatedBandwidthUncapped;
    NSMutableDictionary *_estimatorMap;
    unsigned int _currentActiveEstimatorID;
    int _state;
    VCRateControlBandwidthEstimator *_defaultEstimator;
    int _bandwidthEstimationState;
    BOOL _fastSuddenBandwidthDetectionEnabled;
    VCRateControlServerBag *_serverBag;
    void *_logBWEDump;
}

@property (readonly, nonatomic) int bandwidthEstimationState;
@property (nonatomic) double estimatedBandwidth; // @synthesize estimatedBandwidth=_estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped; // @synthesize estimatedBandwidthUncapped=_estimatedBandwidthUncapped;
@property (nonatomic) BOOL fastSuddenBandwidthDetectionEnabled; // @synthesize fastSuddenBandwidthDetectionEnabled=_fastSuddenBandwidthDetectionEnabled;
@property (nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property (nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property (strong, nonatomic) VCRateControlServerBag *serverBag; // @synthesize serverBag=_serverBag;

- (id)bandwidthEstimatorWithID:(unsigned int)arg1 isProbingSequence:(BOOL)arg2 isEndOfProbingSequence:(BOOL)arg3;
- (void)dealloc;
- (void)deregisterBandwidthEstimatorWithID:(unsigned int)arg1;
- (void)enableBWELogDump:(void *)arg1;
- (id)init;

@end

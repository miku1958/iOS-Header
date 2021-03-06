//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCRedundancyControllerProtocol-Protocol.h>

@class AVCStatisticsCollector, NSArray, NSString;
@protocol VCRedundancyControlAlgorithm;

__attribute__((visibility("hidden")))
@interface VCRedundancyControllerVideo : NSObject <VCRedundancyControllerProtocol>
{
    id _redundancyControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _mode;
    id<VCRedundancyControlAlgorithm> _algorithm;
    unsigned int _currentRedundancyPercentage;
    BOOL _isRSUOptimizationEnabled;
    int _forceRedundancyPercentage;
    double _lastDefaultSettingLoadingTime;
    unsigned char _mediaControlInfoFECFeedbackVersion;
    int _type;
    unsigned long long _statisticsID;
    NSArray *_fecLevelPerFrameSizeVector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *fecLevelPerFrameSizeVector; // @synthesize fecLevelPerFrameSizeVector=_fecLevelPerFrameSizeVector;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long statisticsID; // @synthesize statisticsID=_statisticsID;
@property (readonly) Class superclass;

+ (double)convertRedundancyPercentageToRatio:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned int)arg3 maxAllowedRedundancyPercentage:(unsigned int)arg4;
- (void)loadDefaultSettings;
- (void)reportRedundancyPercentage:(unsigned int)arg1 redundancyInterval:(double)arg2;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_bae76c55)arg1;

@end


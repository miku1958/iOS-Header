//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PXPPTLoadingLatencyMeter : NSObject
{
    CDStruct_4bbd3430 _lowQualityResults;
    CDStruct_4bbd3430 _mediumQualityResults;
    CDStruct_4bbd3430 _highQualityResults;
    NSString *_outputType;
}

@property (readonly, nonatomic) NSDictionary *measurementsDictionaryRepresentation;

+ (id)sharedInstance;
+ (void)startMeasurementsForOutputType:(id)arg1;
+ (void)stopMeasurements;
- (void).cxx_destruct;
- (id)_measurementsDictionaryForOutputQuality:(long long)arg1;
- (id)initWithOutputType:(id)arg1;
- (CDStruct_4bbd3430)measurementsForOutputQuality:(long long)arg1;
- (void)reportLatency:(double)arg1 forOutputQuality:(long long)arg2;

@end


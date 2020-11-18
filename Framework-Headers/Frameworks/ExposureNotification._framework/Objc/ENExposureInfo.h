//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotification/CUXPCCodable-Protocol.h>

@class NSArray, NSDate, NSDictionary;

@interface ENExposureInfo : NSObject <CUXPCCodable>
{
    unsigned char _attenuationValue;
    unsigned char _totalRiskScore;
    unsigned char _transmissionRiskLevel;
    unsigned int _diagnosisReportType;
    NSArray *_attenuationDurations;
    NSDate *_date;
    long long _daysSinceOnsetOfSymptoms;
    double _duration;
    NSDictionary *_metadata;
    double _totalRiskScoreFullRange;
}

@property (copy, nonatomic) NSArray *attenuationDurations; // @synthesize attenuationDurations=_attenuationDurations;
@property (nonatomic) unsigned char attenuationValue; // @synthesize attenuationValue=_attenuationValue;
@property (copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic) long long daysSinceOnsetOfSymptoms; // @synthesize daysSinceOnsetOfSymptoms=_daysSinceOnsetOfSymptoms;
@property (nonatomic) unsigned int diagnosisReportType; // @synthesize diagnosisReportType=_diagnosisReportType;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (nonatomic) unsigned char totalRiskScore; // @synthesize totalRiskScore=_totalRiskScore;
@property (nonatomic) double totalRiskScoreFullRange; // @synthesize totalRiskScoreFullRange=_totalRiskScoreFullRange;
@property (nonatomic) unsigned char transmissionRiskLevel; // @synthesize transmissionRiskLevel=_transmissionRiskLevel;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;

@end

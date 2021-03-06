//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotification/CUXPCCodable-Protocol.h>

@class NSArray, NSDate;

@interface ENExposureWindow : NSObject <CUXPCCodable>
{
    unsigned char _calibrationConfidence;
    unsigned int _diagnosisReportType;
    unsigned int _infectiousness;
    NSDate *_date;
    NSArray *_scanInstances;
}

@property (nonatomic) unsigned char calibrationConfidence; // @synthesize calibrationConfidence=_calibrationConfidence;
@property (copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic) unsigned int diagnosisReportType; // @synthesize diagnosisReportType=_diagnosisReportType;
@property (nonatomic) unsigned int infectiousness; // @synthesize infectiousness=_infectiousness;
@property (copy, nonatomic) NSArray *scanInstances; // @synthesize scanInstances=_scanInstances;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;

@end


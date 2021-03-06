//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/SRSampleExporting-Protocol.h>
#import <SensorKit/SRSampling-Protocol.h>

@class NSString;

@interface SRWristDetection : NSObject <SRSampling, SRSampleExporting>
{
    unsigned char _wristDetectionRawValue;
}

@property (readonly) long long crownOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL onWrist;
@property (readonly) Class superclass;
@property (nonatomic) unsigned char wristDetectionRawValue; // @synthesize wristDetectionRawValue=_wristDetectionRawValue;
@property (readonly) long long wristLocation;

+ (void)initialize;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)sr_dictionaryRepresentation;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTPerfBaseMeasurementData-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol MTPerfBaseMeasurementTransformation;

@interface MTPerfBaseMeasurement : NSObject <MTPerfBaseMeasurementData>
{
    NSMutableArray *_additionalData;
    NSArray *_eventData;
    NSMutableDictionary *_timestamps;
    NSMutableDictionary *_measurementSpecificData;
    id<MTPerfBaseMeasurementTransformation> _measurementTransformer;
}

@property (readonly, copy, nonatomic) NSArray *additionalFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *measurementSpecificData; // @synthesize measurementSpecificData=_measurementSpecificData;
@property (weak, nonatomic) id<MTPerfBaseMeasurementTransformation> measurementTransformer; // @synthesize measurementTransformer=_measurementTransformer;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *timestamps; // @synthesize timestamps=_timestamps;

- (void).cxx_destruct;
- (void)addFields:(id)arg1;
- (void)addFieldsWithDictionary:(id)arg1;
- (void)addFieldsWithPromise:(id)arg1;
- (id)getAdditionalData;
- (id)initWithMeasurementTransformer:(id)arg1 eventData:(id)arg2;
- (id)metricsData;
- (id)record;

@end


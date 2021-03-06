//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/BCSMeasurement.h>

@class NSArray;

@interface BCSFlagMeasurement : BCSMeasurement
{
    BOOL _flag;
    BOOL _flagWasSet;
    NSArray *_realTimeMeasurementHandlers;
    long long _flagMeasurementType;
}

@property (nonatomic) BOOL flag; // @synthesize flag=_flag;
@property (readonly, nonatomic) long long flagMeasurementType; // @synthesize flagMeasurementType=_flagMeasurementType;
@property (nonatomic) BOOL flagWasSet; // @synthesize flagWasSet=_flagWasSet;
@property (readonly, nonatomic) NSArray *realTimeMeasurementHandlers; // @synthesize realTimeMeasurementHandlers=_realTimeMeasurementHandlers;

+ (id)newFlagMeasurement:(long long)arg1 withHandlers:(id)arg2;
- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 handlers:(id)arg2;

@end


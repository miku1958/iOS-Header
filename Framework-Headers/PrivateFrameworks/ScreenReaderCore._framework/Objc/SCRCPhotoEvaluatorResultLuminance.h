//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

__attribute__((visibility("hidden")))
@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult
{
    double _darknessLevel;
    double _brightnessLevel;
    double _averageLevel;
}

@property (readonly, nonatomic) double averageLevel; // @synthesize averageLevel=_averageLevel;
@property (readonly, nonatomic) double brightnessLevel; // @synthesize brightnessLevel=_brightnessLevel;
@property (readonly, nonatomic) double darknessLevel; // @synthesize darknessLevel=_darknessLevel;

- (id)humanReadableResult;
- (id)initWithDarknessLevel:(double)arg1 brightnessLevel:(double)arg2 averageLevel:(double)arg3;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUValueFilter.h>

@interface PUInitialHysteresisValueFilter : PUValueFilter
{
    BOOL _didReachThreshold;
    double _initialHysteresis;
    double _thresholdValue;
}

@property (readonly, nonatomic) double outputValueDerivative;
@property (nonatomic) double thresholdValue; // @synthesize thresholdValue=_thresholdValue;

- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end

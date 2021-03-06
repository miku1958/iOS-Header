//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISettingsKeyObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICubicPolyTangent : NSObject <_UISettingsKeyObserver>
{
    double _initialLinearGain;
    double _parabolicGain;
    double _cubicGain;
    double _quarticGain;
    double _tangentLineSpeed;
    double _tangentSqrtSpeed;
    double _tangentCbrtSpeed;
    double _tangentHyperCbrtSpeed;
}

@property (nonatomic) double cubicGain; // @synthesize cubicGain=_cubicGain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialLinearGain; // @synthesize initialLinearGain=_initialLinearGain;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) double parabolicGain; // @synthesize parabolicGain=_parabolicGain;
@property (nonatomic) double quarticGain; // @synthesize quarticGain=_quarticGain;
@property (readonly) Class superclass;
@property (nonatomic) double tangentCbrtSpeed; // @synthesize tangentCbrtSpeed=_tangentCbrtSpeed;
@property (nonatomic) double tangentHyperCbrtSpeed; // @synthesize tangentHyperCbrtSpeed=_tangentHyperCbrtSpeed;
@property (nonatomic) double tangentLineSpeed; // @synthesize tangentLineSpeed=_tangentLineSpeed;
@property (nonatomic) double tangentSqrtSpeed; // @synthesize tangentSqrtSpeed=_tangentSqrtSpeed;

+ (id)keyboardTrackpadCurve;
- (int)RootPowerOfEarliestTangent:(int)arg1;
- (double)clipForIOFixedMath:(double)arg1 polynomialPower:(int)arg2 tangencyStartingAt:(double)arg3;
- (void)clipGainsForIOFixedMathWithTangency;
- (double)gainForPower:(int)arg1;
- (id)init;
- (double)piecewiseCubicAcceleratedSpeed:(double)arg1;
- (double)quarticDerivative:(double)arg1;
- (double)quarticFunction:(double)arg1;
- (double)quarticTangentFunction:(double)arg1 powerOfEarliestTangent:(int)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)tangentSpeedForPower:(int)arg1;

@end


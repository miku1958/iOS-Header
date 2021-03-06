//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKElectrocardiogram.h>

@class NSString, UIColor;

@interface HKElectrocardiogram (HealthUI)

@property (readonly, nonatomic) UIColor *hk_BPMTextColor;
@property (readonly, nonatomic) UIColor *hk_cardBackgroundColor;
@property (readonly, nonatomic) UIColor *hk_cardHeaderColor;
@property (readonly, nonatomic) UIColor *hk_classificationTextColor;
@property (readonly, nonatomic) BOOL hk_hasPositiveSymptoms;
@property (readonly, nonatomic) BOOL hk_isBPMTextBold;
@property (readonly, nonatomic) BOOL hk_isClassificationSupported;
@property (readonly, nonatomic) BOOL hk_isPossibleAtrialFibrillation;
@property (readonly, nonatomic) BOOL hk_isSymptomsNoSymptoms;
@property (readonly, nonatomic) BOOL hk_isSymptomsNotSet;
@property (readonly, nonatomic) NSString *hk_localizedAverageBPM;
@property (readonly, nonatomic) NSString *hk_localizedDuration;
@property (readonly, nonatomic) NSString *hk_localizedNumSymptoms;
@property (readonly, nonatomic) NSString *hk_localizedUppercaseNumSymptoms;
@property (readonly, nonatomic) UIColor *hk_numSymptomsTextColor;
@property (readonly, nonatomic) NSString *hk_timeStampCompositingFilter;
@property (readonly, nonatomic) UIColor *hk_timeStampTextColor;

+ (id)hk_abnormalBPMTextColor;
+ (id)hk_abnormalCardHeaderColor;
+ (id)hk_abnormalClassificationTextColor;
+ (id)hk_abnormalTimeStampCompositingFilter;
+ (id)hk_abnormalTimeStampTextColor;
+ (id)hk_defaultBPMTextColor;
+ (id)hk_defaultCardBackgroundColor;
+ (id)hk_defaultCardHeaderColor;
+ (id)hk_defaultClassificationTextColor;
+ (id)hk_defaultNumSymptomsTextColor;
+ (id)hk_defaultTimeStampCompositingFilter;
+ (id)hk_defaultTimeStampTextColor;
+ (id)hk_onboardingCardBackgroundColor;
+ (id)hk_onboardingCardHeaderColor;
+ (id)hk_positiveNumSymptomsTextColor;
- (BOOL)_hk_classificationHasAbnormalBPMFontColorAndStyle;
- (BOOL)_hk_classificationHasAbnormalHeaderColorAndStyle;
- (id)_hk_waveformPathsWithNumberOfValues:(long long)arg1 transform:(struct CGAffineTransform)arg2 maximumNumberOfValuesPerPath:(long long)arg3 shouldResetXValues:(BOOL)arg4 initialValuesToOmit:(long long)arg5 minimumValueInMicrovolts:(float)arg6 maximumValueInMicrovolts:(float)arg7;
- (id)_hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 maximumNumberOfValuesPerPath:(long long)arg3 shouldResetXValues:(BOOL)arg4 initialValuesToOmit:(long long)arg5 minimumValueInMicrovolts:(float)arg6 maximumValueInMicrovolts:(float)arg7;
- (id)hk_waveformPathsWithNumberOfValues:(long long)arg1 fitToWidth:(double)arg2 pointsPerMillivolt:(double)arg3 minimumValueInMillivolts:(float)arg4 maximumValueInMillivolts:(float)arg5;
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 minimumValueInMillivolts:(float)arg3 maximumValueInMillivolts:(float)arg4;
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 wrappingDuration:(double)arg3 omittingInitialDuration:(double)arg4;
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 wrappingDuration:(double)arg3 omittingInitialDuration:(double)arg4 minimumValueInMillivolts:(float)arg5 maximumValueInMillivolts:(float)arg6;
@end


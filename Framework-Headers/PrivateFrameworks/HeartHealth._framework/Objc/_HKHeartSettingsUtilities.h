//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKHeartSettingsUtilities : NSObject
{
}

+ (id)_calculateHeartRateOptionsWithMin:(long long)arg1 increment:(long long)arg2 max:(long long)arg3;
+ (void)_setThresholdHeartRate:(id)arg1 detectedEnabledDefaultsKey:(id)arg2 thresholdHeartRateDefaultKey:(id)arg3;
+ (id)bradycardiaHeartRateOptions;
+ (id)bradycardiaHeartThresholdFooterDescriptionWithThresholdValue:(id)arg1;
+ (id)bradycardiaLearnMoreLink;
+ (long long)bradycardiaThresholdHeartRate;
+ (long long)bradycardiaWarningThreshold;
+ (void)deleteAtrialFibrillationDetectionLastAnalyzedSampleDate;
+ (id)electrocardiogramFooterDescriptionWithAvailabilityManager:(id)arg1;
+ (id)electrocardiogramLearnMoreURL;
+ (id)heartRateSectionDescription;
+ (id)heartRateSettingsURL;
+ (id)heartRateThresholdOffDescription;
+ (id)irregularHeartRhythmFooterDescription;
+ (id)irregularHeartRhythmFooterLinkTitle;
+ (id)irregularHeartRhythmFooterLinkURL;
+ (id)irregularHeartRhythmSetupTitleDescription;
+ (id)irregularHeartRhythmTitleDescription;
+ (BOOL)isAtrialFibrillationEnabledWithAvailabilityManager:(id)arg1;
+ (BOOL)isBackgroundHeartRateEnabled;
+ (BOOL)isBradycardiaDetectionEnabled;
+ (BOOL)isBradycardiaDetectionSupportedOnActiveWatch;
+ (BOOL)isBradycardiaDetectionSupportedOnAllWatches;
+ (BOOL)isHeartRateEnabled;
+ (BOOL)isTachycardiaDetectionEnabled;
+ (BOOL)isWristDetectionEnabled;
+ (void)setAtrialFibrillationEnabled:(BOOL)arg1;
+ (void)setBradycardiaThresholdHeartRate:(id)arg1;
+ (void)setTachycardiaThresholdHeartRate:(id)arg1;
+ (BOOL)shouldFooterTextDisplayOffConfiguration:(BOOL)arg1;
+ (id)tachycardiaHeartRateOptions;
+ (id)tachycardiaHeartThresholdFooterDescriptionWithThresholdValue:(id)arg1;
+ (id)tachycardiaLearnMoreLink;
+ (long long)tachycardiaThresholdHeartRate;

@end

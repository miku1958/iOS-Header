//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsNaturalLanguage/IPFeatureExtractor.h>

@interface IPDataDetectorsFeatureExtractor : IPFeatureExtractor
{
}

- (id)featureDataComplementingFeatureData:(id)arg1 hour:(unsigned long long)arg2 minute:(unsigned long long)arg3 duration:(double)arg4;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3;
- (id)init;
- (id)newYearsEveDayDateFromReferenceDate:(id)arg1;
- (id)queue;
- (void)setTimeZone:(id)arg1 forDateFeatures:(id)arg2;
- (struct __DDScanner *)standardScanner;
- (void)standardizeTimezonesForDetectedFeatures:(id)arg1;
- (id)stringByReplacingDetectedDataWithNGramMarkersInString:(id)arg1;
- (BOOL)stringContainsNonTimeStrings:(id)arg1 aroundRange:(struct _NSRange)arg2;
- (struct _NSRange)textRangeReferencingAfternoon:(id)arg1;
- (struct _NSRange)textRangeReferencingAllDay:(id)arg1;
- (struct _NSRange)textRangeReferencingEvening:(id)arg1;
- (struct _NSRange)textRangeReferencingMorning:(id)arg1;
- (struct _NSRange)textRangeReferencingNewYearsEve:(id)arg1;
- (struct _NSRange)textRangeReferencingNextWeekEnd:(id)arg1;
- (struct _NSRange)textRangeReferencingNoon:(id)arg1;
- (struct _NSRange)textRangeReferencingThisWeekEnd:(id)arg1;
- (struct _NSRange)textRangeReferencingTomorrow:(id)arg1;
- (struct _NSRange)textRangeReferencingValentineDay:(id)arg1;
- (id)thisSaturdayDateFromReferenceDate:(id)arg1;
- (struct __DDScanner *)timeScanner;
- (id)tomorrowDateFromReferenceDate:(id)arg1;
- (id)valentineDayDateFromReferenceDate:(id)arg1;

@end

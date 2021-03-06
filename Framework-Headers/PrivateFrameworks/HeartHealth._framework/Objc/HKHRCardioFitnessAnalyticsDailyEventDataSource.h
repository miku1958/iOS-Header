//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile;

@interface HKHRCardioFitnessAnalyticsDailyEventDataSource : NSObject
{
    HDProfile *_profile;
    BOOL _isImproveHealthAndActivityAllowed;
}

+ (id)localGregorianCalendar;
- (void).cxx_destruct;
- (long long)_determineDaysSinceLastSampleWithSampleType:(id)arg1 currentDate:(id)arg2 error:(id *)arg3;
- (id)determineDaysSinceLastLowNotificationWithCurrentDate:(id)arg1 error:(id *)arg2;
- (id)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(id)arg1 error:(id *)arg2;
- (id)determineIsBlockersEnabledWithError:(id *)arg1;
- (id)determineIsHeartRateEnabled;
- (BOOL)determineIsNotificationsEnabled;
- (id)determineIsWristDetectionEnabled;
- (id)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(id)arg1 error:(id *)arg2;
- (long long)determineWeeksSinceOnboardingWithCurrentDate:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1 isImproveHealthAndActivityAllowed:(BOOL)arg2;
- (long long)numberOfDaysBetweenStartDate:(id)arg1 endDate:(id)arg2;

@end


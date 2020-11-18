//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHTemplateSource-Protocol.h>

@class ACHMonthlyChallengeDataSource, ACHMonthlyChallengeTemplateDataProvider, ACHSyncingMonthlyChallengeTemplateCache, NSCalendar, NSDate, NSString;
@protocol ACHTemplateSourceDelegate;

@interface ACHMonthlyChallengeTemplateSource : NSObject <ACHTemplateSource>
{
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
    BOOL _isAppleWatch;
    NSCalendar *_currentCalendar;
    NSDate *_currentDate;
    ACHMonthlyChallengeDataSource *_dataSource;
    ACHMonthlyChallengeTemplateDataProvider *_templateDataProvider;
    ACHSyncingMonthlyChallengeTemplateCache *_templateCache;
}

@property (strong, nonatomic) NSCalendar *currentCalendar; // @synthesize currentCalendar=_currentCalendar;
@property (strong, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property (strong, nonatomic) ACHMonthlyChallengeDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isAppleWatch; // @synthesize isAppleWatch=_isAppleWatch;
@property (readonly, nonatomic) long long runCadence;
@property (readonly) Class superclass;
@property (strong, nonatomic) ACHSyncingMonthlyChallengeTemplateCache *templateCache; // @synthesize templateCache=_templateCache;
@property (strong, nonatomic) ACHMonthlyChallengeTemplateDataProvider *templateDataProvider; // @synthesize templateDataProvider=_templateDataProvider;

- (void).cxx_destruct;
- (id)_availableMonthlyChallengeTypes;
- (id)_createMonthlyChallengeTemplateWithType:(unsigned long long)arg1 dateCompoonentInterval:(id)arg2 goalValue:(double)arg3;
- (BOOL)_createMonthlyChallengeWithMonthDateInterval:(id)arg1 monthlyChallengeTemplates:(id *)arg2 error:(id *)arg3;
- (id)_dateComponentIntervalForCurrentMonth;
- (id)_dateComponentIntervalForLastMonth;
- (id)_dateComponentIntervalForTwoMonthsAgo;
- (void)_didOverrideMonthlyChallengeCadence;
- (unsigned long long)_getRandomMonthlyChallengeType;
- (double)_goalValueForCurrentMonthForType:(unsigned long long)arg1;
- (BOOL)_isInFirstWeekOfCurrentMonth:(id)arg1;
- (id)_maximumValueForMonthlyChallengeType:(unsigned long long)arg1;
- (id)_modelsDirectoryBasePathForTemplate:(id)arg1;
- (id)_monthlyAchievementsAssetsDirectoryBasePath;
- (long long)_monthlyChallengeTemplateSourceActionForDate:(id)arg1 existingTemplate:(id)arg2;
- (unsigned long long)_numberOfDaysInMonthForDate:(id)arg1;
- (void)_removeMonthlyChallengeTemplate:(id)arg1 monthlyChallengeTemplates:(id *)arg2 templatesToRemove:(id *)arg3;
- (double)_roundedGoalValue:(double)arg1 monthlyChallengeType:(unsigned long long)arg2;
- (BOOL)_shouldOverrideMonthlyChallengeCadence;
- (id)_suffixForCurrentMonthForType:(unsigned long long)arg1 template:(id)arg2;
- (double)_targetGoalValueForCurrentMonthForType:(unsigned long long)arg1;
- (id)_yearMonthStringFromTemplateName:(id)arg1;
- (id)customPlaceholderValuesForTemplate:(id)arg1;
- (id)initWithDataSource:(id)arg1 dataProvider:(id)arg2 templateCache:(id)arg3;
- (BOOL)isGoalValueForMonthlyChallengeTypeValid:(unsigned long long)arg1;
- (BOOL)isMonthlyChallengeOfTypeAvailable:(unsigned long long)arg1;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)possibleLocalizationSuffixesForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (void)setCurrentCalendarOverride:(id)arg1;
- (void)setCurrentDateOverride:(id)arg1;
- (BOOL)sourceShouldRunForDate:(id)arg1;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (BOOL)subObjectsHaveDatabaseAssertions;
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)templatesForDate:(id)arg1 databaseContext:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

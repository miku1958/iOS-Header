//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class CLKComplicationTemplate;

@interface NTKCompanionComplicationDataSource : NTKComplicationDataSource
{
    CLKComplicationTemplate *_complicationTemplate;
}

+ (BOOL)_isComplicationFamilyAvaialbleBeforeGlory:(long long)arg1;
+ (BOOL)acceptsClassicComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2;
+ (BOOL)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;
+ (Class)richComplicationDisplayViewClassForType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (void).cxx_destruct;
- (id)_alarmTemplate;
- (id)_astronomyTemplateFromVista:(unsigned long long)arg1;
- (id)_batteryTemplate;
- (id)_breathingTemplate;
- (id)_city;
- (id)_createAirQualitySignatureBezelTemplate;
- (id)_createAirQualitySignatureCircularTemplate;
- (id)_createAirQualitySignatureCornerTemplate;
- (id)_createCircularMediumTemplate;
- (id)_createCircularSmallTemplate;
- (id)_createConditionsCircularMediumTemplate;
- (id)_createConditionsCircularSmallTemplate;
- (id)_createConditionsExtraLargeTemplate;
- (id)_createConditionsModularSmallTemplate;
- (id)_createConditionsSignatureBezelTemplate;
- (id)_createConditionsSignatureCircularTemplate;
- (id)_createConditionsSignatureCornerTemplate;
- (id)_createConditionsSignatureRectangularTemplate;
- (id)_createConditionsUtilitarianSmallFlatTemplate;
- (id)_createConditionsUtilitarianSmallTemplate;
- (id)_createExtraLargeTemplate;
- (id)_createModularLargeTemplate;
- (id)_createModularSmallTemplate;
- (id)_createSignatureBezelTemplate;
- (id)_createSignatureCircularTemplate;
- (id)_createSignatureCornerTemplate;
- (id)_createUVSignatureBezelTemplate;
- (id)_createUVSignatureCircularTemplate;
- (id)_createUVSignatureCornerTemplate;
- (id)_createUtilitarianLargeTemplate;
- (id)_createUtilitarianSmallTemplate;
- (id)_currentEntryModel;
- (id)_dateTemplate;
- (id)_heartrateTemplate;
- (void)_localeDidChange:(id)arg1;
- (id)_messagesTemplate;
- (id)_moonPhaseTemplate;
- (id)_musicTemplate;
- (id)_newsTemplate;
- (id)_nextEventTemplate;
- (id)_nowPlayingTemplate;
- (id)_podcastTemplate;
- (id)_radioTemplate;
- (id)_reminderTemplate;
- (id)_siriTemplate;
- (id)_solarTemplate;
- (id)_stocksTemplate;
- (id)_stopwatchTemplate;
- (id)_sunriseTemplate;
- (id)_timerTemplate;
- (id)_weatherAirQualityTemplate;
- (id)_weatherConditionsTemplate;
- (id)_weatherTemplate;
- (id)_weatherUVIndexTemplate;
- (id)_weatherWindTemplate;
- (id)_wellnessStatisticsForData:(id)arg1 unit:(id)arg2;
- (id)_wellnessStatisticsForStandHours:(id)arg1;
- (id)_wellnessTemplate;
- (id)_workoutTemplate;
- (id)_worldClockTemplate;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end


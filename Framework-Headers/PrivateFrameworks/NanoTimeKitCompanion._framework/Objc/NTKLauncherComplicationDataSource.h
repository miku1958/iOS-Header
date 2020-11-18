//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource
{
}

+ (BOOL)acceptsComplicationFamily:(long long)arg1;
+ (BOOL)acceptsComplicationType:(unsigned long long)arg1;
- (id)_appImage;
- (id)_appImageProvider;
- (id)_appTintColor;
- (id)_appTitle;
- (id)_circularTemplateMedium:(BOOL)arg1;
- (id)_complicationApplicationIdentifier;
- (id)_currentTimelineEntry;
- (id)_extraLarge;
- (id)_modularLargeTemplate;
- (id)_modularSmallTemplate;
- (id)_utilitarianLargeTemplate;
- (id)_utilitarianSmallTemplate;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)timelineAnimationBehavior;

@end


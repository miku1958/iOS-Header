//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource
{
}

+ (BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_templateWithShouldDisplayIdealizeState:(BOOL)arg1;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (BOOL)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;

@end

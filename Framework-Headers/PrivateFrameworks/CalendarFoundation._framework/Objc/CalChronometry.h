//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CalChronometry : NSObject
{
}

+ (void)_configureChronometry;
+ (void)_currentLocaleDidChange:(id)arg1;
+ (void)_currentTimeZoneDidChange:(id)arg1;
+ (void)_updateActiveCalendar;
+ (void)_updateActiveTimeZone;
+ (void)_updateEveything;
+ (void)_updateForLocaleChange;
+ (id)activeCalendar;
+ (id)activeTimeZone;
+ (id)currentLanguageCode;
+ (id)currentLocationCode;
+ (void)initialize;
+ (id)overlayCalendar;
+ (id)overlayCalendarID;
+ (void)overlayCalendarPrefChanged;
+ (void)setActiveTimeZone:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/UIPopoverControllerDelegate-Protocol.h>

@class NSIndexPath, NSString, NSTimer, PSSpecifier, PSWallClockMinuteTimer, UIPopoverController;

@interface PSUIDateTimeController : PSListController <UIPopoverControllerDelegate>
{
    UIPopoverController *_setDateAndTimePopoverController;
    NSIndexPath *_setDateAndTimeIndexPath;
    NSTimer *_timer;
    BOOL _localeForces24HourTime;
    BOOL _setDateAndTimePopoverShouldRePresent;
    struct __CFDateFormatter *_dateFormatter;
    struct __CFDateFormatter *_timeFormatter;
    PSSpecifier *_timeZoneSpecifier;
    PSSpecifier *_timePickerSpecifier;
    PSSpecifier *_currentTimeSpecifier;
    PSWallClockMinuteTimer *_minuteTimer;
}

@property (strong) PSSpecifier *currentTimeSpecifier; // @synthesize currentTimeSpecifier=_currentTimeSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PSWallClockMinuteTimer *minuteTimer; // @synthesize minuteTimer=_minuteTimer;
@property (readonly) Class superclass;
@property (strong) PSSpecifier *timePickerSpecifier; // @synthesize timePickerSpecifier=_timePickerSpecifier;
@property (strong) PSSpecifier *timeZoneSpecifier; // @synthesize timeZoneSpecifier=_timeZoneSpecifier;

- (void).cxx_destruct;
- (void)_createDateTimeFormatters;
- (void)_setSpecifier:(id)arg1 valueEnabled:(BOOL)arg2;
- (void)_updateCurrentTime;
- (id)currentDateString;
- (id)currentTimeString;
- (void)datePickerChanged:(id)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)init;
- (id)is24HourTime:(id)arg1;
- (void)localeChanged:(id)arg1;
- (id)makeCurrentTimeSpecifier;
- (id)makeTimePickerSpecifier;
- (void)newCarrierNotification;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)reloadTimezone;
- (void)set24HourTime:(id)arg1 specifier:(id)arg2;
- (void)setAutomaticTimeFooter;
- (void)setTimeZoneValue:(id)arg1 specifier:(id)arg2;
- (void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2;
- (BOOL)shouldDisplayTimezoneSpinner;
- (void)significantTimeChange:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)timeZoneValue:(id)arg1;
- (id)useAutomaticTime:(id)arg1;
- (id)valueForTime:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end


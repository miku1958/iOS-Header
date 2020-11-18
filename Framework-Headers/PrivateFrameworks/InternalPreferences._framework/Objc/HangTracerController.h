//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <InternalPreferences/UITextFieldDelegate-Protocol.h>

@class NSString, PSSpecifier;

@interface HangTracerController : PSListController <UITextFieldDelegate>
{
    BOOL _enabled;
    float _runloopDuration;
    float _launchDuration;
    int _logLevel;
    PSSpecifier *_textSpec;
    PSSpecifier *_runloopDurationSlider;
    PSSpecifier *_runloopDurationLabel;
    PSSpecifier *_launchDurationText;
    PSSpecifier *_launchDurationSlider;
    PSSpecifier *_launchDurationLabel;
    PSSpecifier *_logLevelText;
    PSSpecifier *_logLevelSlider;
    PSSpecifier *_logLevelLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)durationText:(id)arg1;
- (id)getLogLevel:(id)arg1;
- (void)handleSliderChangedEvent:(id)arg1;
- (void)handleSliderTouchUpEvent:(id)arg1;
- (id)init;
- (id)isEnabledExcResourceHUD:(id)arg1;
- (id)isEnabledHUD:(id)arg1;
- (id)isEnabledTakeStackshots:(id)arg1;
- (id)launchDuration:(id)arg1;
- (id)launchDurationText:(id)arg1;
- (id)logLevelText:(id)arg1;
- (id)runloopDuration:(id)arg1;
- (void)setExcResourceHUD:(id)arg1 specifier:(id)arg2;
- (void)setHUDEnabled:(id)arg1 specifier:(id)arg2;
- (void)setLaunchDuration:(id)arg1 specifier:(id)arg2;
- (void)setLogLevel:(id)arg1 specifier:(id)arg2;
- (void)setRunloopDuration:(id)arg1 specifier:(id)arg2;
- (void)setTakeStackshots:(id)arg1 specifier:(id)arg2;
- (void)setTracingEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)tracingEnabled:(id)arg1;

@end


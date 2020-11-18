//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <InternalPreferences/UITextFieldDelegate-Protocol.h>

@class NSObject, NSString, PSSpecifier;
@protocol OS_xpc_object;

@interface DeadlockMakerController : PSListController <UITextFieldDelegate>
{
    BOOL _enabled;
    float _priority;
    float _runDuration;
    NSObject<OS_xpc_object> *_connection;
    PSSpecifier *_textSpec;
    PSSpecifier *_prioritySlider;
    PSSpecifier *_priorityLabel;
    PSSpecifier *_runDurationText;
    PSSpecifier *_runDurationSlider;
    PSSpecifier *_runDurationLabel;
    PSSpecifier *_startNowButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleSliderChangedEvent:(id)arg1;
- (void)handleSliderTouchUpEvent:(id)arg1;
- (id)init;
- (void)launchSpinForeverD:(id)arg1;
- (id)priority:(id)arg1;
- (id)priorityText:(id)arg1;
- (id)runDuration:(id)arg1;
- (id)runDurationText:(id)arg1;
- (void)setPriority:(id)arg1 specifier:(id)arg2;
- (void)setRunDuration:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (BOOL)startConnectionIfNeeded;
- (void)stopConnectionIfNeeded;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)triggerTimeout;

@end


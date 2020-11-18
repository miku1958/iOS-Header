//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <UIKitCore/_UIDatePickerCalendarTimeLabelDelegate-Protocol.h>
#import <UIKitCore/_UIPassthroughScrollInteractionDelegate-Protocol.h>

@class NSArray, NSCalendar, NSDateFormatter, NSLocale, NSString, UILabel, UISegmentedControl, _UIDatePickerCalendarTime, _UIDatePickerCalendarTimeFormat, _UIDatePickerCalendarTimeLabel, _UIDatePickerNumericKeyboardViewController, _UIPassthroughScrollInteraction;
@protocol _UIDatePickerCalendarTimeViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeView : UIView <_UIDatePickerCalendarTimeLabelDelegate, UIPopoverPresentationControllerDelegate, _UIPassthroughScrollInteractionDelegate>
{
    struct {
        unsigned int isPendingManualKeyboardPresentation:1;
        unsigned int isPresentingManualKeyboard:1;
        unsigned int needsLabelUpdateOnResignFirstResponder:1;
        unsigned int showsTimeLabel:1;
    } _flags;
    NSDateFormatter *_formatter;
    long long _currentLayout;
    NSArray *_clockLayoutConstraints;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
    BOOL _shouldShowTimeLabel;
    id<_UIDatePickerCalendarTimeViewDelegate> _delegate;
    NSCalendar *_calendar;
    NSLocale *_locale;
    NSString *_customFontDesign;
    _UIDatePickerCalendarTime *_selectedTime;
    UILabel *_timeLabel;
    _UIDatePickerCalendarTimeLabel *_timeTextField;
    UISegmentedControl *_timeOfDaySelector;
    _UIDatePickerNumericKeyboardViewController *_numericKeyboardViewController;
    _UIDatePickerCalendarTimeFormat *_timeFormat;
}

@property (readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (strong, nonatomic) NSString *customFontDesign; // @synthesize customFontDesign=_customFontDesign;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIDatePickerCalendarTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (nonatomic) long long minuteInterval;
@property (strong, nonatomic) _UIDatePickerNumericKeyboardViewController *numericKeyboardViewController; // @synthesize numericKeyboardViewController=_numericKeyboardViewController;
@property (nonatomic, getter=isPassthroughInteractionEnabled) BOOL passthroughInteractionEnabled;
@property (strong, nonatomic) _UIDatePickerCalendarTime *selectedTime; // @synthesize selectedTime=_selectedTime;
@property (nonatomic) BOOL shouldShowTimeLabel; // @synthesize shouldShowTimeLabel=_shouldShowTimeLabel;
@property (readonly) Class superclass;
@property (strong, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat; // @synthesize timeFormat=_timeFormat;
@property (readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property (readonly, nonatomic) UISegmentedControl *timeOfDaySelector; // @synthesize timeOfDaySelector=_timeOfDaySelector;
@property (readonly, nonatomic) _UIDatePickerCalendarTimeLabel *timeTextField; // @synthesize timeTextField=_timeTextField;

- (void).cxx_destruct;
- (void)_disableCustomKeyboardIfNecessary;
- (void)_dismissManualKeyboard;
- (void)_enableCustomKeyboardIfNecessary;
- (void)_notifyDelegate;
- (void)_reload;
- (void)_reloadDateFormatters;
- (void)_reloadTimeOfDaySelector;
- (void)_setupDateFormatter;
- (void)_setupViewHierarchy;
- (void)_updateClockLayout;
- (void)_updateFonts;
- (void)_updateSelectedDateComponentsFromTextFields;
- (void)_updateTextFieldsFromSelectedDateComponents;
- (void)dealloc;
- (void)didUpdateTimeOfDayValue:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)keyboardTypeForTimeLabel:(id)arg1;
- (BOOL)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (id)primaryFirstResponder;
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 selectedTime:(id)arg3;
- (BOOL)timeLabel:(id)arg1 didReceiveText:(id)arg2;
- (void)timeLabel:(id)arg1 didUpdateText:(id)arg2;
- (void)timeLabelDidBecomeFirstResponder:(id)arg1;
- (void)timeLabelDidBeginEditing:(id)arg1;
- (void)timeLabelDidEndEditing:(id)arg1;
- (void)timeLabelDidFailToBecomeFirstResponder:(id)arg1;
- (void)timeLabelDidResignFirstResponder:(id)arg1;
- (BOOL)timeLabelShouldSuppressSoftwareKeyboard:(id)arg1;
- (void)timeLabelWillBecomeFirstResponder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end


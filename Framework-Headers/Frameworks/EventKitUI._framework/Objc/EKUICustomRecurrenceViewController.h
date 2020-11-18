//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKRecurrenceChooserControllerDelegate-Protocol.h>
#import <EventKitUI/UIPickerViewDataSource-Protocol.h>
#import <EventKitUI/UIPickerViewDelegate-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class EKRecurrenceChooserController, EKRecurrenceMonthChooserController, EKRecurrenceMonthlyChooserController, EKRecurrenceOrdinalChooserController, EKRecurrenceRule, EKRecurrenceWeekdayChooserController, EKUICustomRecurrenceIntervalViewController, NSDate, NSString, NSTimeZone, UIPickerView, UISwitch, UITableView, UITableViewCell;

@interface EKUICustomRecurrenceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource, EKRecurrenceChooserControllerDelegate>
{
    long long _cachedFrequency;
    long long _cachedInterval;
    EKRecurrenceRule *_cachedRecurrenceRule;
    BOOL _showingFrequencyPicker;
    BOOL _showingIntervalPicker;
    UITableViewCell *_frequencySummaryCell;
    UITableViewCell *_intervalSummaryCell;
    BOOL _useClearBackground;
    BOOL _prohibitsYearlyRecurrenceInterval;
    CDUnknownBlockType _completionBlock;
    UITableView *_tableView;
    EKRecurrenceChooserController *_currentChooser;
    EKRecurrenceWeekdayChooserController *_weeklyChooser;
    EKRecurrenceMonthlyChooserController *_monthlyChooser;
    EKRecurrenceMonthChooserController *_yearlyChooser;
    EKRecurrenceOrdinalChooserController *_yearlyOrdinalChooser;
    NSDate *_startDate;
    NSTimeZone *_timeZone;
    UIPickerView *_frequencyPickerView;
    EKUICustomRecurrenceIntervalViewController *_intervalPickerViewController;
    UISwitch *_yearOrdinalSwitch;
    NSString *_recurrenceSummaryString;
}

@property (copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (weak) EKRecurrenceChooserController *currentChooser; // @synthesize currentChooser=_currentChooser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) UIPickerView *frequencyPickerView; // @synthesize frequencyPickerView=_frequencyPickerView;
@property (readonly) unsigned long long hash;
@property (strong) EKUICustomRecurrenceIntervalViewController *intervalPickerViewController; // @synthesize intervalPickerViewController=_intervalPickerViewController;
@property (strong) EKRecurrenceMonthlyChooserController *monthlyChooser; // @synthesize monthlyChooser=_monthlyChooser;
@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;
@property BOOL prohibitsYearlyRecurrenceInterval; // @synthesize prohibitsYearlyRecurrenceInterval=_prohibitsYearlyRecurrenceInterval;
@property (copy) NSString *recurrenceSummaryString; // @synthesize recurrenceSummaryString=_recurrenceSummaryString;
@property (strong) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;
@property (strong) UITableView *tableView; // @synthesize tableView=_tableView;
@property (strong) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (strong) EKRecurrenceWeekdayChooserController *weeklyChooser; // @synthesize weeklyChooser=_weeklyChooser;
@property (strong) UISwitch *yearOrdinalSwitch; // @synthesize yearOrdinalSwitch=_yearOrdinalSwitch;
@property (strong) EKRecurrenceMonthChooserController *yearlyChooser; // @synthesize yearlyChooser=_yearlyChooser;
@property (strong) EKRecurrenceOrdinalChooserController *yearlyOrdinalChooser; // @synthesize yearlyOrdinalChooser=_yearlyOrdinalChooser;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)isRecurrenceRuleOrdinal:(id)arg1;
- (void).cxx_destruct;
- (id)_chooserForFrequency:(long long)arg1;
- (void)_collapseAllPickers;
- (void)_createChoosersAndControls;
- (void)_frequencyPickerViewUpdated;
- (long long)_numberOfRowsForSection:(long long)arg1;
- (void)_refreshCacheAndPickers;
- (void)_setShowingFrequencyPicker:(BOOL)arg1;
- (void)_setShowingIntervalPicker:(BOOL)arg1;
- (id)_stringForFrequency:(long long)arg1;
- (id)_stringForFrequency:(long long)arg1 interval:(long long)arg2;
- (long long)_tagForIndexPath:(id)arg1;
- (void)_toggleInlineSpinnerForTag:(long long)arg1;
- (void)_updateCustomPickerView;
- (void)_updateFrequencyRows;
- (void)_updateIntervalPicker;
- (void)_updateRecurrenceRule;
- (void)_updateSummaryLabel;
- (void)_updateTableSectionsFromFrequency:(long long)arg1 toFrequency:(long long)arg2;
- (void)_yearOrdinalSwitchChanged:(id)arg1;
- (struct CGSize)calculatePreferredContentSize;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStartDate:(id)arg1 timeZone:(id)arg2 clearBackground:(BOOL)arg3;
- (void)loadView;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (struct CGSize)preferredContentSize;
- (void)recurrenceChooser:(id)arg1 wantsRowReload:(long long)arg2;
- (void)recurrenceChooserUpdated:(id)arg1;
- (void)recurrenceChooserWantsReload:(id)arg1;
- (id)recurrenceRule;
- (void)setRecurrenceRule:(id)arg1;
- (void)setRecurrenceRule:(id)arg1 shouldUpdatePickers:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;

@end

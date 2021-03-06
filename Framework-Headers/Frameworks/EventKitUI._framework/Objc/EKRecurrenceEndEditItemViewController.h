//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import <EventKitUI/EKCellShortener-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class NSDate, NSString, PreferencesValueCell, UIDatePicker, UITableView, UITableViewCell;

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener>
{
    PreferencesValueCell *_dateCell;
    NSDate *_preNeverEndDate;
    NSDate *_minimumEndDate;
    int _shorteningStatus;
    unsigned int _updatingPicker:1;
    UITableView *_table;
    UIDatePicker *_datePicker;
    UITableViewCell *_datePickerCell;
    NSDate *_repeatEndDate;
    NSDate *_bestInitialDate;
}

@property (copy, nonatomic) NSDate *bestInitialDate; // @synthesize bestInitialDate=_bestInitialDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDate *repeatEndDate; // @synthesize repeatEndDate=_repeatEndDate;
@property (readonly) Class superclass;

+ (id)_neverLocalizedString;
- (void).cxx_destruct;
- (id)_cellForRow:(long long)arg1;
- (id)_endDateStringForCurrentShorteningStatus;
- (void)_localeChanged;
- (id)_stringForEndDate;
- (void)_updateSelectionForCell:(id)arg1 atRow:(long long)arg2;
- (void)applyMinimumEndDateToPicker;
- (void)datePickerChanged:(id)arg1;
- (void)dealloc;
- (BOOL)fitsPopoverWhenKeyboardActive;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setMinimumEndDate:(id)arg1;
- (void)shortenCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePicker;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;

@end


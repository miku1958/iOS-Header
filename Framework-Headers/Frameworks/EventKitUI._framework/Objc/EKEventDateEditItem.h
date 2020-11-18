//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

#import <EventKitUI/EKCellShortener-Protocol.h>
#import <EventKitUI/EKTimeZoneViewControllerDelegate-Protocol.h>

@class NSDate, NSDateComponents, NSString, NSTimeZone, PreferencesTwoPartValueCell, UIDatePicker, UITableViewCell;
@protocol EKEventDateEditItemDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDateEditItem : EKEventEditItem <EKTimeZoneViewControllerDelegate, EKCellShortener>
{
    NSDateComponents *_startComponents;
    NSDateComponents *_endComponents;
    BOOL _allDay;
    NSTimeZone *_startTimeZone;
    NSTimeZone *_endTimeZone;
    BOOL _showTimeZones;
    PreferencesTwoPartValueCell *_startDateCell;
    PreferencesTwoPartValueCell *_endDateCell;
    UITableViewCell *_allDayCell;
    UITableViewCell *_startTimeZoneCell;
    UITableViewCell *_endTimeZoneCell;
    UITableViewCell *_startDatePickerCell;
    UITableViewCell *_endDatePickerCell;
    long long _selectedSubitem;
    UIDatePicker *_startDatePicker;
    UIDatePicker *_endDatePicker;
    BOOL _endTimeWasMessedUp;
    BOOL _changingDate;
    int _shorteningStatus;
    BOOL _pushingTZController;
    BOOL _showsAllDay;
    BOOL _proposedTime;
    NSDate *_pendingProposedTime;
    id<EKEventDateEditItemDelegate> _eventDateEditItemDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<EKEventDateEditItemDelegate> eventDateEditItemDelegate; // @synthesize eventDateEditItemDelegate=_eventDateEditItemDelegate;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *pendingProposedTime; // @synthesize pendingProposedTime=_pendingProposedTime;
@property (nonatomic) BOOL proposedTime; // @synthesize proposedTime=_proposedTime;
@property (nonatomic) BOOL showsAllDay; // @synthesize showsAllDay=_showsAllDay;
@property (readonly) Class superclass;

+ (id)_timeZoneLocalizedString;
- (void).cxx_destruct;
- (void)_adjustDatePickerFrame:(id)arg1 toFillEnclosingViewWidth:(id)arg2;
- (void)_adjustStartAndEndComponentsForEventIfNeeded:(id)arg1;
- (id)_allDayCell;
- (void)_allDayChanged:(id)arg1;
- (id)_calendarForEventComponents:(BOOL)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_dateComponentsInSystemCalendarFromDate:(id)arg1;
- (id)_dateFromComponents:(id)arg1 timeZone:(id)arg2;
- (id)_dateInSystemCalendarFromComponents:(id)arg1;
- (void)_datePickerChanged:(id)arg1;
- (void)_datePickerDoubleTapped:(id)arg1;
- (id)_endDateCell;
- (BOOL)_endDateIsBeforeStartDate;
- (id)_endDatePickerCell;
- (id)_endTimeZoneCell;
- (void)_hideInlineDateControls;
- (id)_newDatePicker;
- (void)_pickNextReasonableTime;
- (void)_refreshDatePicker;
- (void)_resetStartString:(BOOL)arg1 endString:(BOOL)arg2;
- (long long)_rowForSubitem:(long long)arg1;
- (void)_setAllDay:(BOOL)arg1;
- (void)_setEndDate:(id)arg1;
- (void)_setEndTimeZone:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setStartTimeZone:(id)arg1;
- (BOOL)_shouldShowTimeZone;
- (id)_startDateCell;
- (id)_startDatePickerCell;
- (id)_startTimeZoneCell;
- (long long)_subitemForRow:(long long)arg1;
- (id)_timeZoneDescription:(id)arg1;
- (void)_updateDateColors;
- (void)_updateDatePickerAnimated:(BOOL)arg1;
- (void)_updateTimeWidths;
- (void)_validateTimezones;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (void)endInlineEditing;
- (BOOL)forceRefreshInviteesItemOnSave;
- (BOOL)forceRefreshLocationItemOnSave;
- (id)init;
- (BOOL)isInline;
- (unsigned long long)numberOfSubitems;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)shortenCell:(id)arg1;
- (void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2;
- (void)timeZoneViewControllerDidCancel:(id)arg1;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditor.h>

#import <EventKitUI/EKEventAutocompleteResultsEditItemDelegate-Protocol.h>

@class EKCalendarItemAlarmEditItem, EKCalendarItemCalendarEditItem, EKCalendarItemLocationInlineEditItem, EKCalendarItemTitleInlineEditItem, EKEvent, EKEventAttendeesEditItem, EKEventAutocompleteResultsEditItem, EKEventDateEditItem, EKEventURLAndNotesInlineEditItem, EKUIAutocompletePETTracker, EKUIAutocompleteSearchResult, NSString, NSTimer, UIColor;
@protocol EKUIAutocompletePendingSearchProtocol;

@interface EKEventEditor : EKCalendarItemEditor <EKEventAutocompleteResultsEditItemDelegate>
{
    EKEventDateEditItem *_dateItem;
    EKEventAttendeesEditItem *_attendeesEditItem;
    EKEventAutocompleteResultsEditItem *_autocompleteEditItem;
    EKCalendarItemTitleInlineEditItem *_titleInlineEditItem;
    EKCalendarItemLocationInlineEditItem *_locationInlineEditItem;
    EKCalendarItemCalendarEditItem *_calendarEditItem;
    EKCalendarItemAlarmEditItem *_alarmEditItem;
    EKEventURLAndNotesInlineEditItem *_notesEditItem;
    BOOL _shouldAutocomplete;
    id<EKUIAutocompletePendingSearchProtocol> _pendingSearch;
    NSTimer *_autocompleteTimer;
    NSString *_autocompleteSearchString;
    BOOL _isTransitioning;
    BOOL _autocompleteResultsVisible;
    unsigned long long _focusOnAppearanceTarget;
    BOOL _selectOnFocus;
    EKUIAutocompleteSearchResult *_selectedAutocompleteResult;
    unsigned long long _selectedAutocompleteResultIndex;
    EKUIAutocompleteSearchResult *_zeroKeywordResult;
    EKUIAutocompleteSearchResult *_naturalLanguageResult;
    BOOL _hasShownZeroKeywordResult;
    BOOL _hasShownNaturalLanguageResult;
    EKUIAutocompletePETTracker *_autocompletePETTracker;
    BOOL _showAttachments;
    UIColor *_backgroundColor;
    NSString *_suggestionKey;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL showAttachments; // @synthesize showAttachments=_showAttachments;
@property (strong, nonatomic) NSString *suggestionKey; // @synthesize suggestionKey=_suggestionKey;
@property (readonly) Class superclass;

+ (Class)_SGSuggestionsServiceClass;
+ (void)_applyTimeToAutocompleteResults:(id)arg1 usingCurrentStartDate:(id)arg2 currentEndDate:(id)arg3 timeImplicitlySet:(BOOL)arg4;
+ (id)_copyAlarmsForAutocompleteFromResult:(id)arg1;
+ (id)_copyAttendeesForAutocompleteFromResult:(id)arg1;
+ (void)_modifyCurrentEvent:(id)arg1 withAutocompleteResult:(id)arg2;
+ (id)_now;
+ (id)defaultTitleForCalendarItem;
- (void).cxx_destruct;
- (void)_beginAutocompleteSearch:(id)arg1;
- (id)_calendarItemIndexSet;
- (void)_cancelPendingAutocompleteAndCleanup;
- (void)_copyEventForPossibleRevert;
- (id)_editItems;
- (void)_focusAppearanceTarget;
- (void)_hideAndCancelAutocompleteResults;
- (id)_nameForDeleteButton;
- (id)_orderedEditItems;
- (void)_revertEvent;
- (void)_scheduleAutocompleteSearchWithString:(id)arg1;
- (void)_scheduleAutocompleteTimerIfNeeded;
- (void)_setAutocompleteResultsVisible:(BOOL)arg1;
- (void)_setEventTitleForTestingAutocomplete:(id)arg1;
- (void)_showAutocompleteResults;
- (void)_updateTitleEditItemSeparatorVisibility;
- (id)_viewForSheet;
- (void)autocompleteResultsEditItem:(id)arg1 resultSelected:(id)arg2;
- (void)autocompleteResultsEditItemDidHideResults:(id)arg1;
- (void)autocompleteResultsEditItemDidShowResults:(id)arg1;
- (id)defaultAlertTitle;
- (void)editItemDidStartEditing:(id)arg1;
- (void)editItemTextChanged:(id)arg1;
- (unsigned long long)entityType;
- (void)focus:(unsigned long long)arg1 select:(BOOL)arg2;
- (void)loadView;
- (id)notificationNamesForLocaleChange;
- (struct CGSize)preferredContentSize;
- (id)preferredTitle;
- (void)prepareEditItems;
- (void)refreshInvitees;
- (void)refreshLocation;
- (void)refreshStartAndEndDates;
- (BOOL)saveCalendarItemWithSpan:(long long)arg1 error:(id *)arg2;
- (void)setupDeleteButton;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end


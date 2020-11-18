//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class EKCalendar, EKEventStore, EKSource, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, UIRefreshControl, UITableView, _UIAccessDeniedView;
@protocol EKCalendarChooserDelegate, EKStyleProvider;

@interface EKCalendarChooser : UIViewController
{
    BOOL _disableCalendarEditing;
    BOOL _showsDeclinedEventsSetting;
    BOOL _showDetailAccessories;
    BOOL _showDefaultCalendarExplanatoryText;
    int _chooserMode;
    CDStruct_a7a51b3b _flags;
    long long _style;
    NSMutableSet *_selectedCalendars;
    id<EKCalendarChooserDelegate> _delegate;
    unsigned long long _entityType;
    long long _lastAuthorizationStatus;
    EKEventStore *_eventStore;
    UITableView *_tableView;
    NSMutableArray *_groups;
    NSMutableDictionary *_storeGroupMap;
    NSMutableDictionary *_customGroupMap;
    NSIndexPath *_checkedRow;
    id<EKStyleProvider> _styleProvider;
    EKSource *_limitedToSource;
    _UIAccessDeniedView *_accessDeniedView;
    long long _refreshCounter;
    UIRefreshControl *_refreshControl;
}

@property (strong, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property (nonatomic) BOOL allowsEdit;
@property (nonatomic) BOOL allowsPullToRefresh;
@property (nonatomic) BOOL allowsRotation;
@property (strong, nonatomic) NSIndexPath *checkedRow; // @synthesize checkedRow=_checkedRow;
@property (nonatomic) int chooserMode; // @synthesize chooserMode=_chooserMode;
@property (strong, nonatomic) NSMutableDictionary *customGroupMap; // @synthesize customGroupMap=_customGroupMap;
@property (weak, nonatomic) id<EKCalendarChooserDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL disableCalendarEditing; // @synthesize disableCalendarEditing=_disableCalendarEditing;
@property (nonatomic) unsigned long long entityType; // @synthesize entityType=_entityType;
@property (strong, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property (nonatomic) CDStruct_a7a51b3b flags; // @synthesize flags=_flags;
@property (strong, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property (nonatomic) long long lastAuthorizationStatus; // @synthesize lastAuthorizationStatus=_lastAuthorizationStatus;
@property (strong, nonatomic) EKSource *limitedToSource; // @synthesize limitedToSource=_limitedToSource;
@property (strong, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property (nonatomic) long long refreshCounter; // @synthesize refreshCounter=_refreshCounter;
@property (strong, nonatomic) EKCalendar *selectedCalendar;
@property (strong, nonatomic) NSMutableSet *selectedCalendarSet; // @synthesize selectedCalendarSet=_selectedCalendars;
@property (copy, nonatomic) NSSet *selectedCalendars;
@property (nonatomic) long long selectionStyle; // @synthesize selectionStyle=_style;
@property (nonatomic) BOOL showDefaultCalendarExplanatoryText; // @synthesize showDefaultCalendarExplanatoryText=_showDefaultCalendarExplanatoryText;
@property (nonatomic) BOOL showDetailAccessories; // @synthesize showDetailAccessories=_showDetailAccessories;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsDeclinedEventsSetting; // @synthesize showsDeclinedEventsSetting=_showsDeclinedEventsSetting;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsRefreshButton;
@property (strong, nonatomic) NSMutableDictionary *storeGroupMap; // @synthesize storeGroupMap=_storeGroupMap;
@property (strong, nonatomic) id<EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (void)_applySelection;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_beginSyncCompletedTimeout;
- (BOOL)_calendarAvailableForEditing:(id)arg1;
- (BOOL)_canEnableRefresh;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_cancelSyncCompletedTimeout;
- (id)_cellIdentifierWithSubtitle:(BOOL)arg1;
- (long long)_declinedEventsSwitchSection;
- (void)_eventStoreChanged:(id)arg1;
- (id)_filterCalendars:(id)arg1;
- (id)_groupForCustomGroupType:(int)arg1;
- (id)_groupForSource:(id)arg1;
- (id)_indexPathForCalendar:(id)arg1 source:(id)arg2;
- (void)_insertStoreIntoByGroupArray:(id)arg1;
- (BOOL)_isEllipsisCellForGroup:(id)arg1 rowIndex:(long long)arg2;
- (id)_loadCalendars;
- (int)_numSelectedGroups;
- (void)_populateGroupsForCalendars:(id)arg1;
- (void)_pulledToRefresh:(id)arg1;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_restoreSelection:(id)arg1 newCalendars:(id)arg2;
- (id)_saveSelection;
- (void)_selectAllCalendarsAndStores:(BOOL)arg1;
- (void)_selectCalendar:(id)arg1 selected:(BOOL)arg2;
- (void)_selectGroup:(id)arg1 selected:(BOOL)arg2;
- (void)_setCalendars:(id)arg1;
- (BOOL)_shouldShowGroupNameInSection:(long long)arg1;
- (id)_stringForSharedCalendar:(id)arg1;
- (void)_syncCompletedGracePeriodExpired;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (id)_tableHeaderView;
- (BOOL)_tableShouldDisplayAllCalendarsSection;
- (BOOL)_tableShouldDisplayAllCellForGroup:(id)arg1;
- (BOOL)_tableShouldDisplayNewCalendarCellForGroup:(id)arg1;
- (id)_viewModeTitle;
- (void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)declinedEventsSwitchChanged:(id)arg1;
- (void)done:(id)arg1;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4 limitedToSource:(id)arg5;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 eventStore:(id)arg3;
- (void)loadView;
- (double)marginForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)refresh:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowAll:(BOOL)arg1;
- (void)setShowsWritableCalendarsOnly:(BOOL)arg1;
- (BOOL)showsWritableCalendarsOnly;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end


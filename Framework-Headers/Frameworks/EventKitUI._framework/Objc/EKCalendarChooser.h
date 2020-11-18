//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKUIAccountRefresherDelegate-Protocol.h>

@class EKCalendar, EKEventStore, EKSource, EKUIAccountRefresher, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, UIBarButtonItem, UIRefreshControl, UITableView, _UIAccessDeniedView;
@protocol EKCalendarChooserDelegate, EKStyleProvider;

@interface EKCalendarChooser : UIViewController <EKUIAccountRefresherDelegate>
{
    EKUIAccountRefresher *_currentAccountRefresher;
    NSMutableDictionary *_accountErrorAnalyticsState;
    BOOL _disableCalendarEditing;
    BOOL _showsDeclinedEventsSetting;
    BOOL _showDefaultCalendarExplanatoryText;
    BOOL _showAccountStatus;
    BOOL _showDetailAccessories;
    BOOL _allowsEdit;
    CDStruct_424d6339 _flags;
    int _chooserMode;
    long long _style;
    NSMutableSet *_selectedCalendars;
    id<EKCalendarChooserDelegate> _delegate;
    unsigned long long _entityType;
    long long _lastAuthorizationStatus;
    EKEventStore *_eventStore;
    UITableView *_tableView;
    UIBarButtonItem *_showAllButton;
    NSMutableArray *_groups;
    NSMutableDictionary *_storeGroupMap;
    NSMutableDictionary *_customGroupMap;
    NSIndexPath *_checkedRow;
    id<EKStyleProvider> _styleProvider;
    EKSource *_limitedToSource;
    _UIAccessDeniedView *_accessDeniedView;
    UIRefreshControl *_refreshControl;
}

@property (strong, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property (nonatomic) BOOL allowsEdit; // @synthesize allowsEdit=_allowsEdit;
@property (nonatomic) BOOL allowsPullToRefresh;
@property (nonatomic) BOOL allowsRotation;
@property (strong, nonatomic) NSIndexPath *checkedRow; // @synthesize checkedRow=_checkedRow;
@property (nonatomic) int chooserMode; // @synthesize chooserMode=_chooserMode;
@property (strong, nonatomic) NSMutableDictionary *customGroupMap; // @synthesize customGroupMap=_customGroupMap;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKCalendarChooserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableCalendarEditing; // @synthesize disableCalendarEditing=_disableCalendarEditing;
@property (nonatomic) unsigned long long entityType; // @synthesize entityType=_entityType;
@property (strong, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property (nonatomic) CDStruct_424d6339 flags; // @synthesize flags=_flags;
@property (strong, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastAuthorizationStatus; // @synthesize lastAuthorizationStatus=_lastAuthorizationStatus;
@property (strong, nonatomic) EKSource *limitedToSource; // @synthesize limitedToSource=_limitedToSource;
@property (strong, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property (strong, nonatomic) EKCalendar *selectedCalendar;
@property (strong, nonatomic) NSMutableSet *selectedCalendarSet; // @synthesize selectedCalendarSet=_selectedCalendars;
@property (copy, nonatomic) NSSet *selectedCalendars;
@property (nonatomic) long long selectionStyle; // @synthesize selectionStyle=_style;
@property (nonatomic) BOOL showAccountStatus; // @synthesize showAccountStatus=_showAccountStatus;
@property (strong, nonatomic) UIBarButtonItem *showAllButton; // @synthesize showAllButton=_showAllButton;
@property (nonatomic) BOOL showDefaultCalendarExplanatoryText; // @synthesize showDefaultCalendarExplanatoryText=_showDefaultCalendarExplanatoryText;
@property (nonatomic) BOOL showDetailAccessories; // @synthesize showDetailAccessories=_showDetailAccessories;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsDeclinedEventsSetting; // @synthesize showsDeclinedEventsSetting=_showsDeclinedEventsSetting;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsRefreshButton;
@property (strong, nonatomic) NSMutableDictionary *storeGroupMap; // @synthesize storeGroupMap=_storeGroupMap;
@property (weak, nonatomic) id<EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

+ (id)_subscribedLocalizedString;
+ (BOOL)groups:(id)arg1 differStructurallyFromGroups:(id)arg2;
+ (id)hideAllString;
+ (id)showAllString;
- (void).cxx_destruct;
- (BOOL)_applySelection;
- (BOOL)_calendarAvailableForEditing:(id)arg1;
- (id)_cellIdentifierWithSubtitle:(BOOL)arg1;
- (long long)_declinedEventsSwitchSection;
- (void)_eventStoreChanged:(id)arg1;
- (id)_filterCalendars:(id)arg1;
- (void)_finishRefreshing;
- (id)_groupForCustomGroupType:(int)arg1;
- (id)_groupForSource:(id)arg1;
- (id)_indexPathForCalendar:(id)arg1 source:(id)arg2;
- (void)_insertStoreIntoByGroupArray:(id)arg1;
- (id)_loadCalendars;
- (int)_numSelectedGroups;
- (void)_populateGroupsForCalendars:(id)arg1 footersChanged:(BOOL *)arg2;
- (void)_pulledToRefresh:(id)arg1;
- (void)_restoreSelection:(id)arg1 newCalendars:(id)arg2;
- (id)_saveSelection;
- (void)_selectAllCalendarsAndStores:(BOOL)arg1;
- (void)_selectCalendar:(id)arg1 selected:(BOOL)arg2;
- (void)_selectGroup:(id)arg1 selected:(BOOL)arg2;
- (void)_sendAnalyticsEvent:(unsigned long long)arg1 forGroup:(id)arg2;
- (void)_setCalendars:(id)arg1 changedObjectsHint:(id)arg2;
- (BOOL)_shouldShowGroupNameInSection:(long long)arg1;
- (id)_statusTextForGroup:(id)arg1;
- (id)_stringForSharedCalendar:(id)arg1;
- (id)_tableHeaderView;
- (BOOL)_tableShouldDisplayVerifyAccountCellForGroup:(id)arg1;
- (id)_viewModeTitle;
- (void)accountRefreshFinished:(id)arg1;
- (void)addCalendarButtonPressed;
- (void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (long long)calendarRowOffsetForGroup:(long long)arg1;
- (void)cancel:(id)arg1;
- (void)declinedEventsSwitchChanged:(id)arg1;
- (void)done:(id)arg1;
- (void)groupShowAllTapped:(id)arg1;
- (BOOL)hasAccountThatCanCreateCalendars;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4 limitedToSource:(id)arg5;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 eventStore:(id)arg3;
- (void)loadView;
- (double)marginForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)refresh:(id)arg1;
- (void)setAllSelected:(BOOL)arg1;
- (void)setShowAll:(BOOL)arg1;
- (void)setShowsWritableCalendarsOnly:(BOOL)arg1;
- (void)showAllButtonPressed;
- (BOOL)showsWritableCalendarsOnly;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)tableSectionRow:(long long)arg1 toCalendarIndexInGroup:(long long)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)verifyAccountForGroup:(id)arg1;
- (long long)verifyAccountIndexForGroup:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

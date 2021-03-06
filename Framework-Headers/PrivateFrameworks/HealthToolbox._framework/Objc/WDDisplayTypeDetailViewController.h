//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKInteractiveChartViewObserver-Protocol.h>
#import <HealthToolbox/UITableViewDataSource-Protocol.h>
#import <HealthToolbox/UITableViewDelegate-Protocol.h>
#import <HealthToolbox/WDSourceOrderObserver-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKDisplayCategory, HKDisplayType, HKInteractiveChartViewController, HKNavigationController, HKTimeScopeControl, NSDate, NSMutableArray, NSSet, NSString, UIFont, WDProfile, _UINavigationControllerPalette;

__attribute__((visibility("hidden")))
@interface WDDisplayTypeDetailViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, HKInteractiveChartViewObserver, WDSourceOrderObserver, WDUserActivityResponder>
{
    HKDisplayType *_displayType;
    HKDisplayCategory *_displayCategory;
    HKNavigationController *_monthNavController;
    NSDate *_selectedDate;
    _UINavigationControllerPalette *_palette;
    HKTimeScopeControl *_timeSpanControl;
    NSSet *_availableUnits;
    BOOL _inLandscapeMode;
    WDProfile *_profile;
    NSMutableArray *_sections;
    UIFont *_bodyFont;
    HKInteractiveChartViewController *_interactiveChartViewController;
}

@property (strong, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKInteractiveChartViewController *interactiveChartViewController; // @synthesize interactiveChartViewController=_interactiveChartViewController;
@property (strong, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2;
- (void)_attachPaletteIfNecessary;
- (BOOL)_canSelectUnitsRow;
- (void)_changeTimeScope:(long long)arg1;
- (void)_configureCell:(id)arg1 forTableView:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_detachPaletteIfNecessary;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (id)_selectedUnitCellText;
- (void)_setupObservers;
- (BOOL)_shouldShowUnitsRow;
- (id)_showAddDataVC:(id)arg1;
- (id)_showAllDataVC:(id)arg1;
- (void)_timeFrameForChartsChanged:(id)arg1;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)addSectionWithItem:(id)arg1;
- (void)addSectionWithItems:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (void)calculateSections;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayType:(id)arg1 displayCategory:(id)arg2 profile:(id)arg3 displayDate:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sourceOrderUpdatedWithOrder:(id)arg1 dataType:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end


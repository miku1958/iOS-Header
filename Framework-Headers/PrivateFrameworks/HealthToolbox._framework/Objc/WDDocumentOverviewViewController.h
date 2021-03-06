//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKDisplayType, NSMutableArray, NSString, UIFont, WDDocumentListDataProvider, WDProfile;

__attribute__((visibility("hidden")))
@interface WDDocumentOverviewViewController : HKTableViewController <WDUserActivityResponder>
{
    HKDisplayType *_displayType;
    WDProfile *_profile;
    WDDocumentListDataProvider *_dataProvider;
    NSMutableArray *_sectionTypes;
    NSMutableArray *_reportRowTypes;
    long long _totalReportCount;
    UIFont *_bodyFont;
}

@property (strong, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property (readonly, nonatomic) WDDocumentListDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSMutableArray *reportRowTypes; // @synthesize reportRowTypes=_reportRowTypes;
@property (strong, nonatomic) NSMutableArray *sectionTypes; // @synthesize sectionTypes=_sectionTypes;
@property (readonly) Class superclass;
@property (nonatomic) long long totalReportCount; // @synthesize totalReportCount=_totalReportCount;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_descriptionSectionCellForTableView:(id)arg1 row:(long long)arg2;
- (void)_installSections;
- (void)_pushAccessViewController;
- (void)_pushReportDetailViewControllerForIndexPath:(id)arg1;
- (void)_pushShowAllViewController;
- (void)_recomputeTotalReportCount;
- (void)_reloadAllData;
- (id)_reportAccessCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)_reportItemCellForTableView:(id)arg1 row:(long long)arg2;
- (id)_reportSectionCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (double)_reportSectionEstimatedRowHeight:(long long)arg1;
- (double)_reportSectionRowHeight:(long long)arg1;
- (id)_reportShowAllCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (void)_selectReportRowForIndexPath:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 title:(id)arg3 category:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKSwitchTableViewCellDelegate-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKAudiogramChartViewController, HKDisplayType, NSArray, NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDAudiogramOverviewViewController : HKTableViewController <HKSwitchTableViewCellDelegate, WDUserActivityResponder>
{
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKAudiogramChartViewController *_audiogramChartViewController;
    NSArray *_sectionToRows;
}

@property (readonly, nonatomic) HKAudiogramChartViewController *audiogramChartViewController; // @synthesize audiogramChartViewController=_audiogramChartViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSArray *sectionToRows; // @synthesize sectionToRows=_sectionToRows;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addToFavoritesCell;
- (id)_audiogramChartCell;
- (id)_descriptionCell;
- (BOOL)_isDisplayTypeFavorited;
- (void)_pushShowAllDataViewController;
- (void)_pushSourcesAndAccessViewController;
- (void)_queryForAudiogramChartSamples;
- (void)_rebuildSections;
- (long long)_rowTypeForIndexPath:(id)arg1;
- (BOOL)_sectionNumber:(long long)arg1 containsRowType:(long long)arg2;
- (id)_showAllDataCell;
- (id)_sourcesAndAccessCell;
- (void)_updateActivityForViewDidAppear;
- (void)_updateAudiogramSamples:(id)arg1 error:(id)arg2;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end


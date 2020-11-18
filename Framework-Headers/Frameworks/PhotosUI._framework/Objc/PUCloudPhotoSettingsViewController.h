//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSDictionary, UIBarButtonItem, UIButton, UIToolbar;

__attribute__((visibility("hidden")))
@interface PUCloudPhotoSettingsViewController : UITableViewController
{
    BOOL _isAutorefreshingStatistics;
    UIButton *_resetStatisticsButton;
    UIToolbar *_statisticsPeriodToolbar;
    UIBarButtonItem *_playPauseToolbarButton;
    NSDictionary *_latestStatisticsSnapshot;
    struct __CFNotificationCenter *_updateNotificationsCtr;
    long long _statisticsPeriod;
}

+ (id)settingsMenuActionHandler;
- (void).cxx_destruct;
- (BOOL)autoupdatesEnabled;
- (void)dealloc;
- (void)highlightActiveStatisticsPeriodButton:(id)arg1;
- (id)init;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)playPauseNavigationButton;
- (void)reloadStatistics;
- (void)resetStatistics;
- (void)setStatisticsPeriod:(long long)arg1;
- (void)setStatisticsPeriodAsDay:(id)arg1;
- (void)setStatisticsPeriodAsHour:(id)arg1;
- (void)setStatisticsPeriodAsMinute:(id)arg1;
- (void)setStatisticsPeriodAsWeek:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

@end

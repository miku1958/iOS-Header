//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/MPUTableViewController.h>

@class AVExternalDevice, UIView;

@interface MCDTableViewController : MPUTableViewController
{
    AVExternalDevice *_externalDevice;
    UIView *_nowPlayingButton;
    UIView *_snapshotView;
    BOOL _limiting;
    BOOL _shouldHideIndexTitles;
    BOOL _limitedUI;
    BOOL _showMore;
}

@property (nonatomic) BOOL limitedUI; // @synthesize limitedUI=_limitedUI;
@property (nonatomic) BOOL shouldHideIndexTitles; // @synthesize shouldHideIndexTitles=_shouldHideIndexTitles;
@property (nonatomic) BOOL showMore; // @synthesize showMore=_showMore;

+ (Class)_tableViewClass;
- (void).cxx_destruct;
- (id)MPU_createNowPlayingButton;
- (void)_MCD_nowPlayingButtonAction:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_limitedUIDidChange;
- (BOOL)_viewControllerWasSelected;
- (void)dataSourceDidInvalidate;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (id)preferredFocusedItem;
- (void)reloadData;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (BOOL)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (BOOL)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end


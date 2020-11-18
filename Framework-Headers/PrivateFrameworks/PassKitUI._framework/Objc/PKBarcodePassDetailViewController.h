//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PassKitUI/PKPassHeaderViewDelegate-Protocol.h>
#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class BluetoothManager, NSArray, NSMutableDictionary, NSObject, NSString, PKLinkedAppView, PKPass, PKPassColorProfile, PKPassDisplayProfile, PKPassHeaderView, PKSettingTableCell, UIRefreshControl, UISegmentedControl, UITableViewCell, UIView, UIVisualEffectView;
@protocol OS_dispatch_source, PKPassDeleteHandler;

@interface PKBarcodePassDetailViewController : UITableViewController <UITextViewDelegate, PKPassHeaderViewDelegate>
{
    PKPassDisplayProfile *_displayProfile;
    PKPassColorProfile *_colorProfile;
    PKLinkedAppView *_linkedApp;
    UIView *_locationHelpView;
    UIRefreshControl *_refreshControl;
    PKSettingTableCell *_automaticUpdatesCell;
    PKSettingTableCell *_showInLockScreenCell;
    PKSettingTableCell *_automaticSelectionCell;
    UITableViewCell *_shareCell;
    UITableViewCell *_personalizePassCell;
    UITableViewCell *_deleteCell;
    NSArray *_rowCountBySection;
    unsigned long long _linkedAppSection;
    unsigned long long _settingsSection;
    unsigned long long _automaticSelectionSection;
    unsigned long long _shareSection;
    unsigned long long _deleteSection;
    unsigned long long _personalizePassSection;
    unsigned long long _fieldsSection;
    NSMutableDictionary *_fieldCellsByIndexPath;
    NSMutableDictionary *_fieldCellHeightsByIndexPath;
    NSObject<OS_dispatch_source> *_refreshTimeout;
    BluetoothManager *_btManager;
    BOOL _isBluetoothEnabled;
    BOOL _isLocationEnabled;
    BOOL _isWifiEnabled;
    BOOL _showsShare;
    BOOL _showsSettings;
    BOOL _showsDelete;
    BOOL _showsLinks;
    BOOL _showsLinkedApp;
    BOOL _showsPersonalize;
    NSArray *_tabBarSegments;
    double _headerHeight;
    struct UIEdgeInsets _headerContentInset;
    double _tabBarHeight;
    double _previousLayoutTableViewWidth;
    BOOL _navigationControllerHidesShadow;
    UIView *_headerView;
    PKPassHeaderView *_passHeaderView;
    UIVisualEffectView *_blurView;
    UISegmentedControl *_tabBar;
    UIView *_keyLine;
    PKPass *_pass;
    unsigned long long _suppressedContent;
    id<PKPassDeleteHandler> _deleteOverrider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;

+ (id)_linkColor;
+ (id)_linkTextAttributes;
+ (BOOL)isWifiEnabled;
- (void).cxx_destruct;
- (id)_automaticSelectionCell;
- (void)_bluetoothPowerChanged:(id)arg1;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (id)_deleteCell;
- (void)_deletePass;
- (void)_done:(id)arg1;
- (id)_fieldCellForIndexPath:(id)arg1;
- (id)_fieldForIndexPath:(id)arg1;
- (BOOL)_isBluetoothEnabled;
- (BOOL)_linkedAppAvailable;
- (id)_locationHelpViewForTableView:(id)arg1;
- (id)_locationRelevancyHelpText;
- (void)_passSettingsChanged:(id)arg1;
- (BOOL)_personalizeAvailable;
- (id)_personalizePassCell;
- (void)_refreshFinished:(BOOL)arg1;
- (id)_relevantBuckets;
- (void)_reloadPassAndView;
- (BOOL)_settingsAvailable;
- (id)_settingsCellForRow:(unsigned long long)arg1;
- (id)_shareCell;
- (void)_sharePass;
- (void)_tabBarSegmentChanged:(id)arg1;
- (BOOL)_updateHeaderHeight;
- (void)_updatePassProperties;
- (void)_updateTabBar;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTableSections;
- (void)_wifiChanged:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)linkedApp;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (BOOL)pkui_prefersNavigationBarShadowHidden;
- (void)pushSettingsFromViewToModel;
- (void)refreshControlValueChanged:(id)arg1;
- (void)reloadData;
- (void)setShowsLinks:(BOOL)arg1;
- (BOOL)shouldAllowRefresh;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;

@end


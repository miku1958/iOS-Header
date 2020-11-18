//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKPassHeaderViewDelegate-Protocol.h>
#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class BluetoothManager, NSArray, NSMutableDictionary, NSObject, NSString, PKBarcodeTableViewCell, PKLinkedAppView, PKPass, PKPassColorProfile, PKPassDisplayProfile, PKPassHeaderView, PKSettingTableCell, UIRefreshControl, UISegmentedControl, UITableViewCell, UIView;
@protocol OS_dispatch_source, PKPassDeleteHandler;

@interface PKBarcodePassDetailViewController : PKSectionTableViewController <UITextViewDelegate, PKPassHeaderViewDelegate>
{
    PKPassDisplayProfile *_displayProfile;
    PKPassColorProfile *_colorProfile;
    PKLinkedAppView *_linkedApp;
    UIView *_locationHelpView;
    UIRefreshControl *_refreshControl;
    PKSettingTableCell *_automaticUpdatesCell;
    PKSettingTableCell *_showNotificationsCell;
    PKSettingTableCell *_showInLockScreenCell;
    PKSettingTableCell *_automaticSelectionCell;
    UITableViewCell *_shareCell;
    UITableViewCell *_personalizePassCell;
    UITableViewCell *_deleteCell;
    PKBarcodeTableViewCell *_barcodeCell;
    NSMutableDictionary *_fieldCellsByRow;
    NSMutableDictionary *_fieldCellHeightsByRow;
    BOOL _forcedRefresh;
    double _forcedTopContentInset;
    NSObject<OS_dispatch_source> *_refreshTimeout;
    BluetoothManager *_btManager;
    BOOL _isBluetoothEnabled;
    BOOL _isLocationEnabled;
    BOOL _isWifiEnabled;
    BOOL _showsLinks;
    NSArray *_tabBarSegments;
    double _headerHeight;
    struct UIEdgeInsets _headerContentInset;
    double _tabBarHeight;
    struct CGSize _previousLayoutTableViewBoundsSize;
    BOOL _navigationControllerHidesShadow;
    UIView *_headerView;
    PKPassHeaderView *_passHeaderView;
    UISegmentedControl *_tabBar;
    BOOL _didRampScreenBrightness;
    unsigned char _visiblityState;
    BOOL _navigationBarVisible;
    BOOL _showDoneButton;
    PKPass *_pass;
    unsigned long long _suppressedContent;
    id<PKPassDeleteHandler> _deleteOverrider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property (nonatomic) BOOL showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;

+ (id)_linkColor;
+ (id)_linkTextAttributes;
+ (BOOL)isWifiEnabled;
- (void).cxx_destruct;
- (id)_automaticSelectionCell;
- (id)_barcodeCell;
- (void)_bluetoothPowerChanged:(id)arg1;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (id)_deleteCell;
- (void)_deletePass;
- (void)_done:(id)arg1;
- (id)_fieldCellForRow:(unsigned long long)arg1;
- (id)_fieldForRow:(unsigned long long)arg1;
- (BOOL)_isBluetoothEnabled;
- (BOOL)_linkedAppAvailable;
- (id)_locationHelpViewForTableView:(id)arg1;
- (id)_locationRelevancyHelpText;
- (unsigned long long)_numberOfAvailableSettings;
- (double)_offscreenHeaderHeight;
- (void)_passSettingsChanged:(id)arg1;
- (BOOL)_personalizeAvailable;
- (id)_personalizePassCell;
- (void)_refreshFinished:(BOOL)arg1;
- (id)_relevantBuckets;
- (void)_reloadPassAndView;
- (void)_reloadTitle;
- (unsigned long long)_settingForRow:(unsigned long long)arg1;
- (BOOL)_settingsAvailable;
- (id)_settingsCellForRow:(unsigned long long)arg1;
- (id)_shareCell;
- (void)_sharePass;
- (void)_tabBarSegmentChanged:(id)arg1;
- (double)_titleOpacityForBounds:(struct CGRect)arg1 lowerBoundary:(double)arg2 higherBoundary:(double)arg3;
- (BOOL)_updateHeaderHeightDeterminingLayout:(BOOL)arg1;
- (void)_updatePassProperties;
- (void)_updateTabBar;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_wifiChanged:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2;
- (id)linkedApp;
- (void)loadView;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (double)pkui_preferredNavigationBarBackgroundOpacity;
- (BOOL)pkui_prefersNavigationBarShadowHidden;
- (void)pushSettingsFromViewToModel;
- (void)refreshControlValueChanged:(id)arg1;
- (BOOL)reloadData;
- (void)reloadSection:(unsigned long long)arg1;
- (void)reloadSections:(id)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setShowsLinks:(BOOL)arg1;
- (BOOL)shouldAllowRefresh;
- (BOOL)shouldMapSection:(unsigned long long)arg1;
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
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end


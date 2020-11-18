//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaPlayer/MPAVRoutingTableViewCellDelegate-Protocol.h>
#import <MediaPlayer/UITableViewDataSource-Protocol.h>
#import <MediaPlayer/UITableViewDelegate-Protocol.h>

@class MPAVRoute, MPAVRoutingController, MPAVRoutingEmptyStateView, MPAVRoutingTableHeaderView, MPWeakTimer, NSArray, NSNumber, NSString, UIColor, UITableView;
@protocol MPAVRoutingViewControllerDelegate;

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    MPAVRoutingTableHeaderView *_tableHeaderView;
    MPAVRoutingEmptyStateView *_emptyStateView;
    NSArray *_cachedRoutes;
    BOOL _cachedRoutesHasRoutePickedOnPairedDevice;
    MPAVRoute *_lastPendingPickedRoute;
    MPWeakTimer *_updateTimer;
    MPAVRoutingController *_routingController;
    long long _routeDiscoveryMode;
    UIColor *_tableCellsBackgroundColor;
    UIColor *_tableCellsContentColor;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _cachedShowAirPlayDebugButton;
    BOOL _hasCachedAirPlayDebugButtonStatus;
    BOOL _needsDisplayedRoutesUpdate;
    BOOL _suspendedDiscoveryModeDueToApplicationState;
    unsigned long long _updatesSincePresentation;
    long long _discoveryModeBeforeEnteringBackground;
    unsigned long long _style;
    id<MPAVRoutingViewControllerDelegate> _delegate;
    long long _avItemType;
    unsigned long long _mirroringStyle;
    unsigned long long _iconStyle;
    NSNumber *_discoveryModeOverride;
}

@property (nonatomic) BOOL allowMirroring;
@property (nonatomic, setter=setAVItemType:) long long avItemType; // @synthesize avItemType=_avItemType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPAVRoutingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSNumber *discoveryModeOverride; // @synthesize discoveryModeOverride=_discoveryModeOverride;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
@property (nonatomic) unsigned long long mirroringStyle; // @synthesize mirroringStyle=_mirroringStyle;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_beginRouteDiscovery;
- (id)_displayableRoutesInRoutes:(id)arg1;
- (id)_displayedRoutes;
- (void)_endRouteDiscovery;
- (double)_expandedCellHeight;
- (double)_normalCellHeight;
- (void)_pickRoute:(id)arg1;
- (void)_registerNotifications;
- (void)_reloadEmptyStateVisibility;
- (id)_routesWhereMirroringIsPreferred;
- (id)_routingController;
- (void)_serviceWillPresentAuthenticationPromptNotification:(id)arg1;
- (void)_setNeedsDisplayedRoutesUpdate;
- (void)_setNeedsRouteDiscoveryModeUpdate;
- (void)_setRouteDiscoveryMode:(long long)arg1;
- (void)_setTableCellsBackgroundColor:(id)arg1;
- (void)_setTableCellsContentColor:(id)arg1;
- (void)_setupUpdateTimerIfNecessary;
- (BOOL)_shouldShowAirPlayDebugButton;
- (BOOL)_shouldShowAirPlayMirroringCompactDescriptionHeader;
- (BOOL)_shouldShowMirroringCellForRoute:(id)arg1;
- (void)_showAirPlayDebug;
- (id)_tableCellsBackgroundColor;
- (id)_tableCellsContentColor;
- (id)_tableHeaderView;
- (id)_tableView;
- (double)_tableViewFooterViewHeight;
- (double)_tableViewHeaderViewHeight;
- (double)_tableViewHeightAccordingToDataSource;
- (unsigned long long)_tableViewNumberOfRows;
- (void)_unregisterNotifications;
- (void)_updateDisplayedRoutes;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(BOOL)arg2;
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end


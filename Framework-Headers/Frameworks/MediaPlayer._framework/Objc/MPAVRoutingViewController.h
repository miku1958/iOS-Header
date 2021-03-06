//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/CARSessionObserving-Protocol.h>
#import <MediaPlayer/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaPlayer/MPAVRoutingTableViewCellDelegate-Protocol.h>
#import <MediaPlayer/UITableViewDataSource-Protocol.h>
#import <MediaPlayer/UITableViewDelegate-Protocol.h>
#import <MediaPlayer/_MPStateDumpPropertyListTransformable-Protocol.h>

@class CARSessionStatus, MPAVClippingTableView, MPAVEndpointRoute, MPAVRoute, MPAVRoutingController, MPAVRoutingViewControllerUpdate, MPSectionedCollection, MPVolumeGroupSliderCoordinator, MPWeakTimer, NSArray, NSDictionary, NSMapTable, NSMutableSet, NSNumber, NSString, UIColor, UITableView;
@protocol MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate;

@interface MPAVRoutingViewController : UIViewController <CARSessionObserving, UITableViewDataSource, UITableViewDelegate, MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, _MPStateDumpPropertyListTransformable>
{
    MPAVClippingTableView *_tableView;
    MPAVRoutingViewControllerUpdate *_pendingUpdate;
    MPAVRoutingViewControllerUpdate *_optimisticUpdate;
    BOOL _isAnimatingUpdate;
    MPAVRoute *_displayedEndpointRoute;
    MPSectionedCollection *_routingViewItems;
    NSArray *_cachedPickedRoutes;
    NSArray *_cachedDisplayableAvailableRoutes;
    NSArray *_cachedPendingPickedRoutes;
    NSArray *_cachedDisplayAsPickedRoutes;
    NSArray *_cachedVolumeCapableRoutes;
    NSDictionary *_cachedRouteGrouping;
    NSMutableSet *_expandedGroupUIDs;
    MPWeakTimer *_updateTimer;
    MPAVRoutingController *_routingController;
    long long _routeDiscoveryMode;
    UIColor *_tableCellsBackgroundColor;
    UIColor *_tableCellsContentColor;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _needsDisplayedRoutesUpdate;
    BOOL _suspendedDiscoveryModeDueToApplicationState;
    BOOL _shouldAutomaticallyUpdateRoutesList;
    BOOL _shouldPickRouteOnSelection;
    BOOL _onScreen;
    BOOL _hasUserSelections;
    CARSessionStatus *_carPlayStatus;
    unsigned long long _updatesSincePresentation;
    long long _discoveryModeBeforeEnteringBackground;
    BOOL _sortByIsVideoRoute;
    unsigned long long _style;
    id<MPAVRoutingViewControllerDelegate> _delegate;
    long long _avItemType;
    unsigned long long _mirroringStyle;
    unsigned long long _iconStyle;
    NSNumber *_discoveryModeOverride;
    id<MPAVRoutingViewControllerThemeDelegate> _themeDelegate;
    MPAVEndpointRoute *_endpointRoute;
    double _continuousCornerRadius;
    NSMapTable *_outputDeviceVolumeSliders;
    MPVolumeGroupSliderCoordinator *_groupSliderCoordinator;
}

@property (readonly, nonatomic) double _expandedCellHeight;
@property (readonly, nonatomic) double _normalCellHeight;
@property (readonly, nonatomic) MPAVRoutingController *_routingController;
@property (nonatomic, setter=_setShouldAutomaticallyUpdateRoutesList:) BOOL _shouldAutomaticallyUpdateRoutesList;
@property (nonatomic, setter=_setShouldPickRouteOnSelection:) BOOL _shouldPickRouteOnSelection;
@property (strong, nonatomic, setter=_setTableCellsBackgroundColor:) UIColor *_tableCellsBackgroundColor;
@property (strong, nonatomic, setter=_setTableCellsContentColor:) UIColor *_tableCellsContentColor;
@property (readonly, nonatomic) UITableView *_tableView;
@property (nonatomic) BOOL allowMirroring;
@property (nonatomic, setter=setAVItemType:) long long avItemType; // @synthesize avItemType=_avItemType;
@property (nonatomic, getter=_continuousCornerRadius, setter=_setContinuousCornerRadius:) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPAVRoutingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *discoveryModeOverride; // @synthesize discoveryModeOverride=_discoveryModeOverride;
@property (strong, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
@property (strong, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator; // @synthesize groupSliderCoordinator=_groupSliderCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
@property (readonly, nonatomic, getter=isInCarPlay) BOOL inCarPlay;
@property (nonatomic) unsigned long long mirroringStyle; // @synthesize mirroringStyle=_mirroringStyle;
@property (strong, nonatomic) NSMapTable *outputDeviceVolumeSliders; // @synthesize outputDeviceVolumeSliders=_outputDeviceVolumeSliders;
@property (nonatomic) BOOL sortByIsVideoRoute; // @synthesize sortByIsVideoRoute=_sortByIsVideoRoute;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<MPAVRoutingViewControllerThemeDelegate> themeDelegate; // @synthesize themeDelegate=_themeDelegate;

- (void).cxx_destruct;
- (id)_alertControllerForUpdateDisplayedRoutesCrashWithLogFileURL:(id)arg1 exception:(id)arg2;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applyUpdate:(id)arg1;
- (void)_beginRouteDiscovery;
- (void)_collapseAllGroups;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_crashLogDateFormatter;
- (id)_createRefreshUpdate;
- (id)_createReloadUpdate;
- (id)_createRoutingViewItemsForRoutes:(id)arg1;
- (id)_createSectionedCollection:(id)arg1 withPickedRoutes:(id)arg2;
- (void)_createUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_createVolumeSlider;
- (void)_diplayShareAudioDisabledAlertForReason:(id)arg1;
- (id)_displayAsPickedRoutesInRoutes:(id)arg1;
- (id)_displayableRoutesInRoutes:(id)arg1;
- (void)_endRouteDiscovery;
- (void)_endUpdates;
- (void)_enqueueUpdate:(id)arg1;
- (id)_generatePropertyListFromUpdateDisplayedRoutesState:(id)arg1 exception:(id)arg2;
- (void)_initWithStyle:(unsigned long long)arg1 routingController:(id)arg2;
- (BOOL)_operationRequiresOptimisticState:(long long)arg1 routes:(id)arg2;
- (void)_registerCarPlayObserver;
- (void)_registerNotifications;
- (void)_setNeedsDisplayedRoutesUpdate;
- (void)_setNeedsRouteDiscoveryModeUpdate;
- (void)_setRouteDiscoveryMode:(long long)arg1;
- (void)_setupUpdateTimerIfNecessary;
- (BOOL)_shouldDisplayRouteAsPicked:(id)arg1;
- (id)_stateDumpObject;
- (double)_tableViewFooterViewHeight;
- (double)_tableViewHeaderViewHeight;
- (double)_tableViewHeightAccordingToDataSource;
- (void)_unregisterNotifications;
- (void)_updateDisplayedRoutes;
- (id)_volumeCapableRoutesInRoutes:(id)arg1;
- (void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1;
- (BOOL)_wouldShareAudioForPickedRoute:(id)arg1 operation:(long long)arg2 pickedRoutes:(id)arg3;
- (id)_writeToDiskWithUpdateDisplayedRoutesStatePropertyList:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)endpointGroupUID;
- (void)enqueueRefreshUpdate;
- (id)groupUIDForRoute:(id)arg1;
- (BOOL)hasCarKitRoute;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1 routingController:(id)arg2;
- (BOOL)isInVehicle;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)registerTableViewCells;
- (void)resetDisplayedRoutes;
- (void)resetScrollPosition;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(BOOL)arg2;
- (void)routingCellDidTapToExpand:(id)arg1;
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;
- (void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 alertStyle:(long long)arg3 busyRouteName:(id)arg4 presentingAppName:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)setOptimisticUpdate:(id)arg1;
- (BOOL)shouldGroupRoutingViewItems;
- (BOOL)shouldOverrideContentSizeCategory:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateExpandedGroups;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end


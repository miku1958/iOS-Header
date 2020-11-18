//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSBaseTemplateViewController.h>

#import <CarPlaySupport/BKSHIDEventDeliveryPolicyObserving-Protocol.h>
#import <CarPlaySupport/CARNavigationOwnershipManagerDelegate-Protocol.h>
#import <CarPlaySupport/CARSessionObserving-Protocol.h>
#import <CarPlaySupport/CPMapTemplateProviding-Protocol.h>
#import <CarPlaySupport/CPNavigationSessionProviding-Protocol.h>
#import <CarPlaySupport/CPSApplicationStateObserving-Protocol.h>
#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>
#import <CarPlaySupport/CPSEventObserving-Protocol.h>
#import <CarPlaySupport/CPSLayoutHelperViewDelegate-Protocol.h>
#import <CarPlaySupport/CPSLinearFocusProviding-Protocol.h>
#import <CarPlaySupport/CPSNavigationAlertQueueDelegate-Protocol.h>
#import <CarPlaySupport/CPSNavigationDisplaying-Protocol.h>
#import <CarPlaySupport/CPSPanEventDelegate-Protocol.h>
#import <CarPlaySupport/CPSTripInitiating-Protocol.h>
#import <CarPlaySupport/UIGestureRecognizerDelegate-Protocol.h>

@class BKSHIDEventDeliveryPolicyObserver, CARSessionStatus, CPMapTemplate, CPSApplicationStateMonitor, CPSLayoutHelperView, CPSNavigationAlertQueue, CPSNavigationCardView, CPSNavigationETAView, CPSNavigator, CPSPanViewController, CPSTripPreviewsCardView, CPTripPreviewTextConfiguration, NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, UIColor, UIFocusGuide, UIPanGestureRecognizer, UIStackView, UITapGestureRecognizer, UIView, _CPSFocusHoldingButton;
@protocol CPMapClientTemplateDelegate, CPSSafeAreaDelegate, UIFocusItem;

@interface CPSMapTemplateViewController : CPSBaseTemplateViewController <CARSessionObserving, CPSButtonDelegate, CPSTripInitiating, UIGestureRecognizerDelegate, CPSPanEventDelegate, CPSNavigationAlertQueueDelegate, CPSNavigationDisplaying, CARNavigationOwnershipManagerDelegate, CPSEventObserving, CPSApplicationStateObserving, CPSLayoutHelperViewDelegate, BKSHIDEventDeliveryPolicyObserving, CPMapTemplateProviding, CPSLinearFocusProviding, CPNavigationSessionProviding>
{
    BOOL _previewOnlyRouteChoices;
    BOOL _autoHidesNavigationBar;
    BOOL _hidesButtonsWithNavigationBar;
    BOOL _demoAutoHideTimerDisabled;
    BOOL _applicationIsFrontmost;
    BOOL _rightHandDrive;
    BOOL _hasSetTripEstimateStyle;
    BOOL _shouldRestoreFocusToNavigationBar;
    UIStackView *_trailingBottomStackView;
    unsigned long long _maximumMapButtonCount;
    NSMutableArray *_mapButtons;
    CPSNavigationCardView *_navigationCardView;
    CPSLayoutHelperView *_navigationCardViewLayoutHelperView;
    NSLayoutConstraint *_navigationCardViewLayoutViewBottomConstraint;
    NSLayoutConstraint *_navigationCardViewHeightConstraint;
    NSLayoutConstraint *_navigationCardViewBottomConstraint;
    NSLayoutConstraint *_navigationCardViewTopConstraint;
    CPSTripPreviewsCardView *_previewsView;
    CARSessionStatus *_sessionStatus;
    CPSNavigator *_navigator;
    UITapGestureRecognizer *_hideTapGestureRecognizer;
    UITapGestureRecognizer *_navBarHideTapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSTimer *_autoHideTimer;
    NSMutableSet *_autoHideDisabledReasons;
    NSArray *_tripPreviews;
    CPTripPreviewTextConfiguration *_tripPreviewTextConfiguration;
    CPSPanViewController *_panViewController;
    UIView *_panContainerView;
    NSLayoutConstraint *_panContainerLeftConstraint;
    NSLayoutConstraint *_panContainerRightConstraint;
    CPSNavigationAlertQueue *_navigationAlertQueue;
    NSLayoutConstraint *_navigationAlertBottomConstraint;
    NSLayoutConstraint *_navigationAlertHeightConstraint;
    CPSApplicationStateMonitor *_applicationStateMonitor;
    CPSNavigationETAView *_navigationETAView;
    CPSLayoutHelperView *_navigationETAViewLayoutHelperView;
    NSLayoutConstraint *_navigationETAViewBottomConstraint;
    NSMutableDictionary *_lastTravelEstimatesByTrip;
    id<CPSSafeAreaDelegate> _safeAreaDelegate;
    id<UIFocusItem> _lastFocusedItem;
    id<UIFocusItem> _itemFocusedBeforeNavAlert;
    UIColor *_guidanceBackgroundColor;
    unsigned long long _tripEstimateStyle;
    _CPSFocusHoldingButton *_focusHoldingButton;
    UIFocusGuide *_focusHolderLeftFocusGuide;
    UIFocusGuide *_focusHolderRightFocusGuide;
    BKSHIDEventDeliveryPolicyObserver *_eventDeliveryPolicyObserver;
    struct CGPoint _lastPanGesturePoint;
}

@property (nonatomic) BOOL applicationIsFrontmost; // @synthesize applicationIsFrontmost=_applicationIsFrontmost;
@property (weak, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property (strong, nonatomic) NSMutableSet *autoHideDisabledReasons; // @synthesize autoHideDisabledReasons=_autoHideDisabledReasons;
@property (strong, nonatomic) NSTimer *autoHideTimer; // @synthesize autoHideTimer=_autoHideTimer;
@property (nonatomic) BOOL autoHidesNavigationBar; // @synthesize autoHidesNavigationBar=_autoHidesNavigationBar;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL demoAutoHideTimerDisabled; // @synthesize demoAutoHideTimerDisabled=_demoAutoHideTimerDisabled;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) BKSHIDEventDeliveryPolicyObserver *eventDeliveryPolicyObserver; // @synthesize eventDeliveryPolicyObserver=_eventDeliveryPolicyObserver;
@property (strong, nonatomic) UIFocusGuide *focusHolderLeftFocusGuide; // @synthesize focusHolderLeftFocusGuide=_focusHolderLeftFocusGuide;
@property (strong, nonatomic) UIFocusGuide *focusHolderRightFocusGuide; // @synthesize focusHolderRightFocusGuide=_focusHolderRightFocusGuide;
@property (strong, nonatomic) _CPSFocusHoldingButton *focusHoldingButton; // @synthesize focusHoldingButton=_focusHoldingButton;
@property (strong, nonatomic) UIColor *guidanceBackgroundColor; // @synthesize guidanceBackgroundColor=_guidanceBackgroundColor;
@property (nonatomic) BOOL hasSetTripEstimateStyle; // @synthesize hasSetTripEstimateStyle=_hasSetTripEstimateStyle;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UITapGestureRecognizer *hideTapGestureRecognizer; // @synthesize hideTapGestureRecognizer=_hideTapGestureRecognizer;
@property (nonatomic) BOOL hidesButtonsWithNavigationBar; // @synthesize hidesButtonsWithNavigationBar=_hidesButtonsWithNavigationBar;
@property (weak, nonatomic) id<UIFocusItem> itemFocusedBeforeNavAlert; // @synthesize itemFocusedBeforeNavAlert=_itemFocusedBeforeNavAlert;
@property (weak, nonatomic) id<UIFocusItem> lastFocusedItem; // @synthesize lastFocusedItem=_lastFocusedItem;
@property (nonatomic) struct CGPoint lastPanGesturePoint; // @synthesize lastPanGesturePoint=_lastPanGesturePoint;
@property (strong, nonatomic) NSMutableDictionary *lastTravelEstimatesByTrip; // @synthesize lastTravelEstimatesByTrip=_lastTravelEstimatesByTrip;
@property (strong, nonatomic) NSMutableArray *mapButtons; // @synthesize mapButtons=_mapButtons;
@property (readonly, nonatomic) CPMapTemplate *mapTemplate;
@property (readonly, weak, nonatomic) id<CPMapClientTemplateDelegate> mapTemplateDelegate;
@property (nonatomic) unsigned long long maximumMapButtonCount; // @synthesize maximumMapButtonCount=_maximumMapButtonCount;
@property (strong, nonatomic) UITapGestureRecognizer *navBarHideTapGestureRecognizer; // @synthesize navBarHideTapGestureRecognizer=_navBarHideTapGestureRecognizer;
@property (strong, nonatomic) NSLayoutConstraint *navigationAlertBottomConstraint; // @synthesize navigationAlertBottomConstraint=_navigationAlertBottomConstraint;
@property (strong, nonatomic) NSLayoutConstraint *navigationAlertHeightConstraint; // @synthesize navigationAlertHeightConstraint=_navigationAlertHeightConstraint;
@property (strong, nonatomic) CPSNavigationAlertQueue *navigationAlertQueue; // @synthesize navigationAlertQueue=_navigationAlertQueue;
@property (strong, nonatomic) CPSNavigationCardView *navigationCardView; // @synthesize navigationCardView=_navigationCardView;
@property (strong, nonatomic) NSLayoutConstraint *navigationCardViewBottomConstraint; // @synthesize navigationCardViewBottomConstraint=_navigationCardViewBottomConstraint;
@property (strong, nonatomic) NSLayoutConstraint *navigationCardViewHeightConstraint; // @synthesize navigationCardViewHeightConstraint=_navigationCardViewHeightConstraint;
@property (strong, nonatomic) CPSLayoutHelperView *navigationCardViewLayoutHelperView; // @synthesize navigationCardViewLayoutHelperView=_navigationCardViewLayoutHelperView;
@property (strong, nonatomic) NSLayoutConstraint *navigationCardViewLayoutViewBottomConstraint; // @synthesize navigationCardViewLayoutViewBottomConstraint=_navigationCardViewLayoutViewBottomConstraint;
@property (strong, nonatomic) NSLayoutConstraint *navigationCardViewTopConstraint; // @synthesize navigationCardViewTopConstraint=_navigationCardViewTopConstraint;
@property (strong, nonatomic) CPSNavigationETAView *navigationETAView; // @synthesize navigationETAView=_navigationETAView;
@property (strong, nonatomic) NSLayoutConstraint *navigationETAViewBottomConstraint; // @synthesize navigationETAViewBottomConstraint=_navigationETAViewBottomConstraint;
@property (strong, nonatomic) CPSLayoutHelperView *navigationETAViewLayoutHelperView; // @synthesize navigationETAViewLayoutHelperView=_navigationETAViewLayoutHelperView;
@property (strong, nonatomic) CPSNavigator *navigator; // @synthesize navigator=_navigator;
@property (strong, nonatomic) NSLayoutConstraint *panContainerLeftConstraint; // @synthesize panContainerLeftConstraint=_panContainerLeftConstraint;
@property (strong, nonatomic) NSLayoutConstraint *panContainerRightConstraint; // @synthesize panContainerRightConstraint=_panContainerRightConstraint;
@property (strong, nonatomic) UIView *panContainerView; // @synthesize panContainerView=_panContainerView;
@property (strong, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property (strong, nonatomic) CPSPanViewController *panViewController; // @synthesize panViewController=_panViewController;
@property (nonatomic) BOOL previewOnlyRouteChoices; // @synthesize previewOnlyRouteChoices=_previewOnlyRouteChoices;
@property (strong, nonatomic) CPSTripPreviewsCardView *previewsView; // @synthesize previewsView=_previewsView;
@property (nonatomic) BOOL rightHandDrive; // @synthesize rightHandDrive=_rightHandDrive;
@property (weak, nonatomic) id<CPSSafeAreaDelegate> safeAreaDelegate; // @synthesize safeAreaDelegate=_safeAreaDelegate;
@property (strong, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
@property (nonatomic) BOOL shouldRestoreFocusToNavigationBar; // @synthesize shouldRestoreFocusToNavigationBar=_shouldRestoreFocusToNavigationBar;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIStackView *trailingBottomStackView; // @synthesize trailingBottomStackView=_trailingBottomStackView;
@property (nonatomic) unsigned long long tripEstimateStyle; // @synthesize tripEstimateStyle=_tripEstimateStyle;
@property (strong, nonatomic) CPTripPreviewTextConfiguration *tripPreviewTextConfiguration; // @synthesize tripPreviewTextConfiguration=_tripPreviewTextConfiguration;
@property (copy, nonatomic) NSArray *tripPreviews; // @synthesize tripPreviews=_tripPreviews;

- (void).cxx_destruct;
- (void)_addPanControllerAsChild;
- (id)_buttonForIdentifier:(id)arg1;
- (id)_buttons;
- (struct UIEdgeInsets)_cardViewEdgeInsets;
- (void)_handleFocusHolderSelect;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_hideBar:(id)arg1;
- (BOOL)_isAutoHideEnabled;
- (id)_linearFocusItems;
- (struct UIEdgeInsets)_mapButtonsEdgeInsets;
- (struct UIEdgeInsets)_navBarInsets;
- (struct UIEdgeInsets)_navigationAlertInsets;
- (void)_nightModeChanged:(id)arg1;
- (void)_performAlertSizingForAlert:(id)arg1 animated:(BOOL)arg2;
- (struct UIEdgeInsets)_previewEdgeInsets;
- (void)_reloadPreviewsView;
- (void)_removePanController;
- (void)_resetAutoHideTimerAndShowBarAnimated:(BOOL)arg1 allowFocusDeferral:(BOOL)arg2;
- (void)_setAutoHideDisabled:(BOOL)arg1 forRequester:(id)arg2;
- (void)_setButtonsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setFocusHoldersEnabled:(BOOL)arg1;
- (void)_setMaximumVisibleMapButtons:(unsigned long long)arg1;
- (void)_setNavigationAlertView:(id)arg1 visible:(BOOL)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setPanInterfaceVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_showBarAnimated:(BOOL)arg1 allowFocusDeferral:(BOOL)arg2;
- (id)_tripDidBegin:(id)arg1 withEstimates:(id)arg2 forIdentifier:(id)arg3;
- (void)_updateInterestingArea;
- (void)_updateMapButtonVisibility;
- (void)_updateMapButtonsWithButtons:(id)arg1;
- (void)_updatePanGestureForHiFiTouch;
- (void)_updateSafeArea;
- (void)_viewDidLoad;
- (void)applicationStateMonitor:(id)arg1 didBecomeActive:(BOOL)arg2;
- (BOOL)canAnimateNavigationAlert;
- (void)dealloc;
- (void)didChangeLayout:(id)arg1;
- (void)didSelectButton:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissNavigationAlertAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hostPanInterfaceVisible:(CDUnknownBlockType)arg1;
- (void)hostSetMapButton:(id)arg1 imageSet:(id)arg2;
- (void)hostSetMapButtons:(id)arg1;
- (void)hostSetPanInterfaceVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hostStartNavigationSessionForTrip:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)hostUpdateTravelEstimates:(id)arg1 forTripIdentifier:(id)arg2;
- (id)initWithMapTemplate:(id)arg1 templateDelegate:(id)arg2 safeAreaDelegate:(id)arg3 applicationStateMonitor:(id)arg4;
- (void)navigationAlertQueue:(id)arg1 shouldDisplayAlertView:(id)arg2 animated:(BOOL)arg3;
- (void)navigationAlertQueue:(id)arg1 shouldRemoveAlertView:(id)arg2 animated:(BOOL)arg3 dismissalContext:(unsigned long long)arg4;
- (void)navigationOwnershipChangedToOwner:(unsigned long long)arg1;
- (void)navigator:(id)arg1 didEndTrip:(BOOL)arg2;
- (void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3;
- (void)observerDeliveryPolicyDidChange:(id)arg1;
- (void)panBeganWithDirection:(long long)arg1;
- (void)panEndedWithDirection:(long long)arg1;
- (void)panWithDirection:(long long)arg1;
- (id)preferredFocusEnvironments;
- (void)sessionDidConnect:(id)arg1;
- (void)setControl:(id)arg1 enabled:(BOOL)arg2;
- (void)setHostAutoHidesNavigationBar:(BOOL)arg1;
- (void)setHostGuidanceBackgroundColor:(id)arg1;
- (void)setHostHidesButtonsWithNavigationBar:(BOOL)arg1;
- (void)setHostTripEstimateStyle:(unsigned long long)arg1;
- (void)setHostTripPreviews:(id)arg1 textConfiguration:(id)arg2 previewOnlyRouteChoices:(BOOL)arg3;
- (void)setMapButton:(id)arg1 focusedImage:(id)arg2;
- (void)setMapButton:(id)arg1 hidden:(BOOL)arg2;
- (BOOL)shouldForwardEventForWindow:(id)arg1 eventType:(long long)arg2;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (void)showNavigationAlert:(id)arg1 animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tripView:(id)arg1 selectedTrip:(id)arg2 routeChoice:(id)arg3;
- (void)tripView:(id)arg1 startedTrip:(id)arg2 routeChoice:(id)arg3;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)updateNavigationAlert:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillDisappear:(BOOL)arg1;

@end

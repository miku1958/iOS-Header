//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HearingUI/HACCContentModuleDelegate-Protocol.h>
#import <HearingUI/UIGestureRecognizerDelegate-Protocol.h>

@class AXDispatchTimer, AXRemoteHearingAidDevice, CCUIContentModuleContext, CCUIContentModuleDetailTransitioningDelegate, CCUILabeledRoundButtonViewController, HACCContentViewController, HACCShortcutViewBackgroundController, NSMutableArray, NSMutableDictionary, NSString, UIScrollView, UIView;
@protocol AXHAShortcutUpdateProtocol;

@interface HACCShortcutViewController : UIViewController <UIGestureRecognizerDelegate, HACCContentModuleDelegate>
{
    double _dismissalGestureYOffset;
    struct CGPoint _backgroundViewDismissalOrigin;
    struct CGPoint _mainModuleOrigin;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    AXDispatchTimer *_bluetoothAvailabilityTimer;
    AXDispatchTimer *_noiseControlUpdateTimer;
    BOOL _bluetoothAvailable;
    BOOL _listeningForHearingAidUpdates;
    BOOL _shouldDisplayOtherDevice;
    id<AXHAShortcutUpdateProtocol> _delegate;
    HACCShortcutViewBackgroundController *_backgroundController;
    CCUIContentModuleContext *_contentModuleContext;
    NSMutableDictionary *_moduleToViewControllerMap;
    NSMutableDictionary *_gridToModuleMap;
    NSMutableDictionary *_moduleToPointMap;
    UIScrollView *_scrollView;
    UIView *_platterView;
    NSMutableArray *_separatorViews;
    CCUILabeledRoundButtonViewController *_otherDevicesButtonViewController;
    AXRemoteHearingAidDevice *_currentHearingDevice;
    NSString *_currentOtherDeviceName;
    NSString *_currentOtherDeviceType;
}

@property (strong, nonatomic) HACCShortcutViewBackgroundController *backgroundController; // @synthesize backgroundController=_backgroundController;
@property (nonatomic) BOOL bluetoothAvailable; // @synthesize bluetoothAvailable=_bluetoothAvailable;
@property (strong, nonatomic) CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
@property (strong, nonatomic) AXRemoteHearingAidDevice *currentHearingDevice; // @synthesize currentHearingDevice=_currentHearingDevice;
@property (strong, nonatomic) NSString *currentOtherDeviceName; // @synthesize currentOtherDeviceName=_currentOtherDeviceName;
@property (strong, nonatomic) NSString *currentOtherDeviceType; // @synthesize currentOtherDeviceType=_currentOtherDeviceType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AXHAShortcutUpdateProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HACCContentViewController *expandedController;
@property (strong, nonatomic) NSMutableDictionary *gridToModuleMap; // @synthesize gridToModuleMap=_gridToModuleMap;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL listeningForHearingAidUpdates; // @synthesize listeningForHearingAidUpdates=_listeningForHearingAidUpdates;
@property (strong, nonatomic) NSMutableDictionary *moduleToPointMap; // @synthesize moduleToPointMap=_moduleToPointMap;
@property (strong, nonatomic) NSMutableDictionary *moduleToViewControllerMap; // @synthesize moduleToViewControllerMap=_moduleToViewControllerMap;
@property (strong, nonatomic) CCUILabeledRoundButtonViewController *otherDevicesButtonViewController; // @synthesize otherDevicesButtonViewController=_otherDevicesButtonViewController;
@property (strong, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) NSMutableArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property (nonatomic) BOOL shouldDisplayOtherDevice; // @synthesize shouldDisplayOtherDevice=_shouldDisplayOtherDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_logLiveListenAnalytics;
- (id)backgroundUpdateQueue;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (void)contentCategoryDidChange:(id)arg1;
- (void)controlDidActivate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isExpanded;
- (void)listenForHearingAidUpdates;
- (double)moduleHeight;
- (unsigned long long)numberOfColumnsForSize:(struct CGSize)arg1;
- (void)otherDeviceButtonTapped:(id)arg1;
- (double)preferredContentWidth;
- (double)preferredExpandedContentHeight;
- (double)separatorHeight;
- (void)setAlpha:(double)arg1 forAllModulesExcept:(id)arg2;
- (BOOL)shouldDisplayControlForModule:(unsigned long long)arg1;
- (BOOL)shouldDisplayDeviceToggle;
- (void)updateAvailableControlsForSize:(struct CGSize)arg1;
- (void)updateRoutes;
- (void)updateView;
- (void)updateViewForModule:(unsigned long long)arg1;
- (void)updateViewForProperties:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end


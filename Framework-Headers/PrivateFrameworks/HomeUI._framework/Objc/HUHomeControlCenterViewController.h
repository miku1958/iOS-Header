//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/CCUIControlCenterPageContentProviding-Protocol.h>
#import <HomeUI/HFHomeManagerObserver-Protocol.h>
#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUCCGridViewControllerDelegate-Protocol.h>
#import <HomeUI/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class HUCCGridViewController, HUCCPageItemManager, HUControlCenterContainerView, LSApplicationWorkspace, NSString;
@protocol CCUIControlCenterPageContentViewControllerDelegate;

@interface HUHomeControlCenterViewController : UIViewController <HFHomeManagerObserver, HFItemManagerDelegate, HUCCGridViewControllerDelegate, LSApplicationWorkspaceObserverProtocol, CCUIControlCenterPageContentProviding>
{
    BOOL _wantsVisible;
    int _keybagLockStatusNotifyToken;
    id<CCUIControlCenterPageContentViewControllerDelegate> _delegate;
    long long _layoutStyle;
    HUCCGridViewController *_serviceGridViewController;
    HUCCGridViewController *_actionSetGridViewController;
    HUCCPageItemManager *_pageItemManager;
    unsigned long long _activePage;
    HUCCGridViewController *_activePageViewController;
    LSApplicationWorkspace *_appWorkspace;
}

@property (strong, nonatomic) HUCCGridViewController *actionSetGridViewController; // @synthesize actionSetGridViewController=_actionSetGridViewController;
@property (nonatomic) unsigned long long activePage; // @synthesize activePage=_activePage;
@property (strong, nonatomic) HUCCGridViewController *activePageViewController; // @synthesize activePageViewController=_activePageViewController;
@property (readonly, nonatomic) LSApplicationWorkspace *appWorkspace; // @synthesize appWorkspace=_appWorkspace;
@property (readonly, nonatomic) struct UIEdgeInsets contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CCUIControlCenterPageContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int keybagLockStatusNotifyToken; // @synthesize keybagLockStatusNotifyToken=_keybagLockStatusNotifyToken;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (strong, nonatomic) HUCCPageItemManager *pageItemManager; // @synthesize pageItemManager=_pageItemManager;
@property (strong, nonatomic) HUCCGridViewController *serviceGridViewController; // @synthesize serviceGridViewController=_serviceGridViewController;
@property (readonly) Class superclass;
@property (strong, nonatomic) HUControlCenterContainerView *view; // @dynamic view;
@property (nonatomic) BOOL wantsVisible; // @synthesize wantsVisible=_wantsVisible;

+ (id)pageNumberByPageString;
+ (id)pageStringByPageNumber;
- (void).cxx_destruct;
- (void)_homeButtonPressed:(id)arg1;
- (BOOL)_isAccessAllowedForCurrentLockState;
- (void)_pageSwitchButtonPressed:(id)arg1;
- (void)_registerKeybagLockStatusNotifications;
- (void)_setupChecksForHomeAppRemoval;
- (void)_unregisterKeybagLockStatusNotifications;
- (void)_updateActivePage;
- (void)_updateHomeAppRemoved:(BOOL)arg1;
- (void)_updatePageSwitchButtonHiddenState;
- (void)_updatePageSwitchButtonText;
- (void)_updatePageVisibility;
- (void)_updateRegistrationForLockStatusNotification;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillFinishTransitionOpen:(BOOL)arg1 withDuration:(double)arg2;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)gridViewControllerDidEndApplyingDynamicBackgrounds:(id)arg1;
- (void)gridViewControllerWillBeginApplyingDynamicBackgrounds:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isDeviceUnlockedForGridViewController:(id)arg1;
- (BOOL)itemManager:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2;
- (void)loadView;
- (id)prepareForActionRequiringDeviceUnlockForGridViewController:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PUModalTransition, PUNavigationTransition, PUToolbarViewModel, PUViewModel, UIToolbar;
@protocol PUDisplayAsset;

@interface UIViewController (PHViewControllerChrome)

@property (readonly, nonatomic) unsigned long long ph_preferredChrome;
@property (readonly, nonatomic) long long ph_preferredChromeAnimation;
@property (readonly, nonatomic) PUModalTransition *pu_currentInteractiveModalTransition;
@property (readonly, nonatomic) PUNavigationTransition *pu_currentInteractiveNavigationTransition;
@property (readonly, nonatomic) id<PUDisplayAsset> pu_debugCurrentAsset;
@property (readonly, nonatomic) PUViewModel *pu_debugCurrentViewModel;
@property (nonatomic, setter=pu_debugSetTransient:) BOOL pu_debugIsTransient;
@property (readonly, nonatomic) UIToolbar *pu_footerToolbar;
@property (readonly, nonatomic) BOOL pu_isPresenting;
@property (strong, nonatomic, setter=pu_setModalTransition:) PUModalTransition *pu_modalTransition;
@property (strong, nonatomic, setter=pu_setNavigationTransition:) PUNavigationTransition *pu_navigationTransition;
@property (readonly, nonatomic) long long pu_preferredBarStyle;
@property (readonly, nonatomic) long long pu_preferredStatusBarUpdateAnimation;
@property (readonly, nonatomic) BOOL pu_shouldActAsTabRootViewController;
@property (readonly, nonatomic) PUToolbarViewModel *pu_toolbarViewModel;
@property (readonly, nonatomic) BOOL pu_wantsNavigationBarVisible;
@property (readonly, nonatomic) BOOL pu_wantsTabBarVisible;
@property (readonly, nonatomic) BOOL pu_wantsToolbarVisible;

+ (void)_pu_ensureLocalAssets:(id)arg1 forReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)pu_copyAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)pu_currentViewControllerStack;
- (void)_ph_updateBarAppearanceAnimated:(BOOL)arg1;
- (id)_pu_offersTableView;
- (void)_pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1 isStatusBarHidden:(BOOL)arg2;
- (void)_pu_setNavigationBarVisible:(BOOL)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_setPreferredStatusBarUpdateAnimation:(long long)arg1;
- (void)_pu_setTabBarVisible:(BOOL)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_setToolbarVisible:(BOOL)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_updateStatusBarVisibilityWithAnimationSettings:(struct PUBarAnimationSettings)arg1;
- (void)ph_enableChromeManagement;
- (BOOL)ph_isPreparedForTransition;
- (BOOL)ph_isTransitionOverlayView:(id)arg1;
- (void)ph_loadTransitionSourcePlaceholderViewUsingFactory:(CDUnknownBlockType)arg1;
- (void)ph_prepareForTransition;
- (struct CGRect)ph_rectOfInterestForTransitionInCoordinateSpace:(id)arg1;
- (struct CGRect)ph_rectOfInterestForTransitionInCoordinateSpace:(id)arg1 withInfo:(id)arg2;
- (void)ph_setNeedsChromeUpdate;
- (BOOL)ph_viewContainsTransitionSourcePlaceholderView;
- (void)ppt_performBlockAfterNextNavigationAnimation:(CDUnknownBlockType)arg1;
- (void)pu_copyAssets:(id)arg1;
- (void)pu_dismissViewControllerAnimated:(BOOL)arg1 interactive:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pu_ensureLocalAssetsForCloudPhotoSharing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)pu_handleSecondTabTap;
- (void)pu_insertFooterToolbarWithItems:(id)arg1;
- (BOOL)pu_isForceTouchEnabled;
- (id)pu_navigationController;
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1;
- (void)pu_presentViewController:(id)arg1 transition:(id)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)pu_removeFooterToolbar;
- (void)pu_removeNavigationTransition;
- (void)pu_restoreNavigationTransition;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1;
- (void)pu_setupInitialBarsVisibilityOnViewWillAppearAnimated:(BOOL)arg1;
- (double)px_effectiveImageModulationIntensityWithProposedValue:(double)arg1;
- (id)px_sharePresentation;
@end

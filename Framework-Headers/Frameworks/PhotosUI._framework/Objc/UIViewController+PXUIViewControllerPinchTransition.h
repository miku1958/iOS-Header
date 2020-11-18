//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXAnonymousViewController-Protocol.h>
#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUICore/PXProgrammaticNavigationParticipant-Protocol.h>
#import <PhotosUICore/PXProgrammaticNavigationUpdateTarget-Protocol.h>

@class NSArray, NSString, PXBarAppearance, PXExtendedTraitCollection, PXImageModulationManager, PXOneUpPresentation, PXProgrammaticNavigationDestination, UIToolbar;
@protocol PXUIViewControllerTransitionEndPoint;

@interface UIViewController (PXUIViewControllerPinchTransition) <PXDiagnosticsEnvironment, PXAnonymousViewController, PXProgrammaticNavigationParticipant, PXProgrammaticNavigationUpdateTarget>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double px_HDRFocus;
@property (readonly, nonatomic) BOOL px_allowsTabSwitching;
@property (readonly, nonatomic) PXBarAppearance *px_barAppearance;
@property (strong, nonatomic, setter=px_setDefaultTransitionEndPoint:) id<PXUIViewControllerTransitionEndPoint> px_defaultTransitionEndPoint;
@property (readonly, nonatomic) BOOL px_determinesPreferredStatusBarHidden;
@property (readonly, nonatomic) BOOL px_determinesPreferredStatusBarStyle;
@property (readonly, nonatomic) double px_effectiveHDRFocus;
@property (readonly, nonatomic) double px_effectiveImageModulationIntensity;
@property (readonly, nonatomic) PXExtendedTraitCollection *px_extendedTraitCollection;
@property (readonly, nonatomic) UIToolbar *px_footerToolbar;
@property (nonatomic, getter=px_isImageModulationEnabled, setter=px_setImageModulationEnabled:) BOOL px_imageModulationEnabled;
@property (readonly, nonatomic) double px_imageModulationIntensity;
@property (readonly, nonatomic) PXImageModulationManager *px_imageModulationManager;
@property (readonly, nonatomic) BOOL px_isVisible;
@property (readonly, nonatomic) struct UIEdgeInsets px_layoutMargins;
@property (readonly, nonatomic) struct UIEdgeInsets px_layoutMargins;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly, nonatomic) UIViewController *px_nextViewControllerInNavigationController;
@property (readonly, nonatomic) PXOneUpPresentation *px_oneUpPresentation;
@property (readonly, nonatomic) BOOL px_photosUICategoriesAvailable;
@property (strong, nonatomic, setter=px_setPreviewActionMenus:) NSArray *px_previewActionMenus;
@property (readonly, nonatomic) UIViewController *px_previousViewControllerInNavigationController;
@property (readonly, nonatomic) struct CGSize px_referenceSize;
@property (readonly, nonatomic) struct UIEdgeInsets px_safeAreaInsets;
@property (readonly, nonatomic) struct UIEdgeInsets px_safeAreaInsets;
@property (copy, nonatomic, setter=px_setSubtitle:) NSString *px_subtitle;
@property (readonly, nonatomic) UIViewController *px_topmostPresentedViewController;
@property (readonly, nonatomic, getter=px_isVisible) BOOL px_visible;
@property (readonly, nonatomic) struct CGSize px_windowReferenceSize;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (void)_px_prepareClassForBarAppearance;
+ (void)_px_prepareClassForExtendedTraitCollection;
+ (void)_px_prepareClassForNavigationBanner;
+ (void)_px_prepareClassForOneUpPresentation;
+ (void)px_preloadExtendedTraitCollection;
+ (id)px_viewControllerWithAsynchronousOutputProducer:(CDUnknownBlockType)arg1;
+ (id)px_viewControllerWithContinuousOutputProducer:(CDUnknownBlockType)arg1;
+ (id)px_viewControllerWithOutput:(CDUnknownBlockType)arg1;
+ (id)px_viewControllerWithSettings:(id)arg1;
- (id)_nextExistingViewControllerOnRouteToDestination:(id)arg1;
- (void)_px_dismiss:(id)arg1;
- (double)_px_imageModulationMixFactorWithPresentedViewController:(id)arg1;
- (id)_px_offersTableView;
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_px_viewAppearanceDidChange;
- (BOOL)_px_windowMatchesImageModulationManager:(id)arg1;
- (long long)_pxswizzled_barAppearance_preferredStatusBarStyle;
- (long long)_pxswizzled_barAppearance_preferredStatusBarUpdateAnimation;
- (BOOL)_pxswizzled_barAppearance_prefersStatusBarHidden;
- (void)_pxswizzled_barAppearance_viewDidDisappear:(BOOL)arg1;
- (void)_pxswizzled_barAppearance_viewWillAppear:(BOOL)arg1;
- (void)_pxswizzled_imageModulation_viewDidDisappear:(BOOL)arg1;
- (void)_pxswizzled_imageModulation_viewWillAppear:(BOOL)arg1;
- (void)_pxswizzled_imageModulation_viewWillDisappear:(BOOL)arg1;
- (void)_pxswizzled_navigationBanner_viewDidDisappear:(BOOL)arg1;
- (void)_pxswizzled_navigationBanner_viewWillAppear:(BOOL)arg1;
- (void)_pxswizzled_oneUpPresentation_viewDidAppear:(BOOL)arg1;
- (void)_pxswizzled_oneUpPresentation_viewDidDisappear:(BOOL)arg1;
- (void)_pxswizzled_oneUpPresentation_viewWillAppear:(BOOL)arg1;
- (void)_pxswizzled_oneUpPresentation_viewWillDisappear:(BOOL)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_didMoveToParentViewController:(id)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_traitCollectionDidChange:(id)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewDidAppear:(BOOL)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewDidLoad;
- (void)_pxswizzled_viewControllerTraitCollection_viewLayoutMarginsDidChange;
- (void)_pxswizzled_viewControllerTraitCollection_viewSafeAreaInsetsDidChange;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillAppear:(BOOL)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillLayoutSubviews;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)debugURLsForDiagnostics;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (void)provideViewControllersForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)px_addOrReplaceChildViewController:(id)arg1 activateConstraints:(BOOL)arg2;
- (BOOL)px_canPerformCrossfadeTransitionWithDetailViewController:(id)arg1;
- (BOOL)px_canPerformCrossfadeTransitionWithMasterViewController:(id)arg1;
- (BOOL)px_canPerformPinchTransitionWithDetailViewController:(id)arg1;
- (BOOL)px_canPerformPinchTransitionWithMasterViewController:(id)arg1;
- (BOOL)px_canPerformSwipeDownTransitionWithDetailViewController:(id)arg1;
- (BOOL)px_canPerformSwipeDownTransitionWithMasterViewController:(id)arg1;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (BOOL)px_canPerformZoomTransitionWithMasterViewController:(id)arg1;
- (BOOL)px_canPresentViewControllerAnimated:(BOOL)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)px_didTransitionBars;
- (void)px_enableBarAppearance;
- (void)px_enableExtendedTraitCollection;
- (void)px_enableImageModulation;
- (void)px_enableNavigationBanner;
- (void)px_enableOneUpPresentation;
- (void)px_enableOneUpPresentationFromViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (void)px_enumerateDescendantViewControllersWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)px_gridPresentation;
- (void)px_insertFooterToolbarWithItems:(id)arg1;
- (BOOL)px_isDescendantOfViewController:(id)arg1;
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)px_navigationBannerHelper;
- (void)px_navigationDestinationWillChange:(id)arg1;
- (void)px_presentOverTopmostPresentedViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)px_presentViewControllerInNavigationController:(id)arg1 animated:(BOOL)arg2 dimissButtonLocation:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)px_removeFooterToolbar;
- (void)px_setNeedsHDRFocusUpdate;
- (void)px_setNeedsImageModulationIntensityUpdate;
- (id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)arg1;
- (id)px_splitViewController;
- (void)px_willTransitionBars;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
@end

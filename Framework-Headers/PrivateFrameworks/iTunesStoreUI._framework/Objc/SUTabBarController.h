//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <iTunesStoreUI/SUOverlayBackgroundDelegate-Protocol.h>
#import <iTunesStoreUI/_UIBasicAnimationFactory-Protocol.h>

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUNavigationBarBackgroundView, SUPreviewOverlayViewController, SUViewController, UIImage, UIViewController;
@protocol SUTabBarControllerDelegate;

@interface SUTabBarController : UITabBarController <SUOverlayBackgroundDelegate, _UIBasicAnimationFactory>
{
    SUClientInterface *_clientInterface;
    NSString *_moreListTitle;
    NSMutableArray *_overlayBackgroundViewControllers;
    UIViewController *_preTransientSelectedViewController;
    long long _reloadingUnderneathTransientControllerCount;
    NSArray *_sections;
    BOOL _ignoreTabReselection;
    UIImage *_moreListSelectedImage;
    UIImage *_moreListUnselectedImage;
    SUViewController *_preloadedViewController;
    NSString *_preloadedViewControllerIdentifier;
    NSString *_preloadedViewControllerKey;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    long long _storeBarStyle;
    SUNavigationBarBackgroundView *_tabBarBackdropView;
}

@property (readonly, nonatomic, getter=_previewOverlayViewController) SUPreviewOverlayViewController *_previewOverlayViewController;
@property (readonly, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SUTabBarControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property (strong, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property (strong, nonatomic) NSString *selectedIdentifier;
@property (readonly) Class superclass;

+ (Class)_moreNavigationControllerClass;
- (long long)ITunesStoreUIBarStyle;
- (void)_applicationDidChangeStatusBarFrame:(id)arg1;
- (void)_applyMoreListConfiguration;
- (id)_archivedContextsForViewController:(id)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_beginReloadingUnderneathTransientViewController;
- (void)_endReloadingUnderneathTransientViewController;
- (void)_fixupTabBarSelection;
- (void)_fixupViewControllers;
- (void)_hidePreviewOverlayAnimated:(BOOL)arg1;
- (BOOL)_isReloadingUnderneathTransientViewController;
- (void)_longPressAction:(id)arg1;
- (void)_moveTransientViewController:(id)arg1 toSectionWithIdentifier:(id)arg2 asRoot:(BOOL)arg3;
- (void)_moveView:(id)arg1 toView:(id)arg2;
- (void)_partnerChanged:(id)arg1;
- (void)_reloadViewControllersFromSections:(id)arg1 animated:(BOOL)arg2;
- (void)_restoreArchivedContexts:(id)arg1;
- (void)_restoreArchivedTransientContexts:(id)arg1;
- (void)_restoreOverlayContexts:(id)arg1;
- (id)_rootViewControllerForSection:(id)arg1;
- (BOOL)_saveNavigationPathToDefaults;
- (BOOL)_saveTransientNavigationPathToDefaults;
- (id)_sectionForIdentifier:(id)arg1;
- (id)_sectionForType:(long long)arg1;
- (id)_sectionForViewController:(id)arg1;
- (void)_setSelectedViewController:(id)arg1;
- (void)_setStoreBarStyle:(long long)arg1;
- (void)_showPreviewOverlay:(id)arg1 animated:(BOOL)arg2;
- (id)_timingFunctionForAnimation;
- (void)_transitionSafeHandlePartnerChange:(id)arg1;
- (id)_viewControllerForContext:(id)arg1;
- (void)cancelTransientViewController:(id)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dismissOverlayBackgroundViewController;
- (unsigned long long)indexOfViewControllerWithSectionType:(long long)arg1;
- (id)init;
- (id)initWithClientInterface:(id)arg1;
- (BOOL)loadFromDefaults;
- (BOOL)loadFromDefaultsAndSetSections:(id)arg1;
- (void)loadView;
- (id)overlayBackgroundViewController;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (void)pushTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (void)reloadSectionVisibilityAnimated:(BOOL)arg1;
- (void)reloadSectionWithIdentifier:(id)arg1 URL:(id)arg2;
- (void)resetToSystemDefaults;
- (void)resetUserDefaults;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)saveOrderingToDefaults;
- (BOOL)saveToDefaults;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (void)selectDefaultSection;
- (void)selectSectionOfType:(long long)arg1;
- (id)selectedViewController;
- (void)setMoreListSelectedImage:(id)arg1 unselectedImage:(id)arg2;
- (void)setSectionOrdering:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willShowCustomizationSheet:(id)arg2 withNavigationBar:(id)arg3;
- (id)viewControllerForSectionIdentifier:(id)arg1;
- (id)viewControllerForSectionType:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;

@end


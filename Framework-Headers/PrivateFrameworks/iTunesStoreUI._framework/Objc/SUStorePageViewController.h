//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import <iTunesStoreUI/ISURLOperationDelegate-Protocol.h>
#import <iTunesStoreUI/SKUITabBarItemRootViewController-Protocol.h>
#import <iTunesStoreUI/SUMenuViewControllerDelegate-Protocol.h>
#import <iTunesStoreUI/SUPreviewOverlayContainer-Protocol.h>
#import <iTunesStoreUI/UIPopoverControllerDelegate-Protocol.h>

@class ISURLRequestPerformance, NSNumber, NSString, SSAuthenticationContext, SSMutableURLRequestProperties, SSURLRequestProperties, SUNavigationMenuViewController, SUPageSectionGroup, SUSearchFieldController, SUSegmentedControl, SUStorePageProtocol, SUWebScriptReloadContext, UIPopoverController, _UIBackdropView;
@protocol SUStorePageViewControllerDelegate;

@interface SUStorePageViewController : SUViewController <SKUITabBarItemRootViewController, SUMenuViewControllerDelegate, SUPreviewOverlayContainer, UIPopoverControllerDelegate, ISURLOperationDelegate>
{
    SUViewController *_activeChildViewController;
    struct __CFSet *_allowedInterfaceOrientations;
    _UIBackdropView *_backdropView;
    id<SUStorePageViewControllerDelegate> _delegate;
    double _expirationTime;
    BOOL _lastLoadDidFail;
    CDUnknownBlockType _loadBlock;
    long long _pageType;
    SUViewController *_pendingChildViewController;
    SUWebScriptReloadContext *_pendingWebScriptReloadContext;
    ISURLRequestPerformance *_performanceMetrics;
    NSString *_scriptUserInfo;
    BOOL _shouldAdjustContentOffsets;
    BOOL _useWebViewFastPath;
    SUStorePageProtocol *_lastValidProtocol;
    UIPopoverController *_navigationMenuPopover;
    SUNavigationMenuViewController *_navigationMenuViewController;
    SUSearchFieldController *_searchFieldController;
    BOOL _canMoveToOverlay;
    BOOL _externalRequest;
    BOOL _loadingForSectionChange;
    BOOL _loadsWhenHidden;
    BOOL _reloadOnAppear;
    BOOL _reloadsWhenCacheExpired;
    SSAuthenticationContext *_authContext;
    SSMutableURLRequestProperties *_urlRequestProperties;
    BOOL _needsAuthentication;
    long long _activeSectionIndex;
    SUPageSectionGroup *_sectionsGroup;
    SUSegmentedControl *_segmentedControl;
}

@property (copy, nonatomic) SSURLRequestProperties *URLRequestProperties;
@property (readonly, nonatomic, getter=_isCacheExpired) BOOL _cacheExpired;
@property (nonatomic, getter=_reloadsWhenCacheExpired, setter=_setReloadsWhenCacheExpired:) BOOL _reloadsWhenCacheExpired; // @synthesize _reloadsWhenCacheExpired;
@property (readonly, nonatomic) SUViewController *activeChildViewController; // @synthesize activeChildViewController=_activeChildViewController;
@property (strong, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authContext;
@property (readonly, nonatomic) BOOL canBeResolved;
@property (nonatomic) BOOL canMoveToOverlay; // @synthesize canMoveToOverlay=_canMoveToOverlay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SUStorePageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGRect documentBounds;
@property (nonatomic, getter=isExternalRequest) BOOL externalRequest; // @synthesize externalRequest=_externalRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL loadsWhenHidden; // @synthesize loadsWhenHidden=_loadsWhenHidden;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic) BOOL needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property (copy, nonatomic) NSString *scriptUserInfo; // @synthesize scriptUserInfo=_scriptUserInfo;
@property (readonly, nonatomic) SUSearchFieldController *searchFieldController; // @synthesize searchFieldController=_searchFieldController;
@property (readonly, nonatomic) SUPageSectionGroup *sectionGroup; // @synthesize sectionGroup=_sectionsGroup;
@property (readonly, nonatomic) SUSegmentedControl *sectionSegmentedControl; // @synthesize sectionSegmentedControl=_segmentedControl;
@property (readonly) Class superclass;

- (id)URLRequest;
- (id)_activeChildViewController;
- (id)_activePageSection;
- (void)_applyPropertiesToViewController:(id)arg1;
- (void)_dismissNavigationMenuViewController;
- (void)_displaySegmentedControl:(id)arg1;
- (void)_documentBoundsChangeNotification:(id)arg1;
- (double)_expirationTime;
- (void)_fetchPage:(BOOL)arg1;
- (void)_finishHandlingFailure;
- (void)_finishSuccessfulLoad;
- (void)_finishWebViewLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (struct CGRect)_frameForActiveViewController;
- (void)_handleFailureWithError:(id)arg1;
- (void)_handleViewControllerBecameReady:(id)arg1;
- (BOOL)_isInTransientViewController;
- (void)_moveChildViewController:(id)arg1 toOverlayForProtocol:(id)arg2;
- (void)_moveToRootSectionForChildViewController:(id)arg1 protocol:(id)arg2;
- (void)_navigationButtonAction:(id)arg1;
- (void)_navigationMenuButtonAction:(id)arg1;
- (id)_newBarButtonItemsWithButtonItems:(id)arg1 replacingItemWithTag:(long long)arg2 withButtonItem:(id)arg3;
- (id)_newSegmentedControlWithItems:(id)arg1;
- (void)_performActionForProtocolButton:(id)arg1;
- (void)_reloadBackgroundViewProperties;
- (void)_reloadContentInsets;
- (void)_reloadForAppearance:(BOOL)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (void)_reloadNavigationBar;
- (void)_reloadNavigationButtons;
- (void)_reloadNavigationMenus;
- (void)_reloadPreviewOverlayVisibility;
- (void)_reloadSearchFieldWithSection:(id)arg1;
- (void)_reloadSectionButtons;
- (void)_reloadSectionsControlWithGroup:(id)arg1;
- (BOOL)_reloadWithURLRequestProperties:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)_reloadWithURLRequestProperties:(id)arg1 preserveSectionControl:(BOOL)arg2;
- (void)_renderStorePage:(id)arg1 withType:(long long)arg2 viewController:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_repositionForChildViewController:(id)arg1;
- (void)_requestWebScriptReloadWithContext:(id)arg1;
- (void)_scriptEventNotification:(id)arg1;
- (void)_sectionControlAction:(id)arg1;
- (BOOL)_sectionIsNetworkConstrained;
- (void)_sendFailureAfterDialogsFinished:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1 shouldTearDown:(BOOL)arg2;
- (void)_setHeaderView:(id)arg1;
- (void)_setLeftNavigationItem:(id)arg1 forTag:(long long)arg2;
- (void)_setPendingChildViewController:(id)arg1;
- (void)_setRightNavigationItem:(id)arg1 forTag:(long long)arg2;
- (void)_setSegmentedControl:(id)arg1;
- (void)_setUseWebViewFastPath:(BOOL)arg1;
- (BOOL)_shouldDisplayControlsInNavigationBar;
- (BOOL)_shouldDisplaySegmentedControlInNavigationBar:(id)arg1;
- (BOOL)_shouldFetchAutomatically;
- (BOOL)_shouldReloadForAppearance;
- (void)_showPlaceholderViewControllerWithTearDown:(BOOL)arg1;
- (void)_tabConfigurationChanged:(id)arg1;
- (void)_tearDownNavigationMenu;
- (void)_verifyStorePageProtocol:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptProperties;
- (id)copyScriptViewController;
- (void)dealloc;
- (BOOL)decidePolicyForWebNavigationAction:(id)arg1 request:(id)arg2 decisionListener:(id)arg3;
- (double)defaultPNGExpirationTime;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)displayedURL;
- (void)enqueueFetchOperation;
- (void)enqueueFetchOperationForPageSection:(id)arg1;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (void)handleFailureWithError:(id)arg1;
- (void)handleStoreFailureWithError:(id)arg1;
- (void)hidePreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)iTunesStoreUI_searchFieldController;
- (void)iTunesStoreUI_searchFieldControllerDidChange:(id)arg1;
- (id)init;
- (id)initWithTabBarItem:(id)arg1;
- (void)invalidate;
- (void)invalidateForMemoryPurge;
- (BOOL)isShowingPreviewOverlay;
- (BOOL)isSkLoaded;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)loadView;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)menuViewController:(id)arg1 didTapButton:(id)arg2;
- (void)menuViewControllerDidCancel:(id)arg1;
- (id)navigationItemForScriptInterface;
- (id)newFetchOperation;
- (id)newPlaceholderViewController;
- (id)newRotationController;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2 returningError:(id *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)pushStorePage:(id)arg1 withTarget:(long long)arg2 animated:(BOOL)arg3;
- (void)reload;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 ofType:(long long)arg2 forURL:(id)arg3;
- (BOOL)reloadWithURLRequestProperties:(id)arg1;
- (void)requestWebScriptReloadWithContext:(id)arg1;
- (void)resetNavigationItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setShouldAdjustContentOffsets:(BOOL)arg1;
- (void)setSkLoading:(BOOL)arg1;
- (void)setURLRequest:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (BOOL)shouldAdjustContentOffsets;
- (BOOL)shouldExcludeFromNavigationHistory;
- (void)showExternalURL:(id)arg1;
- (void)showPlaceholderViewController;
- (BOOL)showPreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)storePageProtocol;
- (void)storePageProtocolDidChange;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)urlBagKey;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)viewIsReady;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end


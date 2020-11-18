//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppContextDelegate-Protocol.h>
#import <StoreKitUI/IKApplication-Protocol.h>
#import <StoreKitUI/SKUIModalDocumentDelegate-Protocol.h>
#import <StoreKitUI/SKUIModalSourceViewProvider-Protocol.h>
#import <StoreKitUI/SKUINavigationControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUINavigationDocumentDelegate-Protocol.h>
#import <StoreKitUI/SKUITabBarControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIURLResolverDelegate-Protocol.h>
#import <StoreKitUI/UINavigationControllerDelegate-Protocol.h>
#import <StoreKitUI/UITabBarControllerDelegate-Protocol.h>

@class IKAppContext, NSArray, NSDictionary, NSMutableArray, NSOperationQueue, NSString, NSURL, SKUIAppDeviceConfig, SKUIApplicationControllerOptions, SKUIClientContext, SKUIMetricsController, SKUIModalDocumentController, SKUINavigationDocumentController, SKUIPreviewDocumentController, SKUIScrollingTabBarController, SKUISimpleContainerViewController, SKUITabBarController, SKUIURL, SKUIURLResolver, UITabBarController, UIViewController, _SKUIApplicationShutdownHelper;
@protocol IKAppDataStoring, SKUIApplicationDelegate, SKUIStatusOverlayProvider;

@interface SKUIApplicationController : NSObject <SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationControllerDelegate, SKUINavigationDocumentDelegate, SKUITabBarControllerDelegate, SKUIURLResolverDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate, IKAppContextDelegate, IKApplication>
{
    SKUIURL *_activationURL;
    NSURL *_applicationScriptURL;
    Class _clientContextClass;
    SKUIClientContext *_clientContext;
    id<SKUIApplicationDelegate> _delegate;
    SKUIAppDeviceConfig *_deviceConfig;
    BOOL _didDisplayFirstPage;
    UIViewController *_floatingStatusOverlayViewController;
    BOOL _hidesTabBar;
    BOOL _ignoreDidBecomeActive;
    long long _lastNavigationControllerOperation;
    UIViewController *_lastPoppedViewController;
    unsigned long long _indexOfLastTabNeedingContent;
    NSDictionary *_launchOptions;
    SKUIURL *_legacyLaunchURL;
    id<IKAppDataStoring> _localStorage;
    SKUIModalDocumentController *_modalDocumentController;
    SKUIMetricsController *_metricsController;
    BOOL _mescalPrimeEnabledForXHRRequests;
    SKUISimpleContainerViewController *_navigationContainerViewController;
    NSMutableArray *_navigationDocumentControllers;
    NSOperationQueue *_operationQueue;
    SKUIPreviewDocumentController *_previewDocumentController;
    BOOL _reloadApplicationOnForegroundNotification;
    unsigned long long _resignActiveTaskID;
    UIViewController *_rootViewController;
    IKAppContext *_scriptContext;
    long long _scriptLoadState;
    id<SKUIStatusOverlayProvider> _statusOverlayProvider;
    _SKUIApplicationShutdownHelper *_shutdownHelper;
    BOOL _stopApplicationOnBackgroundNotification;
    SKUITabBarController *_tabBarController;
    NSArray *_tabBarItems;
    SKUINavigationDocumentController *_transientNavigationDocument;
    SKUIURLResolver *_urlResolver;
    id<IKAppDataStoring> _vendorStorage;
    NSMutableArray *_whenLoadedBlocks;
    SKUIApplicationControllerOptions *_options;
    SKUIScrollingTabBarController *_scrollingTabBarController;
}

@property (readonly, nonatomic) long long _applicationMode;
@property (nonatomic, setter=_setHidesTabBar:) BOOL _hidesTabBar; // @synthesize _hidesTabBar;
@property (readonly, nonatomic) NSArray *_navigationControllers;
@property (readonly, nonatomic) SKUIPreviewDocumentController *_previewOverlayDocumentController; // @synthesize _previewOverlayDocumentController=_previewDocumentController;
@property (nonatomic, setter=_setSelectedTabBarIndex:) long long _selectedTabBarIndex;
@property (readonly, nonatomic) SKUINavigationDocumentController *_transientNavigationController;
@property (readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIApplicationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL mescalPrimeEnabledForXHRRequests; // @synthesize mescalPrimeEnabledForXHRRequests=_mescalPrimeEnabledForXHRRequests;
@property (readonly, nonatomic) SKUIModalDocumentController *modalDocumentController; // @synthesize modalDocumentController=_modalDocumentController;
@property (readonly, nonatomic) SKUIApplicationControllerOptions *options; // @synthesize options=_options;
@property (readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property (readonly, nonatomic) SKUIScrollingTabBarController *scrollingTabBarController; // @synthesize scrollingTabBarController=_scrollingTabBarController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property (copy, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;

+ (id)_referrerAppForSourceApplication:(id)arg1 launchURL:(id *)arg2;
+ (id)applicationOptionsWithLaunchOptions:(id)arg1;
+ (id)configurationPreloader;
+ (void)finishedWithConfigurationPreloader;
+ (void)prepareForLaunch;
- (void).cxx_destruct;
- (void)URLResolver:(id)arg1 didFinishWithResult:(BOOL)arg2;
- (BOOL)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
- (void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;
- (void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
- (Class)_JSITunesStoreClass;
- (id)_activeNavigationController;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_assetsDidUpdate:(id)arg1;
- (void)_dispatchTabBarOnNeedsContentForTabAtIndex:(unsigned long long)arg1;
- (void)_dispatchTabBarOnSelect;
- (id)_documentControllerForNavigationController:(id)arg1;
- (void)_ensureStackConsistencyForNavigationController:(id)arg1;
- (id)_existingTabBarController;
- (void)_failReloadWithError:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_finishWillResignActiveWithDialogState:(BOOL)arg1;
- (void)_fireBlocksAfterLoad;
- (void)_handleScriptUnavailable;
- (void)_invalidateApplication;
- (BOOL)_isDisplayingAccountViewController;
- (BOOL)_isStoreFront:(id)arg1 equalToStoreFront:(id)arg2;
- (void)_jsLaunchFinishedWithLaunchMetrics:(id)arg1;
- (id)_launchOptionsWithURL:(id)arg1;
- (void)_legacyResolveExternalURL:(id)arg1;
- (void)_loadApplicationFromUpdatableAssetsCache:(id)arg1;
- (void)_loadApplicationScript;
- (id)_navigationContainerViewController;
- (BOOL)_needsStatusOverlay;
- (id)_newNavigationControllerWithTabBarItem:(id)arg1;
- (id)_operationQueue;
- (id)_overlayNavigationControllerForViewController:(id)arg1;
- (void)_pageDidDisplayNotification:(id)arg1;
- (BOOL)_playPreviewForPreviewTemplate:(id)arg1;
- (void)_previewDocumentIsActiveChangeNotification:(id)arg1;
- (void)_recordTabBarMetricsEventToSelectViewController:(id)arg1;
- (void)_reloadAfterNetworkChange:(id)arg1;
- (void)_reloadApplication;
- (void)_reloadRootViewControllers;
- (void)_reloadTabBarWithClientContext:(id)arg1;
- (void)_removeObserversForReloadNotifications;
- (void)_removeStatusOverlayFromAllNavigationControllers;
- (void)_resetDocumentControllers;
- (void)_resetUserInteraceForAccountViewDisappear:(id)arg1;
- (void)_resetUserInterfaceAfterStoreFrontChange;
- (void)_retryAfterFailure;
- (id)_rootDocuments;
- (Class)_scrollingTabBarControllerClass;
- (void)_sendClientContextDidChange;
- (void)_sendDidDisplayFirstPageIfNecessary;
- (BOOL)_sendNativeBackButtonMetricEvents;
- (void)_setClientContextWithDictionary:(id)arg1;
- (void)_setManifestURLOnUpdatableAssetController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_shouldUseLegacyURLHandlingForExternalURL:(id)arg1;
- (void)_showFloatingStatusOverlayAnimated:(BOOL)arg1;
- (void)_showStatusOverlayForNavigationController:(id)arg1 viewController:(id)arg2 animated:(BOOL)arg3;
- (void)_startScriptContextWithURL:(id)arg1;
- (id)_statusOverlayProviderForViewController:(id)arg1;
- (void)_stopApplication;
- (void)_stopScriptContextForReload;
- (void)_storeFrontChangeNotification:(id)arg1;
- (id)_tabBarController;
- (Class)_tabBarControllerClass;
- (void)_tintTabBarWithViewController:(id)arg1;
- (id)_transientNavigationDocument;
- (void)_updateOverlayNavigationController:(id)arg1;
- (BOOL)_usesFloatingStatusOverlayForWidth:(double)arg1;
- (id)activeDocument;
- (void)appContext:(id)arg1 didCompletePurchase:(id)arg2;
- (void)appContext:(id)arg1 didCompleteSoftwarePurchase:(id)arg2;
- (void)appContext:(id)arg1 didExitWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3;
- (void)appContext:(id)arg1 setPreviewOverlayDocument:(id)arg2 withOptions:(id)arg3;
- (void)appContextNeedsRestart:(id)arg1;
- (id)appIdentifier;
- (BOOL)appIsTrusted;
- (id)appJSURL;
- (BOOL)appJSURLTrusted;
- (id)appLaunchParams;
- (void)application:(id)arg1 didReceiveURL:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (id)deviceConfigForContext:(id)arg1;
- (void)evaluateBlockWhenLoaded:(CDUnknownBlockType)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)hideStatusOverlayForProvider:(id)arg1 animated:(BOOL)arg2;
- (id)init;
- (id)initWithClientContextClass:(Class)arg1;
- (id)initWithClientContextClass:(Class)arg1 options:(id)arg2;
- (id)initWithClientContextClass:(Class)arg1 tabBarControllerStyle:(long long)arg2;
- (id)jsNavigationDocumentForNavigationController:(id)arg1 inContext:(id)arg2;
- (id)jsNavigationDocumentForNavigationDocumentController:(id)arg1 inContext:(id)arg2;
- (void)loadApplication;
- (void)loadApplicationWithOptions:(id)arg1;
- (id)localStorage;
- (long long)modalDocumentController:(id)arg1 barStyleForStackItem:(id)arg2;
- (void)modalDocumentControllerDidFinish:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)navigationControllerForContext:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationDocumentController:(id)arg1 requestsAccessToAppContextUsingBlock:(CDUnknownBlockType)arg2;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (id)presentationViewControllerForAppContext:(id)arg1;
- (id)presentationViewControllerForURLResolver:(id)arg1;
- (void)recordMetricsEvent:(id)arg1 flushImmediately:(BOOL)arg2;
- (void)resumeApplicationWithOptions:(id)arg1;
- (id)selectTabWithIdentifier:(id)arg1;
- (void)setClientContext:(id)arg1;
- (BOOL)shouldIgnoreJSValidation;
- (void)showErrorViewForLaunchFailure;
- (void)showErrorViewWithTitle:(id)arg1 message:(id)arg2;
- (void)showErrorViewWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonAction:(CDUnknownBlockType)arg4;
- (void)showExternalURL:(id)arg1;
- (void)showStatusOverlayUsingProvider:(id)arg1 animated:(BOOL)arg2;
- (void)showTransientViewController:(id)arg1;
- (struct CGSize)sizeForNavigationDocument:(id)arg1;
- (void)suspendApplicationWithOptions:(id)arg1;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
- (void)tabBarController:(id)arg1 didReselectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (BOOL)tabBarController:(id)arg1 shouldFallbackToRootForController:(id)arg2;
- (BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willDisplayViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id)arg3;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)updateTabBarWithItems:(id)arg1 animated:(BOOL)arg2;
- (void)updateTabBarWithItems:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)vendorIdentifier;
- (id)vendorStorage;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import <StoreKitUI/SKUIBannerViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIIPadProductPageDelegate-Protocol.h>
#import <StoreKitUI/SKUIIPhoneProductPageDelegate-Protocol.h>
#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SUClientInterfaceDelegatePrivate-Protocol.h>
#import <StoreKitUI/SUPurchaseManagerDelegate-Protocol.h>

@class NSDictionary, NSString, NSURL, SKUIBannerViewController, SKUIClientContext, SKUIIPadProductPageViewController, SKUIIPhoneProductPageViewController, SKUIITunesStoreUIPageViewController, SKUIItemStateCenter, SSMetricsPageEvent, SUBarButtonItem, SUDialogManager, SUPreviewOverlayViewController, SUPurchaseManager;
@protocol SKProductPageViewControllerDelegate, SKProductPageViewControllerDelegatePrivate;

@interface SKProductPageViewController : SUViewController <SKUIBannerViewDelegate, SKUIIPadProductPageDelegate, SKUIIPhoneProductPageDelegate, SUClientInterfaceDelegatePrivate, SUPurchaseManagerDelegate, SKUIItemStateCenterObserver>
{
    NSString *_additionalPurchaseParameters;
    NSString *_affiliateIdentifier;
    BOOL _askToBuy;
    SKUIBannerViewController *_bannerViewController;
    SKUIClientContext *_clientContext;
    id<SKProductPageViewControllerDelegatePrivate> _delegate;
    SUDialogManager *_dialogManager;
    SUBarButtonItem *_gotoStoreButtonItem;
    SUBarButtonItem *_rightBarButtonItem;
    SKUIIPadProductPageViewController *_ipadProductPageViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKUIItemStateCenter *_itemStateCenter;
    SSMetricsPageEvent *_lastPageEvent;
    NSURL *_nativeURL;
    SUPreviewOverlayViewController *_previewOverlay;
    NSDictionary *_productParameters;
    SUPurchaseManager *_purchaseManager;
    BOOL _preview;
    BOOL _showsStoreButton;
    BOOL _showsRightBarButton;
    NSString *_rightBarButtonTitle;
    NSString *_promptString;
    long long _style;
    SKUIITunesStoreUIPageViewController *_storePageViewController;
    long long _urlBagType;
    NSString *_cancelButtonTitle;
}

@property (nonatomic) long long URLBagType; // @synthesize URLBagType=_urlBagType;
@property (copy, nonatomic) NSString *additionalPurchaseParameters; // @synthesize additionalPurchaseParameters=_additionalPurchaseParameters;
@property (copy, nonatomic) NSString *affiliateIdentifier; // @synthesize affiliateIdentifier=_affiliateIdentifier;
@property (nonatomic) BOOL askToBuy; // @synthesize askToBuy=_askToBuy;
@property (copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKProductPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isPreview) BOOL preview; // @synthesize preview=_preview;
@property (nonatomic) long long productPageStyle; // @synthesize productPageStyle=_style;
@property (copy, nonatomic) NSString *promptString; // @synthesize promptString=_promptString;
@property (copy, nonatomic) NSString *rightBarButtonTitle; // @synthesize rightBarButtonTitle=_rightBarButtonTitle;
@property (copy, nonatomic) NSDictionary *scriptContextDictionary;
@property (nonatomic) BOOL showsRightBarButton; // @synthesize showsRightBarButton=_showsRightBarButton;
@property (nonatomic) BOOL showsStoreButton; // @synthesize showsStoreButton=_showsStoreButton;
@property (readonly) Class superclass;

+ (id)_defaultClientIdentifier;
+ (id)_defaultClientInterface;
+ (void)_validateURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)getCanLoadWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground;
- (void)_failWithError:(id)arg1;
- (void)_gotoStoreButtonAction:(id)arg1;
- (id)_initSKProductPageViewController;
- (void)_loadClientContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_loadProductWithRequest:(id)arg1;
- (void)_loadRequestForProductParameters;
- (id)_newRequestPropertiesWithRequest:(id)arg1;
- (id)_previewOverlay;
- (void)_purchaseFailedNotification:(id)arg1;
- (void)_purchaseFinishedNotification:(id)arg1;
- (void)_reloadGotoStoreButton;
- (void)_reloadViews;
- (void)_rightBarButtonAction:(id)arg1;
- (void)_sendDidFailLoadWithError:(id)arg1;
- (void)_sendDidFinishWithResult:(long long)arg1;
- (void)_setClientContext:(id)arg1;
- (void)_setResponse:(id)arg1 forProperties:(id)arg2 error:(id)arg3;
- (void)_setShowsCancelButton:(BOOL)arg1;
- (void)_showPageWithRequest:(id)arg1 animated:(BOOL)arg2;
- (void)_showPreviewOverlayAnimated:(BOOL)arg1;
- (void)_showProductPage:(id)arg1 pageEvent:(id)arg2;
- (void)bannerView:(id)arg1 didFailWithError:(id)arg2;
- (void)bannerViewDidClose:(id)arg1;
- (id)cancelButtonTitle:(id)arg1;
- (void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
- (void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(BOOL)arg2;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(BOOL)arg3;
- (void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(BOOL)arg2;
- (void)clientInterface:(id)arg1 willDismissViewController:(id)arg2;
- (void)clientInterface:(id)arg1 willPresentViewController:(id)arg2;
- (void)dealloc;
- (void)iPadProductPage:(id)arg1 openItem:(id)arg2;
- (void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(CDUnknownBlockType)arg3;
- (BOOL)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (BOOL)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (id)init;
- (id)initWithProductPageStyle:(long long)arg1;
- (id)initWithTabBarItem:(id)arg1;
- (void)itemStateCenter:(id)arg1 didFinishPurchases:(id)arg2;
- (void)loadProductWithParameters:(id)arg1;
- (void)loadProductWithRequest:(id)arg1;
- (void)loadView;
- (void)loadWithProductPage:(id)arg1;
- (void)loadWithStorePageRequest:(id)arg1;
- (id)previewOverlayForClientInterface:(id)arg1;
- (void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;

@end


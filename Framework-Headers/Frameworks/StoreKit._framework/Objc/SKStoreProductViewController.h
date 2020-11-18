//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, SKInvocationQueueProxy, SKRemoteProductViewController, _UIAsyncInvocation;
@protocol SKStoreProductViewControllerDelegate, SKStoreProductViewControllerDelegatePrivate, SKUIServiceProductPageViewController;

@interface SKStoreProductViewController : UIViewController
{
    NSString *_additionalBuyParameters;
    NSString *_affiliateIdentifier;
    BOOL _automaticallyDismisses;
    _UIAsyncInvocation *_cancelRequest;
    NSString *_clientIdentifier;
    id<SKStoreProductViewControllerDelegatePrivate> _delegate;
    CDUnknownBlockType _loadBlock;
    long long _originalStatusBarStyle;
    long long _productPageStyle;
    SKRemoteProductViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;
    NSDictionary *_scriptContextDictionary;
    BOOL _showsStoreButton;
    NSString *_cancelButtonTitle;
    NSString *_rightBarButtonTitle;
    BOOL _showsRightBarButton;
    BOOL _askToBuy;
    NSString *_promptString;
}

@property (copy, nonatomic) NSString *additionalBuyParameters; // @synthesize additionalBuyParameters=_additionalBuyParameters;
@property (copy, nonatomic) NSString *affiliateIdentifier; // @synthesize affiliateIdentifier=_affiliateIdentifier;
@property (nonatomic) BOOL askToBuy; // @synthesize askToBuy=_askToBuy;
@property (nonatomic) BOOL automaticallyDismisses; // @synthesize automaticallyDismisses=_automaticallyDismisses;
@property (copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property (copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (nonatomic) id<SKStoreProductViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long productPageStyle; // @synthesize productPageStyle=_productPageStyle;
@property (copy, nonatomic) NSString *promptString; // @synthesize promptString=_promptString;
@property (copy, nonatomic) NSString *rightBarButtonTitle; // @synthesize rightBarButtonTitle=_rightBarButtonTitle;
@property (copy, nonatomic) NSDictionary *scriptContextDictionary; // @synthesize scriptContextDictionary=_scriptContextDictionary;
@property (nonatomic) BOOL showsRightBarButton; // @synthesize showsRightBarButton=_showsRightBarButton;
@property (nonatomic) BOOL showsStoreButton; // @synthesize showsStoreButton=_showsStoreButton;

+ (id)_defaultIXStoreSheetDictionary;
+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)getCanLoadURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_addRemoteView;
- (void)_didFinish;
- (void)_didFinishWithResult:(long long)arg1;
- (void)_fireLoadBlockBeforeFinishing;
- (void)_forceOrientationBackToSupportedOrientation;
- (BOOL)_isPeeking;
- (void)_loadDidFinishWithResult:(BOOL)arg1 error:(id)arg2;
- (int)_preferredStatusBarVisibility;
- (void)_presentPageWithRequest:(id)arg1 animated:(BOOL)arg2;
- (void)_requestRemoteViewController;
- (void)_resetRemoteViewController;
- (void)_setLoadBlock:(CDUnknownBlockType)arg1;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)_throwUnsupportedPresentationException;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)dealloc;
- (void)finishImmediately;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end


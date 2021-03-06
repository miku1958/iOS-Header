//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SUPreviewOverlayViewController, SUPurchaseManager, SUQueueSessionManager, SUTabBarController, SUUIAppearance, SUViewControllerFactory, UIColor;
@protocol OS_dispatch_queue, SUClientInterfaceDelegate, SUClientInterfaceDelegatePrivate;

@interface SUClientInterface : NSObject
{
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_askToBuyApprovalPrompt;
    SUUIAppearance *_appearance;
    BOOL _inAskToBuyApprovalFlow;
    NSString *_clientIdentifier;
    UIColor *_darkKeyColor;
    id<SUClientInterfaceDelegatePrivate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _ignoresExpectedClientsProtocol;
    UIColor *_lightKeyColor;
    NSString *_localStoragePath;
    SUPurchaseManager *_purchaseManager;
    SUQueueSessionManager *_queueSessionManager;
    BOOL _showDialogOnError;
    NSMutableDictionary *_urlBagKeys;
    NSString *_userAgent;
    SUViewControllerFactory *_viewControllerFactory;
    BOOL _wasLaunchedFromLibrary;
    BOOL _ignoreDefaultKeyboardNotifications;
    BOOL inAskToBuyApprovalFlow;
    BOOL _financeInterruption;
    NSString *_hostApplicationIdentifier;
}

@property (getter=_ignoresExpectedClientsProtocol, setter=_setIgnoresExpectedClientsProtocol:) BOOL _ignoresExpectedClientsProtocol;
@property (copy) SUUIAppearance *appearance;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *applicationVersion;
@property (copy, nonatomic) NSString *askToBuyApprovalPrompt; // @synthesize askToBuyApprovalPrompt=_askToBuyApprovalPrompt;
@property (copy) NSString *clientIdentifier;
@property (copy, nonatomic) UIColor *darkKeyColor; // @synthesize darkKeyColor=_darkKeyColor;
@property (nonatomic) id<SUClientInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property (getter=isFinanceInterruption) BOOL financeInterruption; // @synthesize financeInterruption=_financeInterruption;
@property (copy) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property BOOL ignoreDefaultKeyboardNotifications; // @synthesize ignoreDefaultKeyboardNotifications=_ignoreDefaultKeyboardNotifications;
@property BOOL inAskToBuyApprovalFlow; // @synthesize inAskToBuyApprovalFlow;
@property (copy, nonatomic) UIColor *lightKeyColor; // @synthesize lightKeyColor=_lightKeyColor;
@property (copy) NSString *localStoragePath;
@property (readonly, nonatomic) SUPreviewOverlayViewController *previewOverlay;
@property (strong) SUPurchaseManager *purchaseManager;
@property (strong) SUQueueSessionManager *queueSessionManager;
@property BOOL showDialogOnError; // @synthesize showDialogOnError=_showDialogOnError;
@property (readonly, nonatomic) SUTabBarController *tabBarController;
@property (copy) NSString *userAgent;
@property (strong) SUViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property BOOL wasLaunchedFromLibrary;

+ (id)_defaultApplicationIdentifier;
+ (id)_defaultApplicationVersion;
- (id)URLBagKeyForIdentifier:(id)arg1;
- (void)_dismissModalViewControllerFromViewController:(id)arg1 withTransition:(int)arg2;
- (void)_dismissViewControllerFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dispatchOnPageResponseWithData:(id)arg1 response:(id)arg2;
- (void)_dispatchXEvent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_exitStoreWithReason:(long long)arg1;
- (void)_hidePreviewOverlayAnimated:(BOOL)arg1;
- (void)_mediaPlayerViewControllerWillDismiss:(id)arg1 animated:(BOOL)arg2;
- (id)_newScriptInterface;
- (void)_presentDialog:(id)arg1;
- (void)_presentViewController:(id)arg1 fromViewController:(id)arg2 withTransition:(int)arg3;
- (void)_returnToLibrary;
- (void)_setStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2;
- (void)_setStatusBarStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)_showPreviewOverlayAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;

@end


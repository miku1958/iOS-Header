//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/SFSafariViewControllerDelegate-Protocol.h>
#import <iTunesStoreUI/SUScriptModalDialogDelegate-Protocol.h>
#import <iTunesStoreUI/SUScriptXMLHTTPRequestDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSObject, NSString, SFSafariViewController, SSAuthenticationContext, SUClientInterface, SUScriptAccount, SUScriptAccountManager, SUScriptAppleAccountStore, SUScriptApplication, SUScriptCarrierBundlingController, SUScriptDevice, SUScriptDictionary, SUScriptFairPlayContext, SUScriptKeyValueStore, SUScriptMediaLibrary, SUScriptMetricsController, SUScriptNavigationBar, SUScriptNotificationObserver, SUScriptOperationDelegate, SUScriptPassbookLibrary, SUScriptPreviewOverlay, SUScriptProtocol, SUScriptPurchaseManager, SUScriptSectionsController, SUScriptStoreBagLoader, SUScriptSubscriptionStatusCoordinator, SUScriptTelephony, SUScriptViewController, SUScriptWindow, SUScriptWindowContext, WebFrame;
@protocol OS_dispatch_queue, SUScriptInterfaceDelegate;

@interface SUScriptInterface : SUScriptObject <SUScriptModalDialogDelegate, SUScriptXMLHTTPRequestDelegate, SFSafariViewControllerDelegate>
{
    SUScriptAccountManager *_accountManager;
    SUScriptKeyValueStore *_applicationLocalStorage;
    SSAuthenticationContext *_authenticationContext;
    SUScriptCarrierBundlingController *_carrierBundlingController;
    SUClientInterface *_clientInterface;
    id<SUScriptInterfaceDelegate> _delegate;
    SUScriptKeyValueStore *_deviceLocalStorage;
    NSMutableDictionary *_downloadQueues;
    WebFrame *_frame;
    SUScriptMediaLibrary *_mediaLibrary;
    SUScriptMetricsController *_metricsController;
    SUScriptNotificationObserver *_notificationObserver;
    SUScriptPreviewOverlay *_previewOverlay;
    SUScriptPurchaseManager *_purchaseManager;
    NSMutableSet *_requireCellularURLs;
    SUScriptOperationDelegate *_scriptOperationDelegate;
    SUScriptStoreBagLoader *_scriptStoreBagLoader;
    SUScriptWindowContext *_scriptWindowContext;
    SUScriptSubscriptionStatusCoordinator *_subscriptionStatusCoordinator;
    id _threadSafeDelegate;
    NSObject<OS_dispatch_queue> *_hsaTokenQueue;
    struct __CFString *_hsaCurrentIdentifier;
    NSString *_safariViewControllerIdentifier;
    NSNumber *_safariDismissButtonStyle;
    SFSafariViewController *_safariViewController;
}

@property (readonly) SUScriptFairPlayContext *accountCreationSecureContext;
@property (readonly) NSArray *accounts;
@property (readonly) NSString *actionTypeDismissSheet;
@property (readonly) NSString *actionTypeDismissWindows;
@property (readonly) NSString *actionTypeReturnToLibrary;
@property (readonly) SUScriptAppleAccountStore *appleAccountStore;
@property (readonly) SUScriptApplication *application;
@property (readonly) id applicationAccessibilityEnabled;
@property (readonly) SUScriptKeyValueStore *applicationLocalStorage;
@property (readonly) NSString *askToBuyPrompt;
@property (copy) SSAuthenticationContext *authenticationContext;
@property (readonly) SUScriptCarrierBundlingController *carrierBundlingController;
@property (readonly) NSString *clientIdentifier;
@property (strong) SUClientInterface *clientInterface;
@property (copy) NSString *cookie;
@property (readonly) NSString *cookieDefaultURL;
@property (readonly) NSString *cookieForDefaultURL;
@property (readonly) id creditCardReaderAvailable;
@property (readonly, copy) NSString *debugDescription;
@property id<SUScriptInterfaceDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) SUScriptDevice *device;
@property (readonly) SUScriptKeyValueStore *deviceLocalStorage;
@property (readonly) NSString *deviceSerialNumber;
@property (readonly) id globalRootObject;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *installedSoftwareApplications;
@property (readonly) id loggingEnabled;
@property (readonly) SUScriptMediaLibrary *mediaLibrary;
@property (readonly) SUScriptMetricsController *metricsController;
@property (readonly) SUScriptNavigationBar *navigationBar;
@property (readonly) NSNumber *orientation;
@property (readonly) SUScriptPassbookLibrary *passbookLibrary;
@property (readonly) SUScriptPreviewOverlay *previewOverlay;
@property (strong) SUScriptAccount *primaryAccount;
@property (strong) SUScriptAccount *primaryLockerAccount;
@property (readonly) SUScriptProtocol *protocol;
@property (readonly) SUScriptPurchaseManager *purchaseManager;
@property (readonly) NSString *referrerURL;
@property (readonly) NSString *referringUserAgent;
@property (copy) NSNumber *safariDismissButtonStyle; // @synthesize safariDismissButtonStyle=_safariDismissButtonStyle;
@property (strong, nonatomic) SFSafariViewController *safariViewController; // @synthesize safariViewController=_safariViewController;
@property (strong, nonatomic) NSString *safariViewControllerIdentifier; // @synthesize safariViewControllerIdentifier=_safariViewControllerIdentifier;
@property (readonly) NSString *safariViewControllerIdentifierQueryParameterName;
@property (readonly) id screenReaderRunning;
@property (readonly) SUScriptDictionary *scriptStoreBagDictionary;
@property (strong) SUScriptWindowContext *scriptWindowContext;
@property (readonly) SUScriptSectionsController *sectionsController;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) long long storeSheetType;
@property (readonly) long long storeSheetTypeAskToBuy;
@property (readonly) long long storeSheetTypeDefault;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SUScriptTelephony *telephony;
@property (readonly) id<SUScriptInterfaceDelegate> threadSafeDelegate;
@property (readonly) SUScriptViewController *viewController;
@property (strong) WebFrame *webFrame;
@property (readonly) SUScriptWindow *window;

+ (void)initialize;
+ (long long)purchaseAnimationStyleFromString:(id)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (id)DOMElementWithElement:(id)arg1;
- (void)_accessibilityPostLayoutChange;
- (id)_className;
- (void)_cleanUpSafariViewController;
- (id)_cookieForURL:(id)arg1;
- (id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4;
- (void)_dismissSafariViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishCreditCardReaderWithOutput:(id)arg1 callback:(id)arg2;
- (void)_getSoftwareApplicationWithCompletionFunction:(id)arg1 lookupBlock:(CDUnknownBlockType)arg2;
- (void)_globalEventNotification:(id)arg1;
- (void)_presentSafariViewControllerWithURL:(id)arg1 safariIdentifier:(id)arg2 animated:(BOOL)arg3;
- (void)_scriptUserInfoDidChangeNotification:(id)arg1;
- (void)accessibilityPostLayoutChange;
- (void)accessibilityPostScreenChange;
- (id)accountDSID;
- (id)accountForDSID:(id)arg1;
- (id)accountName;
- (id)activeAudioPlayers;
- (id)activeNetworkType;
- (void)addExternalDownloads:(id)arg1;
- (void)addExternalDownloads:(id)arg1 options:(id)arg2;
- (void)addExternalDownloadsFromManifestURL:(id)arg1;
- (void)addPurchaseWithInfo:(id)arg1;
- (void)addPurchaseWithInfo:(id)arg1 options:(id)arg2;
- (void)approveInPerson:(id)arg1 completionFunction:(id)arg2;
- (BOOL)arePodcastsDisabled;
- (id)attributeKeys;
- (void)authenticateAppleIdWithUsername:(id)arg1 password:(id)arg2 callback:(id)arg3;
- (void)authenticateForAccount:(id)arg1 withOptions:(id)arg2;
- (BOOL)canSendEmail;
- (BOOL)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(BOOL)arg2;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3;
- (struct OpaqueJSContext *)copyJavaScriptContext;
- (void)dealloc;
- (void)deallocAuthentication;
- (void)deallocCarrierBundlingController;
- (void)deallocMediaLibrary;
- (void)deallocMetricsController;
- (void)deallocSubscriptionStatusCoordinator;
- (long long)dialogDisplayCountForKey:(id)arg1;
- (id)diskSpaceAvailable;
- (void)dismissSafariViewControllerAnimated:(BOOL)arg1;
- (void)dismissSheet;
- (void)dismissWindowsWithOptions:(id)arg1;
- (void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2;
- (void)dispatchXEvent:(id)arg1;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (id)getAudioPlayerForURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;
- (id)getDownloadQueueWithQueueType:(id)arg1;
- (void)getInstalledSoftwareApplicationsWithCompletionFunction:(id)arg1;
- (void)getSoftwareApplicationWithAdamID:(id)arg1 completionFunction:(id)arg2;
- (void)getSoftwareApplicationWithBundleID:(id)arg1 completionFunction:(id)arg2;
- (void)goBack;
- (void)gotoStoreURL:(id)arg1;
- (void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(BOOL)arg3 forceAuthentication:(BOOL)arg4;
- (void)handleDialogPropertyListString:(id)arg1;
- (void)handleProtocolPropertyListString:(id)arg1;
- (void)handleRootObjectWithPropertyListString:(id)arg1;
- (void)handleTrackListWithPropertyListString:(id)arg1;
- (id)hardwareType;
- (BOOL)haveAccount;
- (id)init;
- (void)initAuthentication;
- (BOOL)isExplicitContentDisabled;
- (BOOL)isRunningTest;
- (BOOL)launchedToTest;
- (void)log:(id)arg1;
- (id)machineGUID;
- (id)makeAccount;
- (id)makeAccountPageWithURLs:(id)arg1;
- (id)makeActivity;
- (id)makeActivityItemProviderWithMIMEType:(id)arg1;
- (id)makeActivityViewControllerWithProviders:(id)arg1 activities:(id)arg2;
- (id)makeButtonWithSystemItemString:(id)arg1 action:(id)arg2;
- (id)makeButtonWithTitle:(id)arg1 action:(id)arg2;
- (id)makeCalloutView;
- (id)makeCanvasWithWidth:(id)arg1 height:(id)arg2;
- (id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithWhite:(id)arg1 alpha:(id)arg2;
- (id)makeComposeReviewViewControllerWithReview:(id)arg1;
- (id)makeDateFormatter;
- (id)makeDialog;
- (id)makeDocumentInteractionController;
- (id)makeDonationViewControllerWithCharityIdentifier:(id)arg1;
- (id)makeFacebookRequestWithURL:(id)arg1 requestMethod:(id)arg2;
- (id)makeFacebookSessionWithAccount:(id)arg1;
- (id)makeFamilySetupViewController;
- (id)makeGiftViewController;
- (id)makeLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (id)makeLookupRequest;
- (id)makeMediaPlayerItemWithProperties:(id)arg1;
- (id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg1;
- (id)makeMenuViewController;
- (id)makeNavigationControllerWithRootViewController:(id)arg1;
- (id)makeNumberFormatterWithStyle:(id)arg1;
- (id)makePopOverWithViewController:(id)arg1;
- (id)makeRadialGradientWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (id)makeRedeemViewController;
- (id)makeReportAProblemViewControllerWithAdamID:(id)arg1;
- (id)makeReviewWithAdamID:(id)arg1;
- (id)makeScriptActionWithType:(id)arg1;
- (id)makeSegmentedControl;
- (id)makeSplitViewController;
- (id)makeStorePageWithURLs:(id)arg1;
- (id)makeStoreSheetViewController;
- (id)makeSubscriptionStatusRequest;
- (id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4;
- (id)makeTweetComposeViewController;
- (id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2;
- (id)makeVolumeViewController;
- (id)makeWindow;
- (id)makeXMLHTTPRequest;
- (void)openCreditCardReaderWithCompletionFunction:(id)arg1;
- (void)openFamilyCircleSetupWithClientName:(id)arg1 completionFunction:(id)arg2;
- (void)openURL:(id)arg1;
- (void)openWallet;
- (id)parentViewController;
- (void)perfLog:(id)arg1;
- (void)performPurchaseAnimationForIdentifier:(id)arg1 style:(id)arg2;
- (void)pingURL:(id)arg1;
- (id)presentingViewControllerForScriptModalDialog:(id)arg1;
- (void)redeemCode:(id)arg1;
- (void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3;
- (void)reloadFooterSection:(id)arg1 withURL:(id)arg2;
- (void)reportAProblemForIdentifier:(id)arg1;
- (id)requestInfo;
- (void)requireCellularForResourceWithURL:(id)arg1;
- (void)retryAllRestoreDownloads;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(BOOL)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (id)safariViewControllerDismissButtonStyle;
- (id)scriptAttributeKeys;
- (BOOL)scriptXMLHTTPRequest:(id)arg1 requiresCellularForURL:(id)arg2;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)selectTrackListItemWithIdentifier:(id)arg1;
- (void)sendPostOfType:(id)arg1 withOptions:(id)arg2;
- (void)setAccounts:(id)arg1;
- (void)setCarrierBundlingController:(id)arg1;
- (void)setCookieDefaultURL:(id)arg1;
- (void)setCookieForDefaultURL:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setGlobalRootObject:(id)arg1;
- (void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2;
- (void)setLoggingEnabled:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setOrientation:(id)arg1;
- (void)setReferrerURL:(id)arg1;
- (void)setReferringUserAgent:(id)arg1;
- (void)setSafariViewControllerDismissButtonStyle:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setSubscriptionStatusCoordinator:(id)arg1;
- (void)setWindow:(id)arg1;
- (BOOL)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2;
- (BOOL)shouldShowAddToWalletLink:(id)arg1;
- (void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (BOOL)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (void)showSafariViewControllerWithURLString:(id)arg1 identifier:(id)arg2 animated:(BOOL)arg3;
- (void)signOutPrimaryAccount;
- (id)softwareApplicationWithAdamID:(id)arg1;
- (id)softwareApplicationWithBundleID:(id)arg1;
- (void)startListeningForAuthenticationTokenWithCallback:(id)arg1;
- (void)startedTest:(id)arg1;
- (void)stopListeningForAuthenticationToken;
- (id)subscriptionStatusCoordinator;
- (id)systemItemAction;
- (id)systemItemAdd;
- (id)systemItemBookmarks;
- (id)systemItemCamera;
- (id)systemItemCancel;
- (id)systemItemCompose;
- (id)systemItemDone;
- (id)systemItemEdit;
- (id)systemItemFastForward;
- (id)systemItemFixedSpace;
- (id)systemItemFlexibleSpace;
- (id)systemItemOrganize;
- (id)systemItemPageCurl;
- (id)systemItemPause;
- (id)systemItemPlay;
- (id)systemItemRedo;
- (id)systemItemRefresh;
- (id)systemItemReplay;
- (id)systemItemRewind;
- (id)systemItemSearch;
- (id)systemItemStop;
- (id)systemItemTrash;
- (id)systemItemUndo;
- (id)systemVersion;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <iTunesStoreUI/ISOperationDelegate-Protocol.h>
#import <iTunesStoreUI/SUScriptNativeObject-Protocol.h>

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUNavigationItem, SURotationController, SUViewControllerContext, SUViewControllerScriptProperties, UIBarButtonItem;

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate>
{
    SUViewControllerScriptProperties *_cachedScriptProperties;
    BOOL _canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    SUClientInterface *_clientInterface;
    BOOL _excludeFromNavigationHistory;
    UIBarButtonItem *_exitStoreButton;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    BOOL _isEnteringForeground;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    long long _rotationState;
    BOOL _shouldInvalidateForMemoryPurge;
    BOOL _showsLibraryButton;
    long long _transitionSafetyCount;
    BOOL _skLoading;
    BOOL _shouldAdjustContentOffsets;
}

@property (readonly, nonatomic, getter=_cachedScriptProperties) SUViewControllerScriptProperties *_cachedScriptProperties; // @synthesize _cachedScriptProperties;
@property (readonly, nonatomic, getter=_isEnteringForeground) BOOL _enteringForeground; // @synthesize _enteringForeground=_isEnteringForeground;
@property (readonly, nonatomic, getter=_pendingDialogs) NSArray *_pendingDialogs; // @synthesize _pendingDialogs;
@property (readonly, nonatomic, getter=_restoredContext) SUViewControllerContext *_restoredContext; // @synthesize _restoredContext;
@property (strong, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double defaultPNGExpirationTime;
@property (readonly, nonatomic) NSString *defaultPNGName;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIViewController *inputAccessoryViewController; // @synthesize inputAccessoryViewController=_inputAccessoryViewController;
@property (readonly, strong, nonatomic) SUNavigationItem *navigationItem; // @dynamic navigationItem;
@property (nonatomic) BOOL shouldAdjustContentOffsets; // @synthesize shouldAdjustContentOffsets=_shouldAdjustContentOffsets;
@property (nonatomic) BOOL shouldExcludeFromNavigationHistory; // @synthesize shouldExcludeFromNavigationHistory=_excludeFromNavigationHistory;
@property (nonatomic) BOOL shouldInvalidateForMemoryPurge; // @synthesize shouldInvalidateForMemoryPurge=_shouldInvalidateForMemoryPurge;
@property (nonatomic) BOOL showsLibraryButton; // @synthesize showsLibraryButton=_showsLibraryButton;
@property (nonatomic, getter=isSkLoading) BOOL skLoading; // @synthesize skLoading=_skLoading;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic, getter=isVisibleAndFrontmost) BOOL visibleAndFrontmost;

- (void).cxx_destruct;
- (long long)ITunesStoreUIBarStyle;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (BOOL)_canReloadView;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (id)_existingNavigationItem;
- (void)_exitStoreButtonAction:(id)arg1;
- (void)_exitStoreButtonDidChangeNotification:(id)arg1;
- (void)_invalidateForMemoryPurge;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_presentFooterAnimationDidStop;
- (void)_reloadExitStoreButtonWithParentViewController:(id)arg1;
- (void)_reloadLibraryButton;
- (id)_rotationController;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationDidResume;
- (void)applicationWillEnterForeground;
- (void)applicationWillSuspend;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancelOperations;
- (BOOL)clearsWeakScriptReferences;
- (id)copyArchivableContext;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (id)copyDefaultScriptProperties;
- (id)copyScriptProperties;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dismissFooterViewControllerAnimated:(BOOL)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (void)handleApplicationURL:(id)arg1;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (id)init;
- (id)initWithSection:(id)arg1;
- (id)inputAccessoryView;
- (long long)interfaceOrientation;
- (void)invalidate;
- (void)invalidateForMemoryPurge;
- (void)loadView;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)navigationController;
- (id)newRotationController;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (BOOL)presentDialog:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (void)presentFooterViewController:(id)arg1 animated:(BOOL)arg2;
- (void)reload;
- (void)reloadContentSizeForViewInPopover;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)resetRestoredContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 changeTabBarItem:(BOOL)arg2;
- (void)storePageProtocolDidChange;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tabBarItem;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (id)viewControllerFactory;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;

@end

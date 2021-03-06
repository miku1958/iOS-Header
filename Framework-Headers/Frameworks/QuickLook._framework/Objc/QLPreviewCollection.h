//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QuickLook/QLItemPresenterViewControllerDelegate-Protocol.h>
#import <QuickLook/QLPageViewControllerDataSource-Protocol.h>
#import <QuickLook/QLPageViewControllerDelegate-Protocol.h>
#import <QuickLook/QLPreviewCollectionProtocol-Protocol.h>
#import <QuickLook/QLPreviewItemViewControllerDelegate-Protocol.h>
#import <QuickLook/QLTransitionControllerProtocol-Protocol.h>
#import <QuickLook/UIGestureRecognizerDelegatePrivate-Protocol.h>

@class NSString, QLAppearance, QLItemViewController, QLPageViewController, QLPinchRotationTracker, QLPreviewItemStore, QLSwipeDownTracker, QLTransitionContext, QLTransitionDriver, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol QLPreviewControllerStateProtocol, QLTransitionControllerProtocol;

__attribute__((visibility("hidden")))
@interface QLPreviewCollection : UIViewController <QLTransitionControllerProtocol, QLPageViewControllerDataSource, QLPageViewControllerDelegate, QLPreviewItemViewControllerDelegate, QLItemPresenterViewControllerDelegate, UIGestureRecognizerDelegatePrivate, QLPreviewCollectionProtocol>
{
    struct _NSRange _previewItemRange;
    long long _currentItemIndex;
    QLPreviewItemStore *_itemStore;
    UIView *_localAccessoryViewContainer;
    UIView *_remoteAccessoryViewContainer;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_verticalPanGesture;
    UISwipeGestureRecognizer *_pageSwipeGesture;
    UIPanGestureRecognizer *_pagePanGesture;
    QLAppearance *_appearance;
    NSString *_loadingString;
    unsigned long long _visibilityState;
    BOOL _previewCollectionIsPartOfViewHierarchy;
    unsigned long long _appearanceActions;
    BOOL _isAvailable;
    BOOL _allowInteractiveTransitions;
    BOOL _fullScreen;
    BOOL _isEditing;
    BOOL _isTransitioningPage;
    BOOL _hasTriggeredInteractiveTransitionAnimation;
    QLPageViewController *_pageViewController;
    id<QLPreviewControllerStateProtocol> _stateManager;
    CDUnknownBlockType _prepareForInvalidationCompletionHandler;
    NSString *_overrideParentApplicationDisplayIdentifier;
    UIPanGestureRecognizer *_slideGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    QLSwipeDownTracker *_swipeDownTracker;
    QLPinchRotationTracker *_pinchRotationTracker;
    QLTransitionContext *_transitionContext;
    id<QLTransitionControllerProtocol> _transitionController;
    QLTransitionDriver *_transitionDriver;
    NSString *_hostApplicationBundleIdentifier;
}

@property (nonatomic) BOOL allowInteractiveTransitions; // @synthesize allowInteractiveTransitions=_allowInteractiveTransitions;
@property (readonly) QLItemViewController *currentPreviewItemViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fullScreen; // @synthesize fullScreen=_fullScreen;
@property BOOL hasTriggeredInteractiveTransitionAnimation; // @synthesize hasTriggeredInteractiveTransitionAnimation=_hasTriggeredInteractiveTransitionAnimation;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *hostApplicationBundleIdentifier; // @synthesize hostApplicationBundleIdentifier=_hostApplicationBundleIdentifier;
@property (nonatomic) BOOL isAvailable; // @synthesize isAvailable=_isAvailable;
@property (nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property (nonatomic) BOOL isTransitioningPage; // @synthesize isTransitioningPage=_isTransitioningPage;
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // @synthesize overrideParentApplicationDisplayIdentifier=_overrideParentApplicationDisplayIdentifier;
@property (strong) QLPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property (readonly, nonatomic) NSString *parentApplicationDisplayIdentifier;
@property (strong) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property (strong) QLPinchRotationTracker *pinchRotationTracker; // @synthesize pinchRotationTracker=_pinchRotationTracker;
@property (copy, nonatomic) CDUnknownBlockType prepareForInvalidationCompletionHandler; // @synthesize prepareForInvalidationCompletionHandler=_prepareForInvalidationCompletionHandler;
@property (strong) UIRotationGestureRecognizer *rotationGesture; // @synthesize rotationGesture=_rotationGesture;
@property (strong) UIPanGestureRecognizer *slideGesture; // @synthesize slideGesture=_slideGesture;
@property (strong) id<QLPreviewControllerStateProtocol> stateManager; // @synthesize stateManager=_stateManager;
@property (readonly) Class superclass;
@property (strong) QLSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
@property (strong) QLTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property (strong) id<QLTransitionControllerProtocol> transitionController; // @synthesize transitionController=_transitionController;
@property (strong) QLTransitionDriver *transitionDriver; // @synthesize transitionDriver=_transitionDriver;

+ (void)previewCollectionUsingRemoteViewController:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)quickLookExtension;
+ (void)remotePreviewCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)_cleanAccessoryViewContainer;
- (id)_defaultKeyCommands;
- (void)_installGestures;
- (BOOL)_isBeingDismissed;
- (BOOL)_isVisible;
- (BOOL)_itemViewControllerIsCurrentlyPresentedItemViewController:(id)arg1;
- (void)_notifyHostPreviewCollectionIsReadyForInvalidationIfNeeded;
- (id)_sandboxExtensionForEditedFileAtURL:(id)arg1;
- (void)_setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_setUpTransitionDriverForPresenting:(BOOL)arg1 duration:(double)arg2;
- (void)_tapGestureRecognized;
- (void)_tearDownTransition:(BOOL)arg1;
- (BOOL)_toggleFullscreenIfPossible;
- (void)_updateAccessoryViewWithPreviewItemViewController:(id)arg1;
- (void)_updateCanChangeCurrentPage;
- (void)_updateFullscreen;
- (void)_updateFullscreenBackgroundColor;
- (void)_updateOverlay:(BOOL)arg1;
- (void)_updateOverlayVisibility;
- (void)_updatePreferredContentSize;
- (void)_updatePreviewVisibility:(BOOL)arg1;
- (void)_updatePrinter;
- (void)_updateTitleFromController;
- (void)_updateWhitePointAdaptivityStyle;
- (id)accessoryView;
- (void)completeTransition:(BOOL)arg1 withDuration:(double)arg2;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (long long)dragDataOwnerForPreviewItemViewController:(id)arg1;
- (void)expandContentOfPreviewItemViewController:(id)arg1 unarchivedItemsURL:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureTracker;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(BOOL)arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)init;
- (void)invalidateService;
- (BOOL)isRemote;
- (BOOL)itemPresenterViewControllerShouldForceAutodownloadFile:(id)arg1;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadView;
- (id)loadingTextForPreviewItemViewController:(id)arg1;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1;
- (void)pageViewController:(id)arg1 didCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6;
- (void)pageViewController:(id)arg1 didTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6;
- (void)pageViewController:(id)arg1 isTransitioningFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 withProgress:(double)arg6;
- (id)pageViewController:(id)arg1 parallaxViewInPage:(id)arg2 withIndex:(unsigned long long)arg3;
- (id)pageViewController:(id)arg1 viewControllerAtIndex:(unsigned long long)arg2;
- (void)pageViewController:(id)arg1 willBeginInteractiveTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5;
- (void)pageViewController:(id)arg1 willCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6;
- (void)pageViewController:(id)arg1 willTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6;
- (BOOL)pinchDismissGestureInProgress;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)previewItemViewController:(id)arg1 didEnableEditMode:(BOOL)arg2;
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewItemViewController:(id)arg1 hasUnsavedEdits:(BOOL)arg2;
- (void)previewItemViewController:(id)arg1 wantsFullScreen:(BOOL)arg2;
- (void)previewItemViewController:(id)arg1 wantsToForwardMessageToHost:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)previewItemViewController:(id)arg1 wantsToOpenURL:(id)arg2;
- (void)previewItemViewController:(id)arg1 wantsToShowShareSheetWithPopoverTracker:(id)arg2 customSharedURL:(id)arg3 dismissCompletion:(CDUnknownBlockType)arg4;
- (void)previewItemViewControllerDidChangeCurrentPreviewController:(id)arg1;
- (void)previewItemViewControllerDidEditCopyOfPreviewItem:(id)arg1 editedCopy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewItemViewControllerDidUpdateTitle:(id)arg1;
- (void)previewItemViewControllerWantsToDismissQuickLook:(id)arg1;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg1;
- (void)previewItemViewControllerWantsToShowShareSheet:(id)arg1;
- (void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg1;
- (void)previewItemViewControllerWantsUpdateOverlay:(id)arg1 animated:(BOOL)arg2;
- (void)previewItemViewControllerWantsUpdatePrinter:(id)arg1;
- (void)rotationOrPinchGestureRecognized:(id)arg1;
- (void)saveCurrentPreviewEditsSynchronously:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setAppearance:(id)arg1 animated:(BOOL)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setIsContentManaged:(BOOL)arg1;
- (void)setLoadingString:(id)arg1;
- (void)setRemoteAccessoryContainer:(id)arg1;
- (void)slideToDismissGestureRecognized:(id)arg1;
- (void)startNonInteractiveTransitionPresenting:(BOOL)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(BOOL)arg3 useInteractiveTransition:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)tearDownTransition:(BOOL)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)transitionInProgress;
- (void)triggerInteractiveTransitionAnimationIfNeeded;
- (void)updateCurrentPreviewConfiguration;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end


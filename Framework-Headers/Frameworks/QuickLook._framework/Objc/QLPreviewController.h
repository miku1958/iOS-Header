//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QuickLook/QLPreviewControllerStateProtocolHostOnly-Protocol.h>
#import <QuickLook/QLPreviewItemProvider-Protocol.h>
#import <QuickLook/QLPreviewItemStoreDelegate-Protocol.h>
#import <QuickLook/UIDocumentInteractionControllerDelegate-Protocol.h>
#import <QuickLook/UIGestureRecognizerDelegate-Protocol.h>
#import <QuickLook/UINavigationControllerDelegate-Protocol.h>
#import <QuickLook/UIPageViewControllerDelegate-Protocol.h>
#import <QuickLook/UIScrollViewDelegate-Protocol.h>
#import <QuickLook/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSURL, QLActivityItemProvider, QLBarButtonItem, QLErrorView, QLItem, QLNavigationState, QLPinchRotationTracker, QLPreviewItemStore, QLStateManager, QLSwipeDownTracker, QLToolbarController, QLTransitionController, UIAlertController, UIColor, UIDocumentInteractionController, UINavigationController, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer;
@protocol QLPreviewCollectionProtocol, QLPreviewControllerDataSource, QLPreviewControllerDelegate, QLPreviewItem, QLPrintingProtocol;

@interface QLPreviewController : UIViewController <UIDocumentInteractionControllerDelegate, UIGestureRecognizerDelegate, QLPreviewItemStoreDelegate, QLPreviewItemProvider, QLPreviewControllerStateProtocolHostOnly, UIPageViewControllerDelegate, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIScrollViewDelegate>
{
    QLBarButtonItem *_doneButton;
    QLBarButtonItem *_actionButton;
    QLBarButtonItem *_listButton;
    BOOL _previewCollectionNeedsConfiguration;
    BOOL _previewCollectionIsLoading;
    BOOL _changingCurrentPreview;
    NSMutableDictionary *_previewKeyCommands;
    NSMutableArray *_previewCollectionReadyCompletionBlocks;
    NSString *_loadingTextForMissingFiles;
    long long _whitePointAdaptivityStyle;
    long long _enqueuedWhitePointAdaptivityStyle;
    QLErrorView *_noDataView;
    BOOL _deferReloadData;
    long long _deferredSetIndex;
    NSDate *_lastCrashTimeStamp;
    unsigned long long _numberOfRetries;
    BOOL _viewWillAppearPerformed;
    UIColor *_backgroundColor;
    UIColor *_fullscreenBackgroundColor;
    UIColor *_navigationBarTintColor;
    UIColor *_toolbarTintColor;
    BOOL _didNotifyFirstAppearance;
    BOOL _canChangeCurrentPage;
    BOOL _overlayHidden;
    BOOL _fullScreen;
    BOOL _previousStatusBarHidden;
    BOOL _willTransitionToInternalView;
    BOOL _didTransitionFromInternalView;
    BOOL _allowInteractiveTransitions;
    BOOL _canShowToolbar;
    BOOL _currentPreviewHasUnsavedEdits;
    BOOL _sourceIsManaged;
    BOOL _useCustomActionButton;
    BOOL _showActionAsDefaultButton;
    long long _currentPreviewItemIndex;
    id<QLPreviewControllerDataSource> _dataSource;
    id<QLPrintingProtocol> _printer;
    id<QLPreviewControllerDelegate> _delegate;
    unsigned long long _presentationMode;
    unsigned long long _quickLookVisibility;
    UIViewController<QLPreviewCollectionProtocol> *_previewCollection;
    NSArray *_previewToolbarButtons;
    NSArray *_excludedToolbarButtonIdentifiers;
    UIAlertController *_doneButtonAlertController;
    QLNavigationState *_previousNavigationVCState;
    UINavigationController *_internalNavigationController;
    QLToolbarController *_toolbarController;
    QLPreviewItemStore *_previewItemStore;
    QLActivityItemProvider *_currentItemProvider;
    UIDocumentInteractionController *_sharingInteractionController;
    NSURL *_accessedUrlForDocumentInteractionController;
    NSArray *_originalLeftBarButtonItems;
    NSArray *_originalRightBarButtonItems;
    NSString *_currentTitleFromItemViewController;
    id<QLPreviewControllerDelegate> _strongDelegate;
    UIPanGestureRecognizer *_slideGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    QLSwipeDownTracker *_swipeDownTracker;
    QLPinchRotationTracker *_pinchRotationTracker;
    QLStateManager *_stateManager;
    QLTransitionController *_currentAnimator;
    unsigned long long _appearanceActions;
    NSArray *_additionalLeftBarButtonItems;
    NSArray *_additionalRightBarButtonItems;
}

@property (strong, nonatomic) NSURL *accessedUrlForDocumentInteractionController; // @synthesize accessedUrlForDocumentInteractionController=_accessedUrlForDocumentInteractionController;
@property (strong) NSArray *additionalLeftBarButtonItems; // @synthesize additionalLeftBarButtonItems=_additionalLeftBarButtonItems;
@property (strong) NSArray *additionalRightBarButtonItems; // @synthesize additionalRightBarButtonItems=_additionalRightBarButtonItems;
@property (nonatomic) BOOL allowInteractiveTransitions; // @synthesize allowInteractiveTransitions=_allowInteractiveTransitions;
@property (nonatomic) unsigned long long appearanceActions; // @synthesize appearanceActions=_appearanceActions;
@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) BOOL canChangeCurrentPage; // @synthesize canChangeCurrentPage=_canChangeCurrentPage;
@property BOOL canShowToolbar; // @synthesize canShowToolbar=_canShowToolbar;
@property (strong) QLTransitionController *currentAnimator; // @synthesize currentAnimator=_currentAnimator;
@property (strong) QLActivityItemProvider *currentItemProvider; // @synthesize currentItemProvider=_currentItemProvider;
@property (nonatomic) BOOL currentPreviewHasUnsavedEdits; // @synthesize currentPreviewHasUnsavedEdits=_currentPreviewHasUnsavedEdits;
@property (readonly) id<QLPreviewItem> currentPreviewItem;
@property long long currentPreviewItemIndex; // @synthesize currentPreviewItemIndex=_currentPreviewItemIndex;
@property (strong) NSString *currentTitleFromItemViewController; // @synthesize currentTitleFromItemViewController=_currentTitleFromItemViewController;
@property (weak, nonatomic) id<QLPreviewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<QLPreviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didTransitionFromInternalView; // @synthesize didTransitionFromInternalView=_didTransitionFromInternalView;
@property (weak, nonatomic) UIAlertController *doneButtonAlertController; // @synthesize doneButtonAlertController=_doneButtonAlertController;
@property (readonly) NSArray *excludedToolbarButtonIdentifiers; // @synthesize excludedToolbarButtonIdentifiers=_excludedToolbarButtonIdentifiers;
@property (nonatomic) BOOL fullScreen; // @synthesize fullScreen=_fullScreen;
@property (strong, nonatomic) UIColor *fullscreenBackgroundColor; // @synthesize fullscreenBackgroundColor=_fullscreenBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) QLItem *internalCurrentPreviewItem;
@property (strong, nonatomic) UINavigationController *internalNavigationController; // @synthesize internalNavigationController=_internalNavigationController;
@property (strong, nonatomic) UIColor *navigationBarTintColor; // @synthesize navigationBarTintColor=_navigationBarTintColor;
@property (readonly) long long numberOfPreviewItems;
@property (strong) NSArray *originalLeftBarButtonItems; // @synthesize originalLeftBarButtonItems=_originalLeftBarButtonItems;
@property (strong) NSArray *originalRightBarButtonItems; // @synthesize originalRightBarButtonItems=_originalRightBarButtonItems;
@property (nonatomic) BOOL overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property (strong) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property (strong) QLPinchRotationTracker *pinchRotationTracker; // @synthesize pinchRotationTracker=_pinchRotationTracker;
@property (readonly, nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property (readonly) UIViewController<QLPreviewCollectionProtocol> *previewCollection; // @synthesize previewCollection=_previewCollection;
@property (readonly) QLPreviewItemStore *previewItemStore; // @synthesize previewItemStore=_previewItemStore;
@property (readonly) NSArray *previewToolbarButtons; // @synthesize previewToolbarButtons=_previewToolbarButtons;
@property (readonly) QLNavigationState *previousNavigationVCState; // @synthesize previousNavigationVCState=_previousNavigationVCState;
@property (nonatomic) BOOL previousStatusBarHidden; // @synthesize previousStatusBarHidden=_previousStatusBarHidden;
@property (readonly) id<QLPrintingProtocol> printer; // @synthesize printer=_printer;
@property (nonatomic) unsigned long long quickLookVisibility; // @synthesize quickLookVisibility=_quickLookVisibility;
@property (strong) UIRotationGestureRecognizer *rotationGesture; // @synthesize rotationGesture=_rotationGesture;
@property (strong) UIDocumentInteractionController *sharingInteractionController; // @synthesize sharingInteractionController=_sharingInteractionController;
@property (nonatomic) BOOL showActionAsDefaultButton; // @synthesize showActionAsDefaultButton=_showActionAsDefaultButton;
@property (strong) UIPanGestureRecognizer *slideGesture; // @synthesize slideGesture=_slideGesture;
@property (nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property (strong) QLStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property (strong, nonatomic) id<QLPreviewControllerDelegate> strongDelegate; // @synthesize strongDelegate=_strongDelegate;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong) QLSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
@property (readonly, nonatomic) QLToolbarController *toolbarController; // @synthesize toolbarController=_toolbarController;
@property (strong, nonatomic) UIColor *toolbarTintColor; // @synthesize toolbarTintColor=_toolbarTintColor;
@property (nonatomic) BOOL useCustomActionButton; // @synthesize useCustomActionButton=_useCustomActionButton;
@property (nonatomic) BOOL willTransitionToInternalView; // @synthesize willTransitionToInternalView=_willTransitionToInternalView;

+ (BOOL)canPreviewDocumentType:(id)arg1;
+ (BOOL)canPreviewItem:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;
+ (id)contentTypeForPreviewItem:(id)arg1;
+ (id)controllerWithItemStore:(id)arg1;
+ (BOOL)copyPreviewItemToPasteboard:(id)arg1;
+ (void)logDeprecatedMessageForMethodName:(id)arg1;
+ (void)logDeprecatedMessageForSelector:(SEL)arg1;
+ (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
+ (id)printPageRendererForItem:(id)arg1;
+ (id)titleForPreviewItem:(id)arg1;
- (void).cxx_destruct;
- (id)_actionButton;
- (void)_actionButtonTapped:(id)arg1;
- (id)_additionalLeftButtonItems;
- (id)_additionalRightButtonItems;
- (id)_buttonWithAccessibilityIdentifierPointer:(id)arg1 inButtons:(id)arg2;
- (BOOL)_canPerformBarButtonAction;
- (id)_childViewControllerForWhitePointAdaptivityStyle;
- (void)_commontInit;
- (void)_configurePreviewCollectionIfNeeded;
- (id)_copyBarButtons:(id)arg1;
- (id)_doneButton;
- (void)_doneButtonTapped:(id)arg1;
- (id)_editedItemsForDoneActionControllerWithItems:(id)arg1;
- (BOOL)_isQuickLookVisible;
- (BOOL)_isToolbarVisibleForTraitCollection:(id)arg1;
- (void)_keyCommandWasPerformed:(id)arg1;
- (id)_listButton;
- (void)_listButtonTapped:(id)arg1;
- (id)_listDescriptionStringWithTitle:(id)arg1;
- (id)_navigationBarLeftButtonsWithTraitCollection:(id)arg1;
- (id)_navigationBarRightButtonsWithTraitCollection:(id)arg1;
- (BOOL)_needsListButton;
- (void)_nextPreview;
- (void)_notifyFirstAppearanceIfNeeded;
- (id)_preferredBackgroundColor;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)_prepareDelayedAppearance;
- (void)_presentPreviewCollection;
- (void)_previousPreview;
- (BOOL)_quickLookWillBecomeVisible;
- (void)_refreshCurrentPreviewItemAnimated:(BOOL)arg1;
- (void)_registerForApplicationStateChangesNotifications;
- (void)_reloadDataIfNeeded;
- (void)_savePreviousNavigationVCState;
- (void)_setCurrentPreviewItemIndex:(long long)arg1 updatePreview:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setFullScreen:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (void)_setPreferredWhitePointAdaptivityStyle:(long long)arg1;
- (void)_setPresentationMode:(unsigned long long)arg1;
- (BOOL)_shouldAllowInteractiveTransitions;
- (void)_showPreviewCollection;
- (void)_stopAccessingUrlForDocumentInteractionController;
- (id)_toolBarButtonsWithTraitCollection:(id)arg1;
- (void)_toolbarButtonPressed:(id)arg1;
- (id)_topViewController;
- (void)_unregisterForApplicationStateChangesNotifications;
- (void)_updateAllowInteractiveTransitionsIfNeeded;
- (void)_updateAppearance:(BOOL)arg1;
- (void)_updateBackgroundColor;
- (void)_updateBarTintColors;
- (void)_updateCurrentPopoverButtonIfNeeded:(id)arg1 newNavigationLeftButtons:(id)arg2;
- (void)_updateOverlayButtonsForTraitCollection:(id)arg1 animated:(BOOL)arg2;
- (void)_updateToolbarSuperview;
- (void)_updateViewHierarchyPresentation;
- (BOOL)accessibilityPerformEscape;
- (id)activityItemForDocumentInteractionController:(id)arg1;
- (id)additionalActivitiesForDocumentInteractionController:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animatorForShowing:(BOOL)arg1 previewController:(id)arg2 presentingController:(id)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)beginInteractiveTransition;
- (id)currentItem;
- (unsigned long long)currentOrbMode;
- (void)currentPreviewItemViewControllerHasUnsavedEdits:(BOOL)arg1;
- (id)currentTracker;
- (void)dealloc;
- (void)didSelectPreviewItem:(id)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (id)editedItems;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (void)expandContentOfURL:(id)arg1;
- (id)flexibleSpace;
- (BOOL)hasItemsToPreview;
- (void)hideNoDataView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPreviewItems:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (BOOL)itemStore:(id)arg1 canEditItem:(id)arg2;
- (BOOL)itemStore:(id)arg1 canShareItem:(id)arg2;
- (unsigned long long)itemStore:(id)arg1 editedFileBehaviorForItem:(id)arg2;
- (id)keyCommands;
- (void)loadView;
- (int)mode;
- (void)openURLIfAllowed:(id)arg1;
- (BOOL)parentIsNavigationController;
- (struct CGSize)preferredContentSize;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)prefersStatusBarHidden;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentAlertControllerForScenario:(long long)arg1;
- (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
- (void)previewCollectionPrefersWhitePointAdaptivityStyle:(long long)arg1;
- (void)previewCollectionUpdatePreviewItem:(long long)arg1;
- (id)previewItemAtIndex:(long long)arg1;
- (void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)printInfoForDocumentInteractionController:(id)arg1;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)remoteViewControllerWasInvalidated;
- (void)setAccessoryViewVisible:(BOOL)arg1;
- (void)setCurrentOrbMode:(unsigned long long)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setOverlayHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPrinter:(id)arg1;
- (void)setQuickLookVisibility:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setToolbarCanBeVisible:(BOOL)arg1;
- (void)showNoDataViewIfNeeded;
- (void)showShareSheet;
- (void)showShareSheetFromBarButton:(id)arg1;
- (void)updateKeyCommands;
- (void)updateNavigationTitle;
- (void)updateOverlayAnimated:(BOOL)arg1 animatedButtons:(BOOL)arg2 forceRefresh:(BOOL)arg3 withTraitCollection:(id)arg4;
- (void)updateOverlayAnimated:(BOOL)arg1 forceRefresh:(BOOL)arg2;
- (void)updateOverlayAnimated:(BOOL)arg1 forceRefresh:(BOOL)arg2 withTraitCollection:(id)arg3;
- (void)updateOverlayButtons:(BOOL)arg1;
- (void)updatePreferredContentSize:(struct CGSize)arg1;
- (void)updatePreviewItemAtIndex:(unsigned long long)arg1 updatedContentsURL:(id)arg2 sandboxExtension:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateStatusBarAnimated:(BOOL)arg1;
- (void)updateTitle:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)waitForPreviewCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end


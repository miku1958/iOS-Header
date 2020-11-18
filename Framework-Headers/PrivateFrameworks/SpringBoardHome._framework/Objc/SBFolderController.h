//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBNestingViewController.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBFolderControllerBackgroundViewDelegate-Protocol.h>
#import <SpringBoardHome/SBFolderControllerDelegate-Protocol.h>
#import <SpringBoardHome/SBFolderObserver-Protocol.h>
#import <SpringBoardHome/SBFolderViewDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListLayoutObserver-Protocol.h>
#import <SpringBoardHome/SBIconListViewDragObserver-Protocol.h>
#import <SpringBoardHome/SBIconLocationPresenting-Protocol.h>
#import <SpringBoardHome/SBIconViewObserver-Protocol.h>
#import <SpringBoardHome/SBIconViewQuerying-Protocol.h>
#import <SpringBoardHome/SBScaleIconZoomAnimationContaining-Protocol.h>

@class NSArray, NSHashTable, NSIndexPath, NSMapTable, NSMutableSet, NSSet, NSString, NSTimer, SBFolder, SBFolderContainerView, SBFolderControllerAnimationContext, SBFolderControllerBackgroundView, SBFolderControllerConfiguration, SBFolderIconImageCache, SBFolderView, SBHIconImageCache, SBHIconModel, SBIconAnimator, SBIconListModel, SBIconListPageControl, SBIconListView, SBIconPageIndicatorImageSetCache, SBIconView, UIColor, UIStatusBar, UIView, UIWindow, _UILegibilitySettings;
@protocol BSInvalidatable, SBFolderControllerDelegate, SBIconListLayoutProvider, SBIconViewProviding;

@interface SBFolderController : SBNestingViewController <SBFolderControllerDelegate, SBIconListViewDragObserver, SBFolderControllerBackgroundViewDelegate, SBFolderViewDelegate, SBFolderObserver, SBIconListLayoutObserver, SBIconViewObserver, SBScaleIconZoomAnimationContaining, BSDescriptionProviding, SBIconLocationPresenting, SBIconViewQuerying>
{
    SBFolderContainerView *_containerView;
    SBFolderView *_contentView;
    SBFolderControllerBackgroundView *_backgroundView;
    NSTimer *_closeFolderTimer;
    BOOL _grabbedIconHasEverEnteredFolderView;
    SBIconAnimator *_iconAnimator;
    NSMutableSet *_draggingEnteredIconListViews;
    NSMutableSet *_fakeStatusBarHidingReasons;
    NSMutableSet *_realStatusBarHidingReasons;
    long long _leadingVisiblePageIndex;
    long long _trailingVisiblePageIndex;
    NSHashTable *_pageViewControllerAppearStateOverrideAssertions;
    NSHashTable *_iconImageViewControllerKeepStaticAssertions;
    id<BSInvalidatable> _iconImageViewControllerKeepStaticForAnimatedScrollAssertion;
    NSMutableSet *_iconViewsWithCustomImageViewControllers;
    NSMapTable *_iconViewCustomImageViewControllerTouchCancellationAssertions;
    NSMutableSet *_appearanceTransitioningCustomImageViewControllers;
    BOOL _isOpen;
    BOOL _isEditing;
    BOOL _isAnimating;
    BOOL _rotating;
    BOOL _occluded;
    BOOL _active;
    id<SBFolderControllerDelegate> _folderDelegate;
    SBFolder *_folder;
    id<SBIconListLayoutProvider> _listLayoutProvider;
    long long _orientation;
    unsigned long long _allowedOrientations;
    id<SBIconViewProviding> _iconViewProvider;
    id _context;
    SBIconView *_folderIconView;
    UIView *_headerView;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_originatingIconLocation;
    UIColor *_defaultAccessibilityTintColor;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
    SBIconPageIndicatorImageSetCache *_iconPageIndicatorImageSetCache;
    id<BSInvalidatable> _statusBarAssertion;
    UIStatusBar *_fakeStatusBar;
    SBFolderControllerConfiguration *_configuration;
    SBFolderControllerAnimationContext *_animationContext;
    SBIconListPageControl *_pageControl;
}

@property (readonly, copy, nonatomic) NSArray *_viewControllersToNotifyForViewObscuration;
@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, nonatomic) unsigned long long allowedOrientations; // @synthesize allowedOrientations=_allowedOrientations;
@property (nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_isAnimating;
@property (strong, nonatomic) SBFolderControllerAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property (readonly, nonatomic) UIWindow *animationWindow;
@property (readonly, nonatomic) BOOL canAcceptFolderIconDrags;
@property (readonly, nonatomic) BOOL closesAfterDragExits;
@property (copy, nonatomic) SBFolderControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) id context; // @synthesize context=_context;
@property (readonly, nonatomic) SBIconListModel *currentIconListModel;
@property (readonly, nonatomic) SBIconListView *currentIconListView;
@property (readonly, nonatomic) NSIndexPath *currentIndexPath;
@property (readonly, nonatomic) long long currentPageIndex;
@property (readonly, nonatomic) double currentScrollingOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBFolderController *deepestFolderController;
@property (strong, nonatomic) UIColor *defaultAccessibilityTintColor; // @synthesize defaultAccessibilityTintColor=_defaultAccessibilityTintColor;
@property (readonly, nonatomic) long long defaultPageIndex;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disablesScrollingWhileIconDragIsDropping;
@property (readonly, nonatomic) SBIconListView *dockIconListView;
@property (readonly, nonatomic) SBIconListView *dockListView;
@property (readonly, nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_isEditing;
@property (readonly, copy, nonatomic) NSArray *extraViews;
@property (readonly, copy, nonatomic) NSArray *extraViewsContainers;
@property (strong, nonatomic) UIStatusBar *fakeStatusBar; // @synthesize fakeStatusBar=_fakeStatusBar;
@property (readonly, nonatomic) UIView *fallbackIconContainerView;
@property (readonly, nonatomic) long long firstIconPageIndex;
@property (strong, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property (readonly, nonatomic) SBFolderContainerView *folderContainerView;
@property (weak, nonatomic) id<SBFolderControllerDelegate> folderDelegate; // @synthesize folderDelegate=_folderDelegate;
@property (readonly, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property (strong, nonatomic) SBIconView *folderIconView; // @synthesize folderIconView=_folderIconView;
@property (readonly, nonatomic) SBFolderView *folderView;
@property (readonly, nonatomic) SBFolderView *folderViewIfLoaded;
@property (readonly, nonatomic) BOOL hasDock;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property (readonly, nonatomic) unsigned long long iconListViewCount;
@property (readonly, copy, nonatomic) NSArray *iconListViews;
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (readonly, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache; // @synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache;
@property (readonly, weak, nonatomic) id<SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property (readonly, nonatomic) SBFolderController *innerFolderController;
@property (readonly, nonatomic) long long lastIconPageIndex;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (readonly, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property (readonly, nonatomic) long long maximumPageIndex;
@property (readonly, nonatomic) long long minimumPageIndex;
@property (nonatomic, getter=isOccluded) BOOL occluded; // @synthesize occluded=_occluded;
@property (nonatomic, getter=isOpen) BOOL open; // @synthesize open=_isOpen;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (copy, nonatomic) NSString *originatingIconLocation; // @synthesize originatingIconLocation=_originatingIconLocation;
@property (readonly, weak, nonatomic) SBFolderController *outerFolderController;
@property (readonly, nonatomic, getter=isOverridingPageViewControllerAppearanceStateToRemainDisappeared) BOOL overridingPageViewControllerAppearanceStateToRemainDisappeared;
@property (strong, nonatomic) SBIconListPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property (nonatomic) double pageControlAlpha;
@property (nonatomic, getter=isPageControlHidden) BOOL pageControlHidden;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (nonatomic, getter=isRotating) BOOL rotating; // @synthesize rotating=_rotating;
@property (readonly, nonatomic, getter=isScrollDecelerating) BOOL scrollDecelerating;
@property (readonly, nonatomic, getter=isScrollDragging) BOOL scrollDragging;
@property (readonly, nonatomic, getter=isScrollTracking) BOOL scrollTracking;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;
@property (readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property (strong, nonatomic) id<BSInvalidatable> statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suspendsWallpaperAnimationWhileOpen;
@property (readonly, nonatomic) long long userInterfaceLayoutDirection;
@property (readonly, nonatomic) unsigned long long userInterfaceLayoutDirectionHandling;

+ (Class)_contentViewClass;
+ (Class)configurationClass;
+ (id)iconLocation;
+ (Class)listViewClass;
- (void).cxx_destruct;
- (void)_addFakeStatusBarView;
- (BOOL)_allowUserInteraction;
- (BOOL)_canAcceptIconDropSession:(id)arg1 inListView:(id)arg2;
- (BOOL)_canAnyIconViewBeVisiblySettled;
- (void)_cancelAllInteractionTimers;
- (void)_cancelCloseFolderTimer;
- (void)_cancelTouchesForAllCustomIconImageViewControllers;
- (void)_cancelTouchesForCustomIconImageViewController:(id)arg1;
- (void)_clearIconAnimator;
- (void)_closeFolderTimerFired;
- (void)_compactFolder;
- (void)_configureForInnerFolderController:(id)arg1;
- (unsigned long long)_depth;
- (void)_disableTouchesOnAllCustomIconImageViewControllers;
- (void)_enableTouchesOnAllCustomIconImageViewControllers;
- (void)_fadeHomescreenAndDockIfNecessaryForFolderOpen:(BOOL)arg1;
- (void)_handleEndEditingKeyCommand:(id)arg1;
- (void)_hideFakeStatusBarForReason:(id)arg1 animated:(BOOL)arg2;
- (void)_hideStatusBarForReason:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_homescreenAndDockShouldFade;
- (BOOL)_iconAppearsOnCurrentPage:(id)arg1;
- (void)_invalidate;
- (void)_invalidateAllCancelTouchesAssertions;
- (BOOL)_isHitTestingDisabledOnCustomIconImageViewControllers;
- (BOOL)_isValidPageIndex:(long long)arg1;
- (BOOL)_listIndexIsVisible:(unsigned long long)arg1;
- (id)_makeContentViewWithConfiguration:(id)arg1;
- (id)_newAnimatorForZoomUp:(BOOL)arg1;
- (void)_removeFakeStatusBar;
- (void)_removeFakeStatusBarAndAssertionIfExists;
- (void)_removeIconImageViewControllerKeepStaticAssertion:(id)arg1;
- (void)_removePageViewControllerAppearStateOverrideAssertion:(id)arg1;
- (void)_resetFakeStatusBarFrameOnly;
- (void)_resetFakeStatusBarMatchMoveAnimation;
- (void)_resetFakeStatusBarSettingsIfNecessary;
- (void)_resetIconLists;
- (void)_setCloseFolderTimerIfNecessary;
- (void)_setHomescreenAndDockAlpha:(double)arg1;
- (void)_unhideFakeStatusBarForReason:(id)arg1 animated:(BOOL)arg2;
- (void)_unhideStatusBarForReason:(id)arg1;
- (void)_updateAssociatedControllerStateAnimated:(BOOL)arg1;
- (void)_updateFolderRequiredTrailingEmptyListCount;
- (void)_updateHomescreenAndDockFade;
- (void)_updatePresentationModeForIconView:(id)arg1;
- (void)_updatePresentationModeForIconViews;
- (void)_updateStateOfAssociatedController:(id)arg1 animated:(BOOL)arg2;
- (void)_updateVisiblySettledForIconView:(id)arg1;
- (void)_updateVisiblySettledForIconView:(id)arg1 visiblySettled:(BOOL)arg2;
- (void)_updateVisiblySettledForIconViews;
- (id)accessibilityTintColorForScreenRect:(struct CGRect)arg1;
- (void)addViewToHierarchyForNestedViewController:(id)arg1;
- (void)animateScrollToDefaultPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginEditingTitle;
- (id)beginModifyingDockOffscreenFractionForReason:(id)arg1;
- (id)beginOverridingPageViewControllerAppearanceStateToRemainDisappearedForReason:(id)arg1;
- (id)borrowScalingView;
- (void)cancelScrolling;
- (void)configureInnerFolderControllerConfiguration:(id)arg1;
- (struct UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1;
- (struct UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderView:(id)arg1;
- (Class)controllerClassForFolder:(id)arg1;
- (void)dealloc;
- (void)delegateDidChange;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)doesPageContainIconListView:(long long)arg1;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (id)fakeStatusBarForFolderController:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(struct CGRect)arg2;
- (BOOL)folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (id)folderController:(id)arg1 iconAnimatorForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 initialDelay:(double *)arg5;
- (BOOL)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (id)folderController:(id)arg1 iconListView:(id)arg2 customSpringAnimationBehaviorForDroppingItem:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (BOOL)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 willUseIconView:(id)arg3 forDroppingIconDragItem:(id)arg4;
- (void)folderController:(id)arg1 willCreateInnerFolderControllerWithConfiguration:(id)arg2;
- (void)folderController:(id)arg1 willRemoveFakeStatusBar:(id)arg2;
- (void)folderController:(id)arg1 willUseIconTransitionAnimator:(id)arg2 forOperation:(long long)arg3 onViewController:(id)arg4 animated:(BOOL)arg5;
- (void)folderControllerDidClose:(id)arg1;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerDidOpen:(id)arg1;
- (id)folderControllerForFolder:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1 withHaptic:(BOOL)arg2;
- (BOOL)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderControllerShouldEndEditing:(id)arg1;
- (id)folderControllerWantsToHideStatusBar:(id)arg1 animated:(BOOL)arg2;
- (void)folderControllerWillBeginScrolling:(id)arg1;
- (void)folderControllerWillClose:(id)arg1;
- (void)folderControllerWillOpen:(id)arg1;
- (id)folderView:(id)arg1 accessibilityTintColorForRect:(struct CGRect)arg2;
- (BOOL)folderView:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (void)folderView:(id)arg1 currentPageIndexWillChange:(long long)arg2;
- (void)folderView:(id)arg1 didAddIconListView:(id)arg2;
- (void)folderView:(id)arg1 didRemoveIconListView:(id)arg2;
- (BOOL)folderView:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (id)folderView:(id)arg1 iconListView:(id)arg2 customSpringAnimationBehaviorForDroppingItem:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (id)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (id)folderView:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (BOOL)folderView:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 willUseIconView:(id)arg3 forDroppingIconDragItem:(id)arg4;
- (void)folderView:(id)arg1 willAnimateScrollToPageIndex:(long long)arg2;
- (void)folderViewDidChangeOrientation:(id)arg1;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewDidScroll:(id)arg1;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderViewShouldEndEditing:(id)arg1;
- (void)folderViewWillBeginDragging:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderViewWillEndDragging:(id)arg1;
- (void)folderViewWillUpdatePageDuringScrolling:(id)arg1;
- (unsigned long long)iconImageViewControllerPresentationModeForIconView:(id)arg1;
- (unsigned long long)iconListModelIndexForPageIndex:(long long)arg1;
- (void)iconListView:(id)arg1 concludeIconDrop:(id)arg2;
- (void)iconListView:(id)arg1 didAddIconView:(id)arg2;
- (void)iconListView:(id)arg1 didRemoveIconView:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidEnd:(id)arg2;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (Class)iconListViewClassForFolderView:(id)arg1;
- (void)iconListViewDidChangeBoundsSize:(id)arg1;
- (id)iconListViewForDrag:(id)arg1;
- (id)iconListViewForIconListModelIndex:(unsigned long long)arg1;
- (id)iconListViewForTouch:(id)arg1;
- (unsigned long long)iconListViewIndexForIconListModelIndex:(unsigned long long)arg1;
- (unsigned long long)iconListViewIndexForPageIndex:(long long)arg1;
- (id)iconLocation;
- (id)iconLocationForFolderView:(id)arg1;
- (void)iconView:(id)arg1 didChangeCustomImageViewController:(id)arg2;
- (void)iconViewDidDismissContextMenu:(id)arg1;
- (void)iconViewDidHandleTap:(id)arg1;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (void)iconViewWillPresentContextMenu:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidate;
- (BOOL)isDisplayingIcon:(id)arg1;
- (BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (BOOL)isDisplayingIconView:(id)arg1;
- (BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (BOOL)isEffectivelyOccluded;
- (BOOL)isEffectivelyOccludedIfHasInnerFolder:(BOOL)arg1;
- (BOOL)isPresentingIconLocation:(id)arg1;
- (id)keepIconImageViewControllersStaticInAllPagesExcluding:(id)arg1 forReason:(id)arg2;
- (id)keyCommands;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3;
- (void)loadView;
- (id)matchMoveSourceViewForIconView:(id)arg1;
- (void)minimumHomeScreenScaleDidChange;
- (double)minimumHomeScreenScaleForFolderController:(id)arg1;
- (double)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)arg1;
- (double)minimumHomeScreenScaleForFolderView:(id)arg1;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4;
- (id)nestingViewController:(id)arg1 sourceViewForPresentingViewController:(id)arg2;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)noteIconDrag:(id)arg1 didChangeInIconListView:(id)arg2;
- (void)noteIconDrag:(id)arg1 didEnterIconListView:(id)arg2;
- (void)noteIconDrag:(id)arg1 didExitIconListView:(id)arg2;
- (void)noteIconDragDidEnd:(id)arg1;
- (void)noteUserIsInteractingWithIcons;
- (void)orientationDidChange:(long long)arg1;
- (long long)pageIndexForIconListModelIndex:(unsigned long long)arg1;
- (long long)pageIndexForIconListViewIndex:(unsigned long long)arg1;
- (id)pageViewControllersForLeadingPageIndex:(long long)arg1 trailingPageIndex:(long long)arg2;
- (void)parentDelegateDidChange;
- (void)popFolderAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForAnimation:(id)arg1 withTargetIcon:(id)arg2;
- (void)prepareToClose;
- (void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareToOpen;
- (void)prepareToTearDown;
- (void)pushFolderIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeViewFromHierarchyForNestedViewController:(id)arg1;
- (BOOL)restoreExpandedPathIdentifiers:(id)arg1;
- (void)returnScalingView;
- (void)revealIcon:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setContentAlpha:(double)arg1;
- (void)setCurrentPageIndex:(long long)arg1;
- (BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(BOOL)arg2;
- (void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFolderIconImageCache:(id)arg1;
- (void)setScrollingDisabled:(BOOL)arg1 forReason:(id)arg2;
- (BOOL)shouldOpenFolderIcon:(id)arg1;
- (BOOL)shouldViewControllersAppearVisibleForListView:(id)arg1;
- (struct UIEdgeInsets)statusBarEdgeInsetsForFolderController:(id)arg1;
- (struct UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;
- (id)statusBarStyleRequestForFolderController:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unscatterAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateAppearanceStateForPageViewControllers:(BOOL)arg1;
- (void)updateContentViewOcclusion;
- (void)updateContentViewOcclusionWithOverriddenHasInnerFolder:(BOOL)arg1;
- (id)viewControllersForPageIndex:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)visiblePageViewControllers;

@end

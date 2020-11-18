//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <PassKitUI/PKDashboardPassViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassDeleteAnimationControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassDeleteHandler-Protocol.h>
#import <PassKitUI/PKPassFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupViewDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupViewReceiver-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSObject, NSString, NSTimer, PKBackdropView, PKDiscoveryDataSource, PKNavigationDashboardPassViewController, PKPGSVSectionHeaderContext, PKPGSVTransitionInterstitialView, PKPass, PKPassDeleteAnimationController, PKPassFooterView, PKPassGroupView, PKPassthroughView, PKPaymentService, PKReusablePassViewQueue, PKSecureElement, UIColor, UIImageView, UIView, _UIDynamicValueAnimation;
@protocol OS_dispatch_source, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate><UIScrollViewDelegate;

@interface PKPassGroupStackView : UIScrollView <PKPassGroupViewDelegate, PKPassDeleteAnimationControllerDelegate, PKPaymentServiceDelegate, PKPassFooterViewDelegate, PKDashboardPassViewControllerDelegate, PKPassDeleteHandler, PKPassGroupViewReceiver>
{
    PKPassGroupView *_modallyPresentedGroupView;
    NSMutableArray *_passPileViews;
    unsigned long long _modalGroupIndex;
    long long _scrollingTestState;
    int _currentTestReps;
    long long _presentationState;
    NSMutableDictionary *_groupViewsByGroupID;
    PKPGSVSectionHeaderContext *_paymentHeaderContext;
    PKPGSVSectionHeaderContext *_passHeaderContext;
    PKPGSVTransitionInterstitialView *_leadingInterstitialItemView;
    PKPGSVTransitionInterstitialView *_trailingInterstitialItemView;
    double _footerAnimationDelay;
    UIView *_footerView;
    double _footerViewMinimumHeight;
    UIImageView *_footerPocketBackgroundShadow;
    UIImageView *_footerPocketForegroundShadow;
    double _bottomContentSeparatorVisibility;
    NSObject<OS_dispatch_source> *_bottomContentSeparatorVisibilityTimer;
    struct {
        unsigned long long numberOfGroups;
        unsigned long long separatorIndex;
        double separationPadding;
        long long pilingMode;
        double groupCellHeight;
        unsigned long long externalToTableTransitionModalGroupIndex;
        unsigned int disableTableModalPresentation:1;
        unsigned int hasPaymentPasses:1;
        unsigned int hasPasses:1;
        unsigned int hasPaymentHeader:1;
        unsigned int hasPassHeader:1;
        unsigned int hasPaymentHeaderView:1;
        unsigned int hasPassHeaderView:1;
        unsigned int hasFooter:1;
        unsigned int isDeleting:1;
        unsigned int isCompactModalPresentation:1;
        unsigned int isContinuingModalPresentation:1;
        unsigned int forceSubheaderUpdate:1;
        unsigned int forceFooterUpdate:1;
        unsigned int preventFooterLayout:1;
        unsigned int mutatingForcePileOffscreen:1;
        unsigned int transitioningFromExternalToTable:1;
        unsigned int transitioningFromExternalToModal:1;
    } _layoutState;
    struct CGSize _lastBoundsSize;
    struct UIEdgeInsets _lastBoundsInsets;
    double _lastTopContentSeparatorHeight;
    PKPassDeleteAnimationController *_deleteAnimationController;
    CDUnknownBlockType _transitionCanceller;
    long long _nextState;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    unsigned int _externalPresentationTag;
    unsigned int _interstitialTag;
    BOOL _hasSuspendedTransition;
    long long _suspendedNextState;
    NSMutableArray *_suspendedTransitionCompletionHandlers;
    PKReusablePassViewQueue *_reusableCardViewQueue;
    PKPassGroupView *_reorderedGroupView;
    unsigned long long _initialIndexOfReorderedGroup;
    unsigned long long _previousIndexOfReorderedGroup;
    struct CGPoint _reorderedGroupViewPositionInFrame;
    struct CGPoint _panningVelocity;
    NSTimer *_autoscrollTimer;
    struct {
        unsigned int isReordering:1;
        unsigned int isReorderPeekCompensated:1;
        unsigned int hasScrolledUp:1;
        unsigned int hasScrolledDown:1;
    } _reorderingFlags;
    NSMutableArray *_reorderActions;
    unsigned long long _reorderActionTag;
    NSMutableDictionary *_groupViewsInFlightByGroupID;
    unsigned int _userInteractionCounter;
    NSMutableDictionary *_animatorsByGroupID;
    PKPaymentService *_paymentService;
    PKPassFooterView *_passFooterView;
    BOOL _showingFooter;
    BOOL _invalidated;
    PKPassthroughView *_headerContainerView;
    PKPassthroughView *_subheaderContainerView;
    PKPassthroughView *_passContainerView;
    PKSecureElement *_secureElement;
    BOOL _delegateWantsTopContentSeparation;
    BOOL _delegateWantsBottomContentSeparation;
    BOOL _wantsBacklightRamping;
    NSNumber *_featuredGroupID;
    PKNavigationDashboardPassViewController *_externalVC;
    PKPassGroupView *_loanedGroupView;
    long long _pressedGroupViewIndex;
    double _modalGroupViewVelocity;
    BOOL _modalGroupViewDragging;
    PKPass *_passToBeDeletedExternally;
    double _timeBackdropViewLastPresented;
    PKBackdropView *_backdropView;
    BOOL _isHidingBackdropView;
    BOOL _isPresentingBackdropView;
    _UIDynamicValueAnimation *_panningAnimation;
    BOOL _effectivePaused;
    BOOL _footerSuppressed;
    BOOL _externalFooterSuppressed;
    BOOL _staggerPileAnimations;
    BOOL _paused;
    id<PKPassGroupStackViewDatasource> _datasource;
    PKDiscoveryDataSource *_discoveryDatasource;
    long long _coachingState;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    double _topContentSeparatorHeight;
}

@property (readonly, nonatomic) long long coachingState; // @synthesize coachingState=_coachingState;
@property (copy, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property (nonatomic) id<PKPassGroupStackViewDatasource> datasource; // @synthesize datasource=_datasource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPassGroupStackViewDelegate><UIScrollViewDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PKDiscoveryDataSource *discoveryDatasource; // @synthesize discoveryDatasource=_discoveryDatasource;
@property (nonatomic) BOOL externalFooterSuppressed; // @synthesize externalFooterSuppressed=_externalFooterSuppressed;
@property (nonatomic) BOOL footerSuppressed; // @synthesize footerSuppressed=_footerSuppressed;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isModallyPresentedPassAuthorized;
@property (readonly, nonatomic) BOOL isPresentingPassViewFront;
@property (readonly, nonatomic) BOOL isReordering;
@property (readonly, nonatomic) PKPass *modalGroupFrontmostPass;
@property (nonatomic) unsigned long long modalGroupIndex; // @synthesize modalGroupIndex=_modalGroupIndex;
@property (copy, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (readonly, nonatomic) double pileHeight;
@property (nonatomic) long long pilingMode;
@property (nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property (nonatomic) BOOL staggerPileAnimations; // @synthesize staggerPileAnimations=_staggerPileAnimations;
@property (readonly) Class superclass;
@property (nonatomic) double topContentSeparatorHeight; // @synthesize topContentSeparatorHeight=_topContentSeparatorHeight;

+ (id)backdropEndBackgroundColor;
+ (id)backdropStartBackgroundColor;
+ (id)backgroundColor;
- (void).cxx_destruct;
- (BOOL)_acquireGroupView:(id)arg1;
- (void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_addPanGestureRecognizerToGroupView:(id)arg1;
- (void)_adjustGroupViewsForReordering;
- (void)_adjustPassFooterViewOpacityForYOffset:(double)arg1;
- (void)_animateGroupViewAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 withAnchorView:(id)arg3 insertAbove:(BOOL)arg4;
- (void)_animateGroupViewForUndo:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)_animatorForGestureRecognizer:(id)arg1;
- (void)_arrangeGroups;
- (void)_autoscrollForReordering:(id)arg1;
- (void)_autoscrollIfNecessary;
- (void)_beginGroupPanWithGestureRecognizer:(id)arg1;
- (BOOL)_canShowPassFooter;
- (void)_cancelSuspendedTransition;
- (void)_cancelTransition;
- (void)_cleanUpAnimatorForGroupView:(id)arg1;
- (struct CGSize)_contentSize;
- (void)_disableScrollingAndNormalizeContentOffset;
- (id)_dismissModalGroupViewFromExternalToState:(long long)arg1;
- (unsigned long long)_edgeStylesObscuredByTopCornersOfPassStyle:(long long)arg1;
- (unsigned long long)_edgeStylesObscuredByTopMiddleOfPassStyle:(long long)arg1;
- (void)_endGroupPanWithGestureRecognizer:(id)arg1;
- (void)_enumerateLoadedGroupViews:(CDUnknownBlockType)arg1;
- (void)_executeCompletionHandlers:(id)arg1 cancelled:(BOOL)arg2;
- (id)_factoryForExternalPresentation;
- (id)_firstHeaderContext;
- (long long)_footerStateForPassView:(id)arg1 withContext:(id)arg2;
- (struct CGRect)_frameForFooterViewForPassView:(id)arg1;
- (id)_frontmostPastViewForGroupIndex:(unsigned long long)arg1;
- (void)_generateModalGroupPileWithVisibleIndexes:(struct _NSRange)arg1 reservePlaceForModalGroup:(BOOL)arg2;
- (double)_groupCellHeight;
- (id)_groupViewAtIndex:(unsigned long long)arg1;
- (id)_groupViewAtIndexWhileEnsuringVisible:(unsigned long long)arg1 withContentMode:(long long)arg2;
- (id)_groupViewWithGroup:(id)arg1;
- (void)_handleModalGroupGesture:(id)arg1;
- (void)_handleScrollViewPanGesture:(id)arg1;
- (id)_headerContextForPassType:(unsigned long long)arg1;
- (void)_hideBackdropViewAnimated:(BOOL)arg1 delay:(double)arg2;
- (unsigned long long)_indexForNativePositionInTable:(struct CGPoint)arg1;
- (unsigned long long)_indexForNativePositionInTable:(struct CGPoint)arg1 roundToClosestIndex:(BOOL)arg2;
- (unsigned long long)_indexOfGroupView:(id)arg1;
- (unsigned long long)_indexOfReorderedGroupView;
- (BOOL)_isGroupAtIndexInModalPile:(unsigned long long)arg1;
- (BOOL)_isIngestingPass;
- (BOOL)_isModalPresentationAllowed;
- (BOOL)_isModalPresentationAllowedForSingleGroup;
- (double)_lastBarcodePassGroupCellHeight;
- (unsigned long long)_lastIndex;
- (double)_layoutContentFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2 animated:(BOOL)arg3;
- (void)_layoutFooterAnimated:(BOOL)arg1 withAnimationDelay:(double)arg2;
- (CDStruct_86e25f83)_layoutStateForHeaderContextInTable:(id)arg1 withBounds:(struct CGRect)arg2;
- (id)_loadGroupViewAtIndex:(unsigned long long)arg1 forState:(long long)arg2 presentationState:(long long)arg3 cached:(BOOL *)arg4;
- (void)_loadModalGroupViewAndPresentOffscreenIfNotCached:(BOOL)arg1;
- (double)_maxYOfPassFrontFaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)_maximumNumberOfVisiblePilePasses;
- (void)_moveBackdropViewToFront;
- (struct CGPoint)_nativePositionForPositionInTable:(struct CGPoint)arg1;
- (double)_nativeYForGroupInTableAtIndex:(unsigned long long)arg1;
- (void)_notifyDelegateOfStateChange:(BOOL)arg1;
- (double)_opacityForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2;
- (double)_passFooterAlphaWhenVisible;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1;
- (double)_pileAscenderHeight;
- (double)_pileAscenderHeightForGroupViewInPile:(id)arg1;
- (double)_pileBaseHeight;
- (double)_pileSeparationHeight;
- (struct CGPoint)_positionForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (void)_presentBackdropViewAnimated:(BOOL)arg1 delay:(double)arg2;
- (void)_presentGroupStackViewWithAnimation:(BOOL)arg1 priorBounds:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentModalGroupView:(id)arg1 withState:(long long)arg2 animated:(BOOL)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_presentModalGroupViewPostAnimationActions;
- (void)_presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_presentPassIngestionWithAnimation:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_rampBacklightIfNecessary:(BOOL)arg1;
- (struct _NSRange)_rangeOfEagerLoadedIndexes;
- (struct _NSRange)_rangeOfVisibleIndexes;
- (struct _NSRange)_rangeOfVisibleIndexesIgnoringBottomInset:(BOOL)arg1;
- (BOOL)_recomputeLayoutState;
- (void)_refreshBacklightForFrontmostPassGroup;
- (void)_removeGroupViewAsSubviewWithGroupID:(id)arg1;
- (void)_reorderPositionChangedForReorderedGroupViewWithVelocity:(struct CGPoint)arg1;
- (void)_resetBackdropViewToStart:(BOOL)arg1;
- (void)_resetBrightness;
- (void)_resumeSuspendedTransition;
- (void)_reverseEnumerateLoadedGroupViews:(CDUnknownBlockType)arg1;
- (double)_scaleForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (double)_scaleForModalPileGroupInExternalPresentation;
- (double)_scaleForStackGroupInExternalPresentation;
- (id)_separatorGroup;
- (void)_setDefaultPaymentPassFromGroupView:(id)arg1 reorderedGroupView:(id)arg2;
- (void)_setModalGroupView:(id)arg1;
- (void)_setScrollEnabled:(BOOL)arg1;
- (double)_setupSpringFactory:(id)arg1 forPileAnimationFromPresentationState:(long long)arg2 toPresentationState:(long long)arg3 reverse:(BOOL)arg4;
- (double)_setupSpringFactory:(id)arg1 forPileAnimationToPresentationState:(long long)arg2 reverse:(BOOL)arg3;
- (double)_setupSpringFactoryForExternalToTableAnimations:(id)arg1;
- (double)_setupSpringFactoryForPileAnimations:(id)arg1 withMaximumAcceleration:(double)arg2 reverse:(BOOL)arg3;
- (void)_setupSpringFactoryForTableToExternalAnimations:(id)arg1;
- (BOOL)_shouldSwitchToTableStateFromExternalDismissal;
- (BOOL)_shouldTablePresentationScroll;
- (void)_showPassFooterView:(BOOL)arg1 forPassView:(id)arg2 animated:(BOOL)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_showPassFooterView:(BOOL)arg1 forPassView:(id)arg2 context:(id)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_sortedGroupViewIndexes;
- (id)_stackedIndices;
- (unsigned long long)_startVisibleIndex;
- (void)_stopAutoscrollTimer;
- (void)_suspendTransition;
- (unsigned long long)_tablePresentationNumberOfCellsBeforeHeaderHidden;
- (unsigned long long)_tablePresentationNumberOfCellsBeforeStacking;
- (void)_tileGroupsForState:(long long)arg1 eager:(BOOL)arg2;
- (struct CATransform3D)_transformForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (double)_transformedYForNativeYInTable:(double)arg1 withBounds:(struct CGRect)arg2 index:(unsigned long long)arg3;
- (void)_transitionSuccessful:(BOOL)arg1;
- (void)_undoUserReorderWithReorderedGroupView:(id)arg1;
- (void)_unpressGroupView;
- (void)_updateBackdropViewFilters;
- (void)_updateBottomContentSeparatorVisibilityAnimated:(BOOL)arg1;
- (void)_updateCoachingState;
- (void)_updateContentSize;
- (void)_updateContentSizeAndLayout:(BOOL)arg1;
- (void)_updateContentSizeAndLayout:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)_updateGroupStateForGroupViewInModalPresentation:(id)arg1 withState:(long long)arg2 animated:(BOOL)arg3;
- (void)_updateGroupStateForGroupViewInStackPresentation:(id)arg1 animated:(BOOL)arg2;
- (void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)_updateHeaderContext:(id *)arg1 toContext:(id)arg2 animated:(BOOL)arg3;
- (void)_updateHeaderFooterState:(BOOL)arg1 layout:(BOOL)arg2;
- (void)_updateModalGroupViewFromTableToExternalPresentationWithFactory:(id)arg1;
- (void)_updatePassFooterViewAnimated:(BOOL)arg1;
- (void)_updatePassFooterViewIfNecessaryAnimated:(BOOL)arg1 withBecomeVisibleDelay:(double)arg2;
- (void)_updatePassFooterViewIfNecessaryWithContext:(id)arg1 becomeVisibleDelay:(double)arg2;
- (void)_updatePassFooterViewWithContext:(id)arg1;
- (void)_updatePausedState;
- (void)_updatePositionForGroupView:(id)arg1 toPosition:(struct CGPoint)arg2 withSpringFactory:(id)arg3;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_updateTopContentSeparatorVisibilityAnimated:(BOOL)arg1;
- (void)_updateTransformForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (struct CGRect)_xFrameForGroupViewInState:(long long)arg1;
- (double)_xPositionForGroupView:(id)arg1 forState:(long long)arg2;
- (double)_yForExternalModallyPresentedGroup;
- (double)_yForGroupInExternalModalPileWithModalGroupY:(double)arg1;
- (double)_yForGroupInModalPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInModalPileWithModalGroupY:(double)arg1;
- (double)_yForGroupInOffscreenPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInTableAtIndex:(unsigned long long)arg1;
- (double)_yForModallyPresentedGroup;
- (double)_yForModallyPresentedGroupForExternalPresentation:(BOOL)arg1 ignoringCompactState:(BOOL)arg2;
- (double)_yForSingleGroupView:(id)arg1;
- (double)_yPositionForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2;
- (void)beginScrollCardListTest;
- (void)beginSelectCardTest;
- (BOOL)canPerformPaymentForGroupAtIndex:(unsigned long long)arg1;
- (void)dashboardPassViewController:(id)arg1 didRequestPaymentForPass:(id)arg2;
- (void)dealloc;
- (void)deleteAnimationController:(id)arg1 didComplete:(BOOL)arg2;
- (void)deleteAnimationControllerWillBeginDeleteAnimation:(id)arg1;
- (void)deleteGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didDeletePass:(id)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (CDStruct_d8808cea)discoveryGalleryLayoutStateForCurrentLayoutState;
- (void)evaluateBrightness;
- (void)gotoBaseTestState;
- (BOOL)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
- (void)groupView:(id)arg1 frontmostPassViewDidChange:(id)arg2 withContext:(id)arg3;
- (void)groupView:(id)arg1 panned:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (long long)groupViewContentModeForFrontmostPassWhenPiled:(id)arg1 withDefaultContentMode:(long long)arg2;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (void)groupViewDidMoveToReceiver:(id)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(id)arg1;
- (void)groupViewIsAvailable:(id)arg1;
- (void)groupViewNeedsAnimating:(id)arg1 withVelocity:(double)arg2 dragging:(BOOL)arg3;
- (void)groupViewPanDidBegin:(id)arg1;
- (void)groupViewPanDidEnd:(id)arg1;
- (unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
- (void)groupViewPressed:(id)arg1;
- (void)groupViewPressedDidEnd:(id)arg1;
- (id)groupViewReusablePassViewQueue:(id)arg1;
- (BOOL)groupViewShouldAllowPanning:(id)arg1;
- (void)groupViewTapped:(id)arg1;
- (void)groupViewWillBeAvailable:(id)arg1;
- (BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (id)headerForPassType:(unsigned long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidate;
- (BOOL)isPassFooterViewInGroup:(id)arg1;
- (BOOL)isTableModalPresentation;
- (void)layoutContentForCurrentPresentationState:(BOOL)arg1;
- (void)layoutHeaderFootersAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)leadingHeaderViewInterstitialIsAvailable:(id)arg1;
- (void)modalPresentationIsPending;
- (void)moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)noteDidEndScrollingForTesting;
- (void)passFooterViewDidChangeCoachingState:(id)arg1;
- (void)passFooterViewDidChangePileSuppressionRequirement:(id)arg1;
- (void)passFooterViewDidChangeUserIntentRequirement:(id)arg1;
- (void)passFooterViewDidChangeUserIntentRequirement:(id)arg1 withContext:(id)arg2;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)presentPassWithUniqueID:(id)arg1 withContext:(id)arg2;
- (BOOL)presentedPassCanPerformPayment;
- (void)reloadData;
- (void)resetBrightness;
- (void)safeAreaInsetsDidChange;
- (void)scrollDownTest;
- (void)scrollNext;
- (void)scrollUpTest;
- (void)setFooterSuppressed:(BOOL)arg1 withContext:(id)arg2;
- (void)setPresentationState:(long long)arg1 animated:(BOOL)arg2;
- (void)setPresentationState:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setPresentationState:(long long)arg1 context:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setTableModalPresentationEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)stageGroupInPresentationState:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)subheaderForPassType:(unsigned long long)arg1;
- (unsigned long long)suppressedContentForPassFooter:(id)arg1;
- (void)testGoModal;
- (void)testGroupSelection;
- (void)tilePassesEagerly:(BOOL)arg1;
- (void)trailingHeaderViewInterstitialIsAvailable:(id)arg1;
- (void)updateHeaderAndSubheaderViewsIfNecessary;
- (void)updatePeerPaymentFooterViewIfNecessary;
- (void)willDeletePass:(id)arg1;

@end

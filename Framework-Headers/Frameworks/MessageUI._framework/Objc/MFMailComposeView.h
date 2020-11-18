//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITransitionView.h>

#import <MessageUI/CNAutocompleteResultsTableViewControllerDelegate-Protocol.h>
#import <MessageUI/CNComposeDragSourceDelegate-Protocol.h>
#import <MessageUI/CNComposeDropTargetDelegate-Protocol.h>
#import <MessageUI/CNComposeHeaderViewDelegate-Protocol.h>
#import <MessageUI/MFComposeFromViewDelegate-Protocol.h>
#import <MessageUI/MFComposeMultiViewDelegate-Protocol.h>
#import <MessageUI/MFComposeWebViewDelegate-Protocol.h>
#import <MessageUI/MFMailComposeContactsSearchControllerDelegate-Protocol.h>
#import <MessageUI/UIPopoverControllerDelegate-Protocol.h>
#import <MessageUI/UIScrollViewDelegate-Protocol.h>

@class CNAutocompleteResultsTableViewController, MFComposeDisplayMetrics, MFComposeFromView, MFComposeImageSizeView, MFComposeMultiView, MFComposeSubjectView, MFComposeWebContentVariationView, MFComposeWebView, MFMailComposeContactsSearchController, MFMailComposeRecipientTextView, MFMailComposeToField, MFMessageContentLoadingView, NSInvocation, NSMutableArray, NSString, UIResponder, UIScrollView, UIView, UIViewController;
@protocol MFMailComposeRecipientTextViewDelegate, MFMailComposeToFieldDelegate, MFMailComposeViewDelegate;

@interface MFMailComposeView : UITransitionView <CNComposeHeaderViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeDragSourceDelegate, CNComposeDropTargetDelegate, MFComposeMultiViewDelegate, MFComposeWebViewDelegate, UIPopoverControllerDelegate, MFComposeFromViewDelegate, UIScrollViewDelegate, MFMailComposeContactsSearchControllerDelegate>
{
    UIScrollView *_bodyScroller;
    UIView *_headerView;
    UIView *_contentView;
    UIView *_shadowView;
    MFMailComposeToField *_toField;
    MFMailComposeRecipientTextView *_ccField;
    MFMailComposeRecipientTextView *_bccField;
    MFMailComposeRecipientTextView *_lastChangedRecipientView;
    MFMailComposeRecipientTextView *_activeRecipientView;
    BOOL _completedCCAndBCCFieldSetup;
    MFComposeSubjectView *_subjectField;
    MFComposeFromView *_fromField;
    MFComposeMultiView *_multiField;
    MFComposeImageSizeView *_imageSizeField;
    MFComposeWebContentVariationView *_webContentVariationField;
    MFComposeWebView *_webView;
    MFMessageContentLoadingView *_loadingView;
    BOOL _isDragging;
    NSMutableArray *_pendingDropRecipients;
    UIResponder *_firstResponderBeforeSheet;
    UIResponder *_pinningResponder;
    NSInvocation *_delayedPopoverInvocation;
    MFMailComposeContactsSearchController *_searchController;
    CNAutocompleteResultsTableViewController *_searchViewController;
    CNAutocompleteResultsTableViewController *_corecipientsSearchViewController;
    UIView *_corecipientsSearchTableViewSeparator;
    double _offsetBeforeSearch;
    double _keyboardIntersection;
    unsigned long long _options;
    struct CGSize _currentContentSize;
    unsigned long long _notifyingBodyField;
    unsigned int _isChangingRecipients:1;
    unsigned int _isLoading:1;
    unsigned int _isShowingPeoplePicker:1;
    unsigned int _isRotating:1;
    unsigned int _isClosing:1;
    unsigned int _isForEditing:1;
    unsigned int _isAnimationDisabled:1;
    unsigned int _isDisambiguating:1;
    unsigned int _shouldShowOptionalHeaders:1;
    unsigned int _hasAppeared:1;
    unsigned int _corecipientsTableVisible:1;
    id<MFMailComposeViewDelegate> _mailComposeViewDelegate;
    id<MFMailComposeRecipientTextViewDelegate> _composeRecipientViewDelegate;
    UIViewController *_popoverOwner;
    id<MFMailComposeToFieldDelegate> _toFieldDelegate;
    MFComposeDisplayMetrics *_displayMetrics;
}

@property (nonatomic, getter=isAnimationDisabled) BOOL animationDisabled;
@property (readonly, nonatomic) MFMailComposeRecipientTextView *bccField; // @synthesize bccField=_bccField;
@property (readonly, nonatomic) UIScrollView *bodyScroller; // @synthesize bodyScroller=_bodyScroller;
@property (readonly, nonatomic) MFMailComposeRecipientTextView *ccField; // @synthesize ccField=_ccField;
@property (nonatomic, getter=isChangingRecipients) BOOL changingRecipients;
@property (weak, nonatomic) id<MFMailComposeRecipientTextViewDelegate> composeRecipientDelegate; // @synthesize composeRecipientDelegate=_composeRecipientViewDelegate;
@property (weak, nonatomic) id<MFMailComposeViewDelegate> composeViewDelegate; // @synthesize composeViewDelegate=_mailComposeViewDelegate;
@property (readonly, nonatomic) MFComposeWebView *composeWebView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MFComposeDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property (readonly, nonatomic) MFComposeFromView *fromField; // @synthesize fromField=_fromField;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MFComposeImageSizeView *imageSizeField; // @synthesize imageSizeField=_imageSizeField;
@property (nonatomic) BOOL isForEditing;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) MFComposeMultiView *multiField; // @synthesize multiField=_multiField;
@property (weak, nonatomic) UIViewController *popoverOwner; // @synthesize popoverOwner=_popoverOwner;
@property (readonly, nonatomic) MFMailComposeContactsSearchController *searchController; // @synthesize searchController=_searchController;
@property (readonly, nonatomic) CNAutocompleteResultsTableViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property (readonly, nonatomic, getter=isSearching) BOOL searching;
@property (nonatomic, getter=isShowingPeoplePicker) BOOL showingPeoplePicker;
@property (readonly, nonatomic) MFComposeSubjectView *subjectField; // @synthesize subjectField=_subjectField;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MFMailComposeToField *toField; // @synthesize toField=_toField;
@property (weak, nonatomic) id<MFMailComposeToFieldDelegate> toFieldDelegate; // @synthesize toFieldDelegate=_toFieldDelegate;
@property (readonly, nonatomic) MFComposeWebContentVariationView *webContentVariationField; // @synthesize webContentVariationField=_webContentVariationField;

- (void).cxx_destruct;
- (void)_adjustHeaderFieldsPreferredContentSize;
- (void)_adjustScrollerContentSize;
- (void)_adjustScrollerForBottomView;
- (void)_beginBlockingBodyScroll;
- (void)_beginPreventingScrollingToRevealSelection;
- (void)_cancelAnimations;
- (void)_cancelDelayedPopover;
- (void)_collectKeyViews:(id)arg1;
- (id)_corecipientResultsTable;
- (void)_createCCAndBCCFieldIfNeededAndCompleteSetup:(BOOL)arg1;
- (void)_createImageSizeFieldIfNeededAndAddSubview:(BOOL)arg1;
- (void)_displayMetricsDidChange;
- (void)_dropItems:(id)arg1 recipientTextView:(id)arg2;
- (void)_endBlockingBodyScroll;
- (void)_endPreventingScrollingToRevealSelection;
- (void)_finishUpRotationToInterfaceOrientation:(long long)arg1;
- (id)_focusedRecipientView;
- (struct CGRect)_headerFrame;
- (struct CGPoint)_headerViewOriginWithScrollViewOffsetCalculation;
- (double)_heightForBottomView;
- (void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(struct CGSize)arg2 withPinFrame:(out struct CGRect *)arg3;
- (void)_layoutLoadingView;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize)arg3;
- (void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize)arg3 searchResultsWereDismissed:(BOOL)arg4;
- (void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize)arg3;
- (void)_multiFieldClicked;
- (void)_normalizeBodyFieldFrame;
- (void)_presentDelayedPopover;
- (BOOL)_presentsSearchResultsTableAsPopover;
- (void)_revealSelection;
- (void)_revealSelectionIfNeededWithChangingView:(id)arg1;
- (id)_searchResultsTable;
- (void)_setCorecipientsTableViewVisible:(BOOL)arg1 withFieldFrame:(struct CGRect)arg2;
- (void)_setDragging:(BOOL)arg1;
- (void)_setHeaderFrame:(struct CGRect)arg1;
- (void)_setShadowViewVisible:(BOOL)arg1 frame:(struct CGRect)arg2;
- (void)_setUpContentView;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect)arg1 enclosingFrame:(struct CGRect)arg2 changingView:(id)arg3 frameToPin:(struct CGRect)arg4 wasSearching:(BOOL)arg5;
- (void)_setupField:(id)arg1 withLabel:(id)arg2 navTitle:(id)arg3;
- (BOOL)_shouldShowCorecipientsTableView;
- (void)_updateFromField;
- (void)_updateKeyboardIntersection:(struct CGRect)arg1;
- (void)_updateMultiField;
- (void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)arg1;
- (void)_updateQuoteLevelMenu;
- (void)_updateTextViewHeightWithHeaderFrame:(struct CGRect)arg1;
- (void)_updateTextViewOriginWithHeaderFrame:(struct CGRect)arg1;
- (BOOL)_userInterfaceConfigurationSupportsCorecipientsTableView;
- (double)_verticalPadding;
- (void)autocompleteResultsController:(id)arg1 didAskToRemoveRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)automaticKeyboardFinishedAppearing:(id)arg1;
- (void)automaticKeyboardFinishedDisappearing:(id)arg1;
- (void)beginSearchForText:(id)arg1 recipientView:(id)arg2;
- (void)cancelDelayedPopover;
- (void)cancelSearch;
- (BOOL)chooseSelectedSearchResult;
- (void)clearSearchForActiveRecipientView;
- (void)clearSearchForRecipientView:(id)arg1 reflow:(BOOL)arg2 clear:(BOOL)arg3;
- (void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 finishedWithResults:(BOOL)arg2;
- (void)composeFromView:(id)arg1 didSelectAddress:(id)arg2;
- (void)composeHeaderViewClicked:(id)arg1;
- (void)composeWebViewTextChanged:(id)arg1;
- (void)dealloc;
- (void)didAppear;
- (void)didIgnoreSearchResults;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)disambiguateRecipient:(id)arg1 recipientView:(id)arg2;
- (void)dismissSearchResults;
- (void)dismissSearchResultsIfDisambiguating;
- (id)dragSource:(id)arg1 draggableItemsAtPoint:(struct CGPoint)arg2;
- (id)dragSource:(id)arg1 localObjectForDraggableItem:(id)arg2;
- (BOOL)dragSource:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (id)dragSource:(id)arg1 suggestedNameForDraggableItem:(id)arg2;
- (id)dragSource:(id)arg1 targetedPreviewForDraggableItem:(id)arg2;
- (void)dragSource:(id)arg1 willEndInteractionWithItems:(id)arg2 dropOperation:(unsigned long long)arg3;
- (void)dropTarget:(id)arg1 didDropDragItems:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)dropTarget:(id)arg1 dragDidMoveToPoint:(struct CGPoint)arg2;
- (void)dropTarget:(id)arg1 dragEnteredAtPoint:(struct CGPoint)arg2;
- (void)dropTargetDragExited:(id)arg1;
- (BOOL)endEditing:(BOOL)arg1;
- (void)findCorecipientsWithRecipientView:(id)arg1;
- (void)focusFirstResponderAfterRecipientView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (BOOL)isKeyboardVisible;
- (BOOL)isSearchResultsPopoverVisible;
- (void)layoutForChangedComposeHeaderView:(id)arg1 size:(struct CGSize)arg2;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)menuDidHide;
- (void)parentDidClose;
- (void)parentWillClose;
- (BOOL)presentSearchResults;
- (BOOL)presentSearchResults:(id)arg1;
- (id)recipientTextViewForComposeMultiView:(id)arg1;
- (void)removeFromSuperview;
- (void)resetContentSize;
- (void)restoreFirstResponder;
- (void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg1;
- (void)saveFirstResponder;
- (void)saveFirstResponderWithKeyboardPinning:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchResultsPopoverWasDismissed;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (id)sendingAccountProxyForComposeContactsSearchController:(id)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setKeyboardVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setRecipientFieldsEditable:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setScrollsToTop:(BOOL)arg1;
- (void)toggleImageSizeFieldIfNecessary;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateOptionalHeaderVisibility;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willDisappear;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

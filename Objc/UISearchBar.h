//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIBarPositioning-Protocol.h>
#import <UIKit/UIStatusBarTinting-Protocol.h>
#import <UIKit/UITextInputTraits-Protocol.h>
#import <UIKit/UITextInputTraits_Private-Protocol.h>
#import <UIKit/_UIBarPositioningInternal-Protocol.h>

@class NSArray, NSIndexSet, NSString, UIBarButtonItem, UIButton, UIColor, UIImage, UIImageView, UIInputContextHistory, UILabel, UISearchBarTextField, UISearchController, UITapGestureRecognizer, UITextInputAssistantItem, UITextInputTraits, _UIBackdropView, _UISearchBarNavigationItem, _UISearchBarScopeBarBackground;
@protocol UISearchBarDelegate, UISearchBarDelegate><UISearchBarDelegate_Private;

@interface UISearchBar : UIView <UITextInputTraits_Private, UIStatusBarTinting, _UIBarPositioningInternal, UIBarPositioning, UITextInputTraits>
{
    UISearchBarTextField *_searchField;
    UILabel *_promptLabel;
    UIButton *_cancelButton;
    id<UISearchBarDelegate><UISearchBarDelegate_Private> _delegate;
    id _controller;
    UIColor *_barTintColor;
    UIImageView *_separator;
    NSString *_cancelButtonText;
    NSArray *_scopes;
    long long _selectedScope;
    UIView *_background;
    UIView *_scopeBar;
    UIView *_scopeBarContainerView;
    struct UIEdgeInsets _contentInset;
    UIImageView *_shadowView;
    id _appearanceStorage;
    _UISearchBarNavigationItem *_navigationItem;
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;
    UIBarButtonItem *_animatedAppearanceBarButtonItem;
    _UIBackdropView *_backdrop;
    unsigned long long _backdropStyle;
    UIView *_maskView;
    UITapGestureRecognizer *_tapToActivateGestureRecognizer;
    UIBarButtonItem *_cancelBarButtonItem;
    UITextInputTraits *_textInputTraits;
    UIButton *_leftButton;
    struct {
        unsigned int barStyle:3;
        unsigned int showsBookmarkButton:1;
        unsigned int showsCancelButton:1;
        unsigned int barTranslucence:3;
        unsigned int autoDisableCancelButton:1;
        unsigned int showsScopeBar:1;
        unsigned int hideBackground:1;
        unsigned int combinesLandscapeBars:1;
        unsigned int usesEmbeddedAppearance:1;
        unsigned int showsSearchResultsButton:1;
        unsigned int searchResultsButtonSelected:1;
        unsigned int pretendsIsInBar:1;
        unsigned int disabled:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int containedInNavigationPalette:1;
        unsigned int containedInNavigationBar:1;
        unsigned int containedInToolBar:1;
        unsigned int drawsBackgroundInPalette:1;
        unsigned int centerPlaceholder:1;
        unsigned int searchFieldLeftViewMode:2;
        unsigned int cancelButtonWantsLetterpress:1;
    } _searchBarFlags;
    BOOL __forceCenteredPlaceholderLayout;
    BOOL __transplanting;
    UIColor *_statusBarTintColor;
    UIView *_inputAccessoryView;
    long long _barPosition;
    unsigned long long _searchBarStyle;
    UISearchController *__searchController;
    unsigned long long __scopeBarPosition;
}

@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) BOOL _forceCenteredPlaceholderLayout; // @synthesize _forceCenteredPlaceholderLayout=__forceCenteredPlaceholderLayout;
@property (readonly, strong, nonatomic) UIButton *_leftButton; // @synthesize _leftButton;
@property (nonatomic, setter=_setScopeBarPosition:) unsigned long long _scopeBarPosition; // @synthesize _scopeBarPosition=__scopeBarPosition;
@property (nonatomic, setter=_setSearchController:) UISearchController *_searchController; // @synthesize _searchController=__searchController;
@property (strong, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor; // @synthesize _statusBarTintColor;
@property (nonatomic, setter=_setTransplanting:) BOOL _transplanting; // @synthesize _transplanting=__transplanting;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property (strong, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
@property (nonatomic) long long barStyle;
@property (strong, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (weak, nonatomic) id<UISearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property (readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (strong, nonatomic) UIInputContextHistory *inputContextHistory;
@property (strong, nonatomic) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property (nonatomic) long long keyboardType; // @dynamic keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property (strong, nonatomic) UIImage *scopeBarBackgroundImage;
@property (copy, nonatomic) NSArray *scopeButtonTitles;
@property (nonatomic) unsigned long long searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property (readonly, nonatomic, getter=_searchBarTextField) UISearchBarTextField *searchBarTextField;
@property (nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment;
@property (nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property (nonatomic) struct UIOffset searchTextPositionAdjustment;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property (nonatomic) long long selectedScopeButtonIndex;
@property (strong, nonatomic) UIColor *selectionBarColor;
@property (strong, nonatomic) UIImage *selectionDragDotImage;
@property (strong, nonatomic) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) BOOL showsBookmarkButton;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsScopeBar;
@property (nonatomic) BOOL showsSearchResultsButton;
@property (nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property (strong, nonatomic) UIColor *tintColor; // @dynamic tintColor;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange validTextRange;

- (void).cxx_destruct;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_allowCursorToAppear:(BOOL)arg1;
- (id)_alternateTitle;
- (id)_animatedAppearanceBarButtonItem;
- (void)_applySearchBarStyle;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (double)_availableBoundsWidth;
- (double)_availableBoundsWidthForSize:(struct CGSize)arg1;
- (unsigned long long)_backdropStyle;
- (id)_backgroundBlurEffectForPresentation;
- (id)_backgroundView;
- (double)_barHeightForBarMetrics:(long long)arg1;
- (long long)_barMetricsForOrientation:(long long)arg1;
- (long long)_barPosition;
- (void)_bookmarkButtonPressed;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonPressed;
- (void)_commonInit;
- (BOOL)_consideredInBarWithSuperview:(id)arg1;
- (BOOL)_containedInNavigationPalette;
- (BOOL)_containsScopeBar;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_currentSeparatorImage;
- (double)_defaultHeight;
- (id)_defaultPromptString;
- (double)_defaultWidth;
- (void)_destroyCancelButton;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)_disableAutomaticKeyboardUI;
- (void)_displayNavBarCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChange:(BOOL)arg1;
- (BOOL)_enableAutomaticKeyboardPressDone;
- (id)_glyphAndTextColor:(BOOL)arg1;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (BOOL)_hasDarkUIAppearance;
- (void)_identifyBarContainer;
- (id)_imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)_imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(BOOL *)arg3;
- (BOOL)_isAtTop;
- (BOOL)_isEnabled;
- (BOOL)_isInBar;
- (double)_landscapeScopeBarWidth;
- (double)_landscapeSearchFieldWidth;
- (void)_layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg1;
- (id)_makeShadowView;
- (id)_navigationBarForShadow;
- (id)_navigationItem;
- (BOOL)_ownsInputAccessoryView;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_removeMarginsIfNecessary;
- (void)_resultsListButtonPressed;
- (id)_scopeBar;
- (id)_scopeBarBackgroundView;
- (id)_scopeBarContainer;
- (id)_scopeBarContainerView;
- (double)_scopeBarHeight;
- (struct UIEdgeInsets)_scopeBarInsets;
- (BOOL)_scopeBarIsVisible;
- (void)_scopeChanged:(id)arg1;
- (void)_searchFieldBeginEditing;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldEndEditing;
- (double)_searchFieldHeight;
- (void)_searchFieldReturnPressed;
- (BOOL)_searchFieldWidthShouldBeFlexible;
- (id)_separatorImage;
- (void)_setAutoDisableCancelButton:(BOOL)arg1;
- (void)_setBackdropStyle:(unsigned long long)arg1;
- (void)_setBackgroundLayoutNeedsUpdate:(BOOL)arg1;
- (void)_setBarPosition:(long long)arg1;
- (void)_setBarTintColor:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)_setCancelButtonText:(id)arg1;
- (void)_setCancelButtonWantsLetterpress;
- (void)_setDisableFocus:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setMaskActive:(BOOL)arg1;
- (void)_setMaskBounds:(struct CGRect)arg1;
- (void)_setScopeBarHidden:(BOOL)arg1;
- (void)_setScopeBarSegmentsEnabled:(BOOL)arg1;
- (void)_setSeparatorImage:(id)arg1;
- (void)_setShadowVisibleIfNecessary:(BOOL)arg1;
- (void)_setShowsCancelButton:(BOOL)arg1;
- (void)_setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2;
- (void)_setShowsSeparator:(BOOL)arg1;
- (void)_setUpScopeBar;
- (void)_setupCancelButton;
- (void)_setupCancelButtonWithAppearance:(id)arg1;
- (void)_setupLeftButton;
- (void)_setupPromptLabel;
- (void)_setupSearchField;
- (BOOL)_shouldCombineLandscapeBars;
- (BOOL)_shouldCombineLandscapeBarsForOrientation:(long long)arg1;
- (BOOL)_shouldDisplayShadow;
- (BOOL)_shouldUseNavigationBarHeight;
- (id)_textColor;
- (BOOL)_textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)arg1;
- (long long)_textInputSource;
- (id)_uiktest_placeholderLabelColor;
- (void)_updateBackgroundToBackdropStyle:(long long)arg1;
- (void)_updateInsetsForTableView:(id)arg1;
- (void)_updateMagnifyingGlassView;
- (void)_updateNeedForBackdrop;
- (void)_updateOpacity;
- (void)_updatePlaceholderColor;
- (void)_updateRightView;
- (void)_updateScopeBarBackground;
- (void)_updateSearchFieldArt;
- (id)_viewForChildViews;
- (BOOL)_wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (BOOL)becomeFirstResponder;
- (void)bringSubviewToFront:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)cancelButton;
- (BOOL)centerPlaceholder;
- (BOOL)combinesLandscapeBars;
- (struct UIEdgeInsets)contentInset;
- (id)controller;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)drawsBackground;
- (BOOL)drawsBackgroundInPalette;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (id)methodSignatureForSelector:(SEL)arg1;
- (struct UIOffset)positionAdjustmentForSearchBarIcon:(long long)arg1;
- (id)preferredFocusedView;
- (BOOL)pretendsIsInBar;
- (void)reloadInputViews;
- (BOOL)resignFirstResponder;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)scopeBarButtonBackgroundImageForState:(unsigned long long)arg1;
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (id)searchField;
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (long long)searchFieldLeftViewMode;
- (void)sendSubviewToBack:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCenterPlaceholder:(BOOL)arg1;
- (void)setCombinesLandscapeBars:(BOOL)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setController:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setDrawsBackgroundInPalette:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;
- (void)setPositionAdjustment:(struct UIOffset)arg1 forSearchBarIcon:(long long)arg2;
- (void)setPretendsIsInBar:(BOOL)arg1;
- (void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSearchFieldLeftViewMode:(long long)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUsesEmbeddedAppearance:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (void)tappedSearchBar:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (id)textInputTraits;
- (BOOL)usesEmbeddedAppearance;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end


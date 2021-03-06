//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISearchBarVisualProviding-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIButton, UIColor, UIDictationSearchButton, UIImage, UIImageView, UILabel, UINavigationButton, UINavigationItem, UISearchBarBackground, UISearchBarTextField, UISegmentedControl, UITextField, UIView, UIVisualEffectView, _UIBackdropView, _UINavigationBarTitleViewOverlayRects, _UISearchBarAppearanceStorage, _UISearchBarLayout, _UISearchBarPromptContainerView, _UISearchBarScopeBarBackground, _UISearchBarScopeContainerView, _UISearchBarSearchContainerView, _UISearchBarTransitionerBase;
@protocol _UINavigationBarTitleViewDataSource, _UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private;

__attribute__((visibility("hidden")))
@interface _UISearchBarVisualProviderIOS : NSObject <_UISearchBarVisualProviding>
{
    UIDictationSearchButton *_dictationButton;
    _UISearchBarSearchContainerView *_searchFieldContainerView;
    _UISearchBarPromptContainerView *_promptContainerView;
    _UISearchBarScopeContainerView *_scopeBarContainerView;
    struct UIEdgeInsets _effectiveContentInset;
    unsigned long long _overriddenContentInsetEdges;
    _UISearchBarAppearanceStorage *_appearanceStorage;
    UIBarButtonItem *_animatedAppearanceBarButtonItem;
    UINavigationItem *_searchNavigationItem;
    struct {
        unsigned int barStyle:3;
        unsigned int searchBarStyle:3;
        unsigned int barTranslucence:3;
        unsigned int searchFieldLeftViewMode:2;
        unsigned int centerPlaceholder:1;
        unsigned int disabled:1;
        unsigned int reliesOnNavigationBarBackdrop:1;
        unsigned int hideBackground:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int usesEmbeddedAppearance:1;
        unsigned int showsCancelButton:1;
        unsigned int autoDisableCancelButton:1;
        unsigned int cancelButtonWantsLetterpress:1;
        unsigned int showsDeleteButton:1;
        unsigned int showsSearchResultsButton:1;
        unsigned int searchResultsButtonSelected:1;
        unsigned int showsBookmarkButton:1;
        unsigned int isPlacedInNavigationBar:1;
        unsigned int isPlacedInToolbar:1;
        unsigned int isHostedByNavigationBar:1;
        unsigned int showsScopeBar:1;
        unsigned int showDictationButton:1;
        unsigned int allowedToShowDictationButton:1;
        unsigned int dictationButtonSetupComplete:1;
    } _searchBarVisualProviderFlags;
    UIView<_UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private> *_delegate;
    UISearchBarTextField *_searchField;
    UISearchBarBackground *_searchBarBackground;
    _UIBackdropView *_backdrop;
    UIVisualEffectView *_backdropVisualEffectView;
    UIView *_searchBarClippingView;
    UIButton *_cancelButton;
    UIBarButtonItem *_cancelBarButtonItem;
    NSString *_cancelButtonText;
    UINavigationButton *_leftButton;
    UILabel *_promptLabel;
    UIImageView *_separator;
    UISegmentedControl *_scopeBar;
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;
    NSArray *_scopeTitles;
    long long _selectedScope;
    unsigned long long _backdropStyle;
    UIColor *_barTintColor;
    long long _barPosition;
    unsigned long long _scopeBarPosition;
    double _tableViewIndexWidth;
    long long _navBarTitleViewLocation;
    _UINavigationBarTitleViewOverlayRects *_navBarTitleViewOverlayRects;
    id<_UINavigationBarTitleViewDataSource> _navBarTitleViewDataSource;
    long long _previousLayoutState;
    long long _layoutState;
    double _backgroundExtension;
    _UISearchBarLayout *_currentLayout;
    _UISearchBarLayout *_prospectiveLayout;
    _UISearchBarTransitionerBase *_transitioner;
    struct UIEdgeInsets _contentInsetPrivateMinOrOverride;
}

@property (nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge;
@property (nonatomic) BOOL allowsInlineScopeBar;
@property (readonly, nonatomic) BOOL alwaysUsesLayoutMarginsForHorizontalContentInset;
@property (readonly, nonatomic) UIBarButtonItem *animatedAppearanceBarButtonItem; // @synthesize animatedAppearanceBarButtonItem=_animatedAppearanceBarButtonItem;
@property (nonatomic) BOOL autoDisableCancelButton;
@property (strong, nonatomic) _UIBackdropView *backdrop; // @synthesize backdrop=_backdrop;
@property (nonatomic) unsigned long long backdropStyle; // @synthesize backdropStyle=_backdropStyle;
@property (strong, nonatomic) UIVisualEffectView *backdropVisualEffectView; // @synthesize backdropVisualEffectView=_backdropVisualEffectView;
@property (nonatomic) double backgroundExtension; // @synthesize backgroundExtension=_backgroundExtension;
@property (readonly, nonatomic) BOOL backgroundLayoutNeedsUpdate;
@property (nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
@property (nonatomic) long long barStyle;
@property (strong, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property (nonatomic) long long barTranslucence;
@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property (strong, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property (copy, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property (nonatomic) BOOL cancelButtonWantsLetterpress;
@property (nonatomic) BOOL centerPlaceholder;
@property (strong, nonatomic) _UISearchBarLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UIView<_UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private> *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) BOOL drawsBackgroundInPalette;
@property (readonly, nonatomic) struct UIEdgeInsets effectiveContentInset; // @synthesize effectiveContentInset=_effectiveContentInset;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHostedByNavigationBar) BOOL hostedByNavigationBar;
@property (nonatomic, getter=isInNavigationPalette) BOOL inNavigationPalette;
@property (readonly, nonatomic) struct CGSize intrinsicContentSize;
@property (readonly, nonatomic) long long layoutState; // @synthesize layoutState=_layoutState;
@property (readonly, nonatomic) UINavigationButton *leftButton; // @synthesize leftButton=_leftButton;
@property (readonly, nonatomic, getter=isLegacy) BOOL legacy;
@property (nonatomic) struct UIEdgeInsets minimumContentInset; // @synthesize minimumContentInset=_contentInsetPrivateMinOrOverride;
@property (weak, nonatomic) id<_UINavigationBarTitleViewDataSource> navBarTitleViewDataSource; // @synthesize navBarTitleViewDataSource=_navBarTitleViewDataSource;
@property (nonatomic) long long navBarTitleViewLocation; // @synthesize navBarTitleViewLocation=_navBarTitleViewLocation;
@property (strong, nonatomic) _UINavigationBarTitleViewOverlayRects *navBarTitleViewOverlayRects; // @synthesize navBarTitleViewOverlayRects=_navBarTitleViewOverlayRects;
@property (nonatomic, getter=isPlacedInNavigationBar) BOOL placedInNavigationBar;
@property (nonatomic, getter=isPlacedInToolbar) BOOL placedInToolbar;
@property (readonly, nonatomic) long long previousLayoutState; // @synthesize previousLayoutState=_previousLayoutState;
@property (copy, nonatomic) NSString *prompt;
@property (strong, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property (strong, nonatomic) _UISearchBarLayout *prospectiveLayout; // @synthesize prospectiveLayout=_prospectiveLayout;
@property (nonatomic) BOOL reliesOnNavigationBarBackdrop;
@property (readonly, copy, nonatomic) NSArray *runtimeOnlyViews;
@property (strong, nonatomic) UISegmentedControl *scopeBar; // @synthesize scopeBar=_scopeBar;
@property (strong, nonatomic) UIImage *scopeBarBackgroundImage;
@property (strong, nonatomic) _UISearchBarScopeBarBackground *scopeBarBackgroundView; // @synthesize scopeBarBackgroundView=_scopeBarBackgroundView;
@property (readonly, nonatomic) UIView *scopeBarContainerView; // @synthesize scopeBarContainerView=_scopeBarContainerView;
@property (readonly, nonatomic) double scopeBarHeight;
@property (readonly, nonatomic) struct UIEdgeInsets scopeBarInsets;
@property (readonly, nonatomic) BOOL scopeBarIsVisible;
@property (nonatomic) unsigned long long scopeBarPosition; // @synthesize scopeBarPosition=_scopeBarPosition;
@property (copy, nonatomic) NSArray *scopeTitles; // @synthesize scopeTitles=_scopeTitles;
@property (strong, nonatomic) UISearchBarBackground *searchBarBackground; // @synthesize searchBarBackground=_searchBarBackground;
@property (readonly, nonatomic) UIView *searchBarClippingView; // @synthesize searchBarClippingView=_searchBarClippingView;
@property (nonatomic) unsigned long long searchBarStyle;
@property (weak, nonatomic) id searchDisplayController;
@property (strong, nonatomic) UISearchBarTextField *searchField; // @synthesize searchField=_searchField;
@property (nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment;
@property (readonly, nonatomic) double searchFieldHeight;
@property (readonly, nonatomic) UITextField *searchFieldIfExists;
@property (nonatomic) long long searchFieldLeftViewMode;
@property (readonly, nonatomic) UINavigationItem *searchNavigationItem;
@property (nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property (nonatomic) long long selectedScope; // @synthesize selectedScope=_selectedScope;
@property (strong, nonatomic) UIImageView *separator; // @synthesize separator=_separator;
@property (strong, nonatomic) UIImage *separatorImage;
@property (readonly, nonatomic) UIImageView *shadowView;
@property (nonatomic) BOOL showsBookmarkButton;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsScopeBar;
@property (nonatomic) BOOL showsSearchResultsButton;
@property (readonly) Class superclass;
@property (nonatomic) double tableViewIndexWidth; // @synthesize tableViewIndexWidth=_tableViewIndexWidth;
@property (readonly, nonatomic) UIColor *textColor;
@property (strong, nonatomic) _UISearchBarTransitionerBase *transitioner; // @synthesize transitioner=_transitioner;
@property (nonatomic) BOOL usesEmbeddedAppearance;

- (void).cxx_destruct;
- (BOOL)_getNavigationTitleLeadingInset:(double *)arg1 trailingInset:(double *)arg2 isRTL:(BOOL)arg3;
- (void)_setAutoDisableCancelButton:(BOOL)arg1;
- (void)_setBarStyle:(long long)arg1;
- (void)_setBarTintColor:(id)arg1;
- (void)_setBarTranslucence:(long long)arg1;
- (void)_setHideBackground:(BOOL)arg1;
- (void)_setSearchResultsButtonSelected:(BOOL)arg1;
- (void)_setShowsBookmarkButton:(BOOL)arg1;
- (void)_setShowsCancelButton:(BOOL)arg1;
- (void)_setShowsScopeBar:(BOOL)arg1;
- (void)_setShowsSearchResultsButton:(BOOL)arg1;
- (void)allowCursorToAppear:(BOOL)arg1;
- (void)animateTransitionToSearchLayoutState:(long long)arg1;
- (void)applySearchBarStyle;
- (double)availableBoundsWidth;
- (double)availableBoundsWidthForSize:(struct CGSize)arg1;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (double)barHeightForBarMetrics:(long long)arg1;
- (double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;
- (double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(struct UIEdgeInsets)arg2;
- (long long)barMetricsForOrientation:(long long)arg1;
- (struct CGRect)boundsForSearchBarAndUpdateIfNecessaryFromSuggestedBounds:(struct CGRect)arg1;
- (BOOL)canShowDictationButton;
- (id)cancelBarButtonItemIfExists;
- (void)cancelTransitionToSearchLayoutState:(long long)arg1;
- (void)cleanUpDictationMicsWithSearchField:(id)arg1;
- (id)colorForComponent:(unsigned long long)arg1 disabled:(BOOL)arg2;
- (void)completeTransitionToSearchLayoutState:(long long)arg1;
- (void)configureLayout:(id)arg1;
- (void)configureLayout:(id)arg1 forState:(long long)arg2;
- (BOOL)containsScopeBar;
- (id)currentSeparatorImage;
- (double)defaultHeightForOrientation:(long long)arg1;
- (void)destroyCancelButton;
- (void)destroyPromptLabel;
- (void)dictationAvailabilityDidChange:(id)arg1;
- (void)dictationButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)dictationControllerDidFinish:(id)arg1;
- (void)displayNavBarCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)driveTransitionToSearchLayoutState:(long long)arg1;
- (double)effectiveBackgroundExtension;
- (id)effectiveBarTintColor;
- (void)effectiveBarTintColorDidChange:(BOOL)arg1;
- (void)getOverrideContentInsets:(struct UIEdgeInsets *)arg1 overriddenEdges:(unsigned long long *)arg2;
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4;
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 layoutState:(long long)arg5;
- (BOOL)hasDarkUIAppearance;
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(BOOL *)arg3;
- (void)invalidateLayout;
- (BOOL)isAtTop;
- (BOOL)isInBarButNotHosted;
- (BOOL)isTranslucent;
- (void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsInBounds:(struct CGRect)arg1;
- (id)leftButtonIfExists;
- (id)makeShadowView;
- (double)navigationBarContentHeight;
- (void)navigationBarSlideTransitionDidEnd;
- (void)navigationBarSlideTransitionWillBegin;
- (void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)prepare;
- (void)prepareForTransitionToSearchLayoutState:(long long)arg1;
- (struct UIEdgeInsets)recalculatedEffectiveContentInsetForLayoutState:(long long)arg1;
- (void)removeBackdropVisualEffectView;
- (void)removeLegacyBackdropView;
- (void)resetLayoutState;
- (void)revertViewHierarchyIfNecessary;
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundLayoutNeedsUpdate;
- (void)setBarTintColor:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)setClippingViewActive:(BOOL)arg1;
- (void)setClippingViewBounds:(struct CGRect)arg1;
- (void)setDelegateSearchFieldFrameManipulationBlock:(CDUnknownBlockType)arg1;
- (void)setDisableDictationButton:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHelperPlaceholder:(id)arg1;
- (void)setHelperPlaceholderHidden:(BOOL)arg1;
- (void)setHelperPlaceholderOverride:(id)arg1;
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;
- (void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(CDUnknownBlockType)arg1;
- (void)setOverrideContentInsets:(struct UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2;
- (void)setSearchDisplayControllerShowsCancelButton:(BOOL)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setShadowVisibleIfNecessary:(BOOL)arg1;
- (void)setShowDictationButton:(BOOL)arg1 shouldUpdateView:(BOOL)arg2;
- (void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsDeleteButton:(BOOL)arg1;
- (void)setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2;
- (void)setShowsSeparator:(BOOL)arg1;
- (void)setUpCancelButton;
- (void)setUpCancelButtonWithAppearance:(id)arg1;
- (void)setUpDictationMicWithSearchField:(id)arg1;
- (void)setUpLeftButton;
- (void)setUpPromptLabel;
- (void)setUpScopeBar;
- (void)setUpSearchBarSearchContainerIfNecessary;
- (void)setUpSearchField;
- (void)setUpSearchNavigationItem;
- (BOOL)shouldCombineLandscapeBarsForOrientation:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)supportsDynamicType;
- (void)teardown;
- (void)updateBackgroundToBackdropStyle:(long long)arg1;
- (void)updateDictationButton;
- (void)updateDictationButtonActiveState;
- (void)updateDictationButtonForDynamicTypeWithSearchField:(id)arg1;
- (void)updateEffectiveContentInset;
- (void)updateForAllowedToShowDictationChange;
- (void)updateForDrawsBackgroundInPalette;
- (void)updateForDynamicType;
- (void)updateForSemanticContext;
- (void)updateIfNecessaryForOldSize:(struct CGSize)arg1;
- (void)updateMagnifyingGlassView;
- (void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3;
- (void)updateNeedForBackdrop;
- (void)updatePlaceholderColor;
- (void)updateRightView;
- (void)updateScopeBarBackground;
- (void)updateScopeBarForSelectedScope;
- (void)updateSearchBarOpacity;
- (void)updateSearchFieldArt;
- (void)updateSearchFieldControlSize;
- (void)updateSearchFieldForDynamicType;
- (BOOL)usesBackdrop;
- (BOOL)wantsDictationButton;
- (BOOL)wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;

@end


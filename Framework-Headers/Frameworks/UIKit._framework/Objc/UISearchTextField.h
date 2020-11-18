//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextField.h>

#import <UIKitCore/_UISearchBarTextFieldOrMailReplacement-Protocol.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSString, NSValue, UIColor, UIHoverGestureRecognizer, UIImage, UIImageView, UISearchBar, UITapGestureRecognizer, UITextRange, _UISearchBarSearchFieldBackgroundView, _UISearchBarTextFieldTokenCounter;

@interface UISearchTextField : UITextField <_UISearchBarTextFieldOrMailReplacement>
{
    NSMutableDictionary *_customClearButtons;
    NSMutableDictionary *_iconOffsets;
    NSValue *_searchTextOffsetValue;
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundTop;
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundBottom;
    UIImageView *_defaultLeftView;
    BOOL _deferringFirstResponder;
    BOOL _animatePlaceholderOnResignFirstResponder;
    struct {
        unsigned int searchBarWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged:1;
        unsigned int delegateImplementsItemProviderForCopyingTokens;
        unsigned int delegateImplementsUnderscoredItemProviderForCopyingTokens;
        unsigned int allowsCopyingTokens:1;
        unsigned int allowsDeletingTokens:1;
        unsigned int alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:1;
    } _searchBarTextFieldFlags;
    NSHashTable *_knownTokenLayoutViews;
    _UISearchBarTextFieldTokenCounter *_tokenCounter;
    UITapGestureRecognizer *_tokenTapGestureRecognizer;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
    UIImage *_magnifyingGlassImage;
    BOOL __preventSelectionViewActivation;
    BOOL __alwaysShowsClearButtonWhenEmpty;
    UISearchBar *_searchBar;
    UIColor *_tokenBackgroundColor;
}

@property (nonatomic, setter=_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:) BOOL _alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory;
@property (nonatomic, setter=_setAlwaysShowsClearButtonWhenEmpty:) BOOL _alwaysShowsClearButtonWhenEmpty; // @synthesize _alwaysShowsClearButtonWhenEmpty=__alwaysShowsClearButtonWhenEmpty;
@property (nonatomic, setter=_setIgnoresDynamicType:) BOOL _ignoresDynamicType;
@property (nonatomic, setter=_setPreventSelectionViewActivation:) BOOL _preventSelectionViewActivation; // @synthesize _preventSelectionViewActivation=__preventSelectionViewActivation;
@property (weak, nonatomic, setter=_setSearchBar:) UISearchBar *_searchBar; // @synthesize _searchBar;
@property (strong, nonatomic, setter=_setSearchTextOffetValue:) NSValue *_searchTextOffsetValue;
@property (nonatomic) BOOL allowsCopyingTokens;
@property (nonatomic) BOOL allowsDeletingTokens;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextRange *textualRange;
@property (strong, nonatomic) UIColor *tokenBackgroundColor; // @synthesize tokenBackgroundColor=_tokenBackgroundColor;
@property (copy, nonatomic) NSArray *tokens;

+ (Class)_canvasViewClass;
+ (Class)_fieldEditorClass;
+ (Class)_textPasteItemClass;
+ (BOOL)_wantsFadedEdges;
- (void).cxx_destruct;
- (void)__highlightedDidChangeAnimated:(BOOL)arg1;
- (void)_activateSelectionView;
- (struct CGRect)_adjustedTextOrEditingRect:(struct CGRect)arg1 forBounds:(struct CGRect)arg2;
- (struct CGRect)_adjustmentsForSearchIconViewRectForBounds:(struct CGRect)arg1;
- (void)_animateForFirstResponderChangeWithAnimations:(CDUnknownBlockType)arg1;
- (void)_animateForFirstResponderChangeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_applyHighlightedAnimated:(BOOL)arg1;
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(BOOL)arg2;
- (void)_becomeFirstResponder;
- (BOOL)_becomeFirstResponderWhenPossible;
- (long long)_blurEffectStyle;
- (struct CGRect)_bookmarkViewRectForBounds:(struct CGRect)arg1;
- (unsigned long long)_characterIndexForTokenTapGestureRecognizer;
- (void)_clearBackgroundViews;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (double)_clearButtonMarginX;
- (struct CGSize)_clearButtonSize;
- (void)_copySelectionPopulatingActuallyCopiedTokenCharacterIndexes:(id)arg1;
- (id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2;
- (id)_customDraggableObjectsForRange:(id)arg1;
- (void)_defaultInsertTextSuggestion:(id)arg1;
- (BOOL)_delegateShouldBeginEditing;
- (BOOL)_delegateShouldChangeCharactersInTextStorageRange:(struct _NSRange)arg1 replacementString:(id)arg2 delegateCares:(BOOL *)arg3;
- (BOOL)_delegateShouldClear;
- (BOOL)_delegateShouldEndEditing;
- (BOOL)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
- (void)_didRemoveTokenLayoutView:(id)arg1;
- (void)_didSetFont:(id)arg1;
- (BOOL)_displaysHelpMessageLabel;
- (BOOL)_hasContent;
- (BOOL)_hasCustomClearButtonImage;
- (void)_highlightedDidChangeAnimated:(BOOL)arg1;
- (void)_hoverGestureChanged:(id)arg1;
- (BOOL)_isEditingOrHasContent;
- (double)_maximumAlphaForLeadingView;
- (id)_newAttributedStringWithToken:(id)arg1;
- (id)_offsetValueForIcon:(long long)arg1;
- (void)_pasteSessionDidFinish:(id)arg1;
- (id)_placeholderColor;
- (Class)_placeholderLabelClass;
- (struct _NSRange)_rangeForClearButton;
- (struct _NSRange)_rangeForSetText;
- (id)_rangeOfCustomDraggableObjectsInRange:(id)arg1;
- (void)_redirectSelectionToAvoidClobberingTokens;
- (void)_removeEffectsBackgroundViews;
- (BOOL)_scalesMagnifyingGlassForDynamicTypeWithFont:(id)arg1;
- (struct CGRect)_searchIconViewRectForBounds:(struct CGRect)arg1;
- (void)_setAnimatesBackgroundCornerRadius:(BOOL)arg1;
- (void)_setBackgroundViewsAlpha:(double)arg1;
- (void)_setBottomEffectBackgroundVisible:(BOOL)arg1;
- (void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setMagnifyingGlassImage:(id)arg1;
- (void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2;
- (BOOL)_shouldCenterPlaceholder;
- (BOOL)_shouldDetermineInterfaceStyleTextColor;
- (BOOL)_shouldHideMagnifyingGlassWhenEditingOrHasContent;
- (BOOL)_shouldOverrideEditingFont;
- (BOOL)_shouldResignOnEditingDidEndOnExit;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (BOOL)_shouldSuppressSelectionHandles;
- (struct CGRect)_suffixFrame;
- (long long)_suffixLabelTextAlignment;
- (BOOL)_supportsDynamicType;
- (Class)_systemBackgroundViewClass;
- (struct _NSRange)_textRangeForTextStorageRange:(struct _NSRange)arg1;
- (BOOL)_textShouldFillFieldEditorHeight;
- (void)_tokenTapGestureRecognized;
- (void)_updateAlphaForMagnifyingGlass;
- (void)_updateAtomViewSelection:(BOOL)arg1;
- (void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3;
- (void)_updateBackgroundViewsAnimated:(BOOL)arg1;
- (void)_updateDefaultLeftViewForFont:(id)arg1;
- (void)_updateHelpMessageOverrideWithMessage:(id)arg1;
- (void)_updateLeftViewForMagnifyingGlassImage;
- (void)_willAddTokenLayoutView:(id)arg1;
- (BOOL)allowsDraggingAttachments;
- (id)attributedText;
- (id)attributedTextInRange:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBecomeFocused;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)deleteBackward;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertAttributedText:(id)arg1;
- (struct _NSRange)insertFilteredText:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertTextSuggestion:(id)arg1;
- (void)insertToken:(id)arg1 atIndex:(long long)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (void)paste:(id)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (id)positionOfTokenAtIndex:(long long)arg1;
- (void)removeTokenAtIndex:(long long)arg1;
- (void)replaceRange:(id)arg1 withAttributedText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceTextualPortionOfRange:(id)arg1 withToken:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)resignFirstResponder;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (id)selectedTokens;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)text;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (id)tokensInRange:(id)arg1;
- (void)updateForBackdropStyle:(unsigned long long)arg1;

@end

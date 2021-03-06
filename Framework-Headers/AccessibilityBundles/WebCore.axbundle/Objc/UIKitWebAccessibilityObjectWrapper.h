//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/__UIKitWebAccessibilityObjectWrapper_super.h>

#import <WebCore/UIFocusItem-Protocol.h>
#import <WebCore/UIFocusItemContainer-Protocol.h>
#import <WebCore/_UIFocusEnvironmentPrivate-Protocol.h>
#import <WebCore/_UIFocusRegionContainer-Protocol.h>

@class NSArray, NSString, UIView;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItemContainer;

@interface UIKitWebAccessibilityObjectWrapper : __UIKitWebAccessibilityObjectWrapper_super <UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer>
{
}

@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, nonatomic) struct CGRect frame; // @dynamic frame;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (BOOL)_isSerializableAccessibilityElement;
+ (void)initialize;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (float)_accessibilityActivationDelay;
- (BOOL)_accessibilityAlwaysSpeakTableHeaders;
- (id)_accessibilityApplication;
- (id)_accessibilityAttributedValue:(id)arg1;
- (id)_accessibilityAttributedValueForElement;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilityCharacterRangeForPosition:(unsigned long long)arg1;
- (struct _NSRange)_accessibilityCheckRowRangeForTrait:(unsigned long long)arg1;
- (id)_accessibilityColorDescription;
- (id)_accessibilityContainerTypes;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityConvertDataArrayToTextMarkerArray:(id)arg1;
- (struct CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(struct CGRect)arg1;
- (id)_accessibilityConvertTextMarkersToDataArray:(id)arg1;
- (id)_accessibilityCurrentStatus;
- (id)_accessibilityCustomRotor:(long long)arg1;
- (id)_accessibilityDOMAttributes;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (long long)_accessibilityExpandedStatus;
- (BOOL)_accessibilityHandlesArrowKeys;
- (BOOL)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (BOOL)_accessibilityHasNativeFocus;
- (BOOL)_accessibilityHasOtherAccessibleChildElements:(id)arg1;
- (BOOL)_accessibilityHasTextOperations;
- (id)_accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)_accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (void)_accessibilityInsertText:(id)arg1;
- (BOOL)_accessibilityIsDataEmpty:(id)arg1;
- (BOOL)_accessibilityIsFrameOutOfBounds;
- (BOOL)_accessibilityIsGroupedParent;
- (BOOL)_accessibilityIsPressed;
- (BOOL)_accessibilityIsScrollDivDescendent;
- (BOOL)_accessibilityIsScrollable;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_accessibilityIsTopMostWebElement;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (long long)_accessibilityLineEndPosition;
- (id)_accessibilityLinePosition:(BOOL)arg1 withMarker:(id)arg2;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (long long)_accessibilityLineStartPosition;
- (id)_accessibilityMakeScrollStatus:(struct CGRect)arg1 scrollPosition:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (id)_accessibilityMarkerForPoint:(struct CGPoint)arg1;
- (id)_accessibilityMarkerPosition:(BOOL)arg1 withMarker:(id)arg2;
- (id)_accessibilityMathEquationRootObject;
- (void)_accessibilityModifySelection:(id)arg1 increase:(BOOL)arg2;
- (BOOL)_accessibilityMoveFocusWithHeading:(unsigned long long)arg1 toElementMatchingQuery:(id)arg2;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (id)_accessibilityNextElementsWithHeading:(unsigned long long)arg1 queryString:(id)arg2 startingFrom:(id)arg3;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)_accessibilityParentLinkContainer;
- (id)_accessibilityParentView;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)_accessibilityProcessRootEquation;
- (struct _NSRange)_accessibilityRangeForTextMarker:(id)arg1;
- (struct _NSRange)_accessibilityRangeForTextMarkers:(id)arg1;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (BOOL)_accessibilityReplaceTextInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (BOOL)_accessibilityRequiresContextIdConversion;
- (id)_accessibilityResolvedEditingStyles;
- (id)_accessibilityRoleDescription;
- (id)_accessibilityScrollAncestor;
- (struct CGPoint)_accessibilityScrollRectToVisible:(struct CGRect)arg1;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilityScrollToVisible;
- (struct _NSRange)_accessibilitySelectedNSRangeForObject;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (struct _NSRange)_accessibilitySelectedTextRangeForHandwritingWithValue:(id)arg1;
- (BOOL)_accessibilitySetNativeFocus;
- (BOOL)_accessibilityShouldScrollRemoteParent;
- (BOOL)_accessibilityShouldSpeakMathEquationTrait;
- (BOOL)_accessibilitySpeakThisCanBeHighlighted;
- (id)_accessibilitySpeakThisString;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilitySupportsPressedState;
- (BOOL)_accessibilitySupportsTextInsertionAndDeletion;
- (id)_accessibilityTextMarkerForPosition:(long long)arg1;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange)arg1 string:(id)arg2 wantsSentences:(BOOL)arg3;
- (id)_accessibilityTextViewTextOperationResponder;
- (unsigned long long)_accessibilityTraitsHelper;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityUserTestingElementBaseType;
- (id)_accessibilityValueForHandwriting;
- (struct CGRect)_accessibilityVisibleFrame;
- (BOOL)_accessibilityVisiblePointHonorsScreenBounds;
- (id)_accessibilityWebAreaURL;
- (id)_accessibilityWebDocumentView;
- (id)_accessibilityWebPageObject;
- (id)_accessibilityWebPageParent;
- (unsigned long long)_axAdjustableTrait;
- (id)_axAncestorTypes;
- (BOOL)_axAreChildrenFocused;
- (void)_axBuildAXTreeFromElement:(id)arg1 outArray:(id)arg2;
- (unsigned long long)_axButtonTrait;
- (unsigned long long)_axContainedByFieldsetTrait;
- (unsigned long long)_axContainedByLandmarkTrait;
- (unsigned long long)_axContainedByListTrait;
- (unsigned long long)_axContainedByTableTrait;
- (BOOL)_axHasMultipleAccessibleChildren:(long long *)arg1;
- (unsigned long long)_axHasTextCursorTrait;
- (unsigned long long)_axHeaderTrait;
- (unsigned long long)_axImageTrait;
- (BOOL)_axIsInteractiveVideo;
- (BOOL)_axIsWK2DataDetectorLink;
- (BOOL)_axIsWebKit2;
- (unsigned long long)_axLinkTrait;
- (unsigned long long)_axMenuItemTrait;
- (unsigned long long)_axNotEnabledTrait;
- (unsigned long long)_axPopupButtonTrait;
- (unsigned long long)_axRadioButtonTrait;
- (unsigned long long)_axSearchFieldTrait;
- (unsigned long long)_axSecureTextFieldTrait;
- (unsigned long long)_axSelectedTrait;
- (void)_axSetAreChildrenFocused:(BOOL)arg1;
- (void)_axSetWebAreaURL:(id)arg1;
- (unsigned long long)_axStaticTextTrait;
- (unsigned long long)_axTabButtonTrait;
- (unsigned long long)_axTextAreaTrait;
- (unsigned long long)_axTextEntryTrait;
- (unsigned long long)_axTextOperationsAvailableTrait;
- (unsigned long long)_axToggleTrait;
- (unsigned long long)_axUpdatesFrequentlyTrait;
- (void)_axVideoEnterFullscreen;
- (void)_axVideoToggleMute;
- (unsigned long long)_axVisitedTrait;
- (id)_axWebAreaURL;
- (unsigned long long)_axWebContentTrait;
- (BOOL)_axWebKitIsAriaExpanded;
- (BOOL)_axWebKitIsAriaPressed;
- (id)_axWebKitSearchKeyForCustomRotorType:(long long)arg1;
- (BOOL)_axWebKitSupportsARIAExpanded;
- (BOOL)_axWebKitSupportsARIAPressed;
- (id)_axWebKitTrueLinkParent;
- (void)_destroyFocusLayer;
- (void)_enqueReorderingNotification:(id)arg1;
- (id)_focusGroupDescriptor;
- (BOOL)_isCheckBox;
- (BOOL)_isIBooks;
- (id)_misspelledWordRotor;
- (void)_performLiveRegionUpdate;
- (void)_performPostScrollStatus:(id)arg1;
- (id)_preferredFocusRegionCoordinateSpace;
- (BOOL)_prepareAccessibilityCall;
- (struct _NSRange)_rangeForWebTextMarkers:(id)arg1;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_repostFocusChangeNotification;
- (void)_repostWebNotificaton:(id)arg1;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_updateFocusLayerFrame;
- (BOOL)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityAttributedValue;
- (struct CGRect)accessibilityBoundsForTextMarkers:(id)arg1;
- (BOOL)accessibilityCanFuzzyHitTest;
- (id)accessibilityContainer;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotors;
- (void)accessibilityDecrement;
- (void)accessibilityElementDidBecomeFocused;
- (struct CGRect)accessibilityFrame;
- (struct CGRect)accessibilityFrameForScrolling;
- (id)accessibilityHint;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (BOOL)accessibilityIsMathTopObject;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityLinkRelationshipType;
- (id)accessibilityMathBaseObject;
- (id)accessibilityMathDenominatorObject;
- (id)accessibilityMathEquation;
- (id)accessibilityMathFencedCloseString;
- (id)accessibilityMathFencedOpenString;
- (id)accessibilityMathNumeratorObject;
- (id)accessibilityMathOverObject;
- (id)accessibilityMathPostscripts;
- (id)accessibilityMathPrescripts;
- (id)accessibilityMathRadicandObject;
- (id)accessibilityMathRootIndexObject;
- (id)accessibilityMathSubscriptObject;
- (id)accessibilityMathSuperscriptObject;
- (id)accessibilityMathType;
- (id)accessibilityMathUnderObject;
- (id)accessibilityPath;
- (id)accessibilityPlaceholderValue;
- (id)accessibilityPostProcessHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityRequired;
- (struct _NSRange)accessibilityRowRange;
- (BOOL)accessibilityScroll:(long long)arg1;
- (id)accessibilitySortDirection;
- (id)accessibilitySpeechHint;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (id)accessibilityValue;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (id)ariaLandmarkRoleDescription;
- (struct CGRect)bounds;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemsInRect:(struct CGRect)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isScreenReaderRunning;
- (void)postChildrenChangedNotification;
- (void)postExpandedChangedNotification;
- (void)postFocusChangeNotification;
- (void)postInvalidStatusChangedNotification;
- (void)postLayoutChangeNotification;
- (void)postLiveRegionChangeNotification;
- (void)postLiveRegionCreatedNotification;
- (void)postLoadCompleteNotification;
- (void)postScreenChangeNotification;
- (void)postScrollStatusChangeNotification;
- (void)postSelectedTextChangeNotification;
- (void)postValueChangedNotification;
- (id)screenReaderVersion;
- (void)setNeedsFocusUpdate;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end


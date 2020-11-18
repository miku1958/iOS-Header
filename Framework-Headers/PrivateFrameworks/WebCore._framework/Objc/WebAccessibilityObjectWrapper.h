//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WebAccessibilityObjectWrapperBase.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase
{
    int m_isAccessibilityElement;
    unsigned long long m_accessibilityTraitsFromAncestor;
}

- (void)_accessibilityActivate;
- (struct WebAccessibilityObjectWrapper *)_accessibilityArticleAncestor;
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;
- (struct WebAccessibilityObjectWrapper *)_accessibilityFieldsetAncestor;
- (struct WebAccessibilityObjectWrapper *)_accessibilityFrameAncestor;
- (BOOL)_accessibilityHasTouchEventListener;
- (BOOL)_accessibilityIsLandmarkRole:(int)arg1;
- (struct WebAccessibilityObjectWrapper *)_accessibilityLandmarkAncestor;
- (struct WebAccessibilityObjectWrapper *)_accessibilityListAncestor;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1;
- (id)_accessibilityParentForSubview:(id)arg1;
- (struct CGPath *)_accessibilityPath;
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1;
- (struct CGPoint)_accessibilityScrollPosition;
- (struct CGSize)_accessibilityScrollSize;
- (BOOL)_accessibilityScrollToVisible;
- (struct CGRect)_accessibilityScrollVisibleRect;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (struct WebAccessibilityObjectWrapper *)_accessibilityTableAncestor;
- (unsigned long long)_accessibilityTextEntryTraits;
- (unsigned long long)_accessibilityTraitsFromAncestors;
- (struct WebAccessibilityObjectWrapper *)_accessibilityTreeAncestor;
- (BOOL)_accessibilityValueIsAutofilled;
- (id)_accessibilityWebDocumentView;
- (BOOL)_addAccessibilityObject:(struct AccessibilityObject *)arg1 toTextMarkerArray:(id)arg2;
- (unsigned long long)_axAdjustableTrait;
- (unsigned long long)_axButtonTrait;
- (unsigned long long)_axContainedByFieldsetTrait;
- (unsigned long long)_axContainedByLandmarkTrait;
- (unsigned long long)_axContainedByListTrait;
- (unsigned long long)_axContainedByTableTrait;
- (unsigned long long)_axHasTextCursorTrait;
- (unsigned long long)_axHeaderTrait;
- (unsigned long long)_axImageTrait;
- (unsigned long long)_axLinkTrait;
- (unsigned long long)_axMenuItemTrait;
- (unsigned long long)_axNotEnabledTrait;
- (unsigned long long)_axPopupButtonTrait;
- (unsigned long long)_axRadioButtonTrait;
- (unsigned long long)_axSearchFieldTrait;
- (unsigned long long)_axSecureTextFieldTrait;
- (unsigned long long)_axSelectedTrait;
- (unsigned long long)_axStaticTextTrait;
- (unsigned long long)_axTabButtonTrait;
- (unsigned long long)_axTextAreaTrait;
- (unsigned long long)_axTextEntryTrait;
- (unsigned long long)_axTextOperationsAvailableTrait;
- (unsigned long long)_axToggleTrait;
- (unsigned long long)_axUpdatesFrequentlyTrait;
- (unsigned long long)_axVisitedTrait;
- (unsigned long long)_axWebContentTrait;
- (RefPtr_59db400e)_convertToDOMRange:(struct _NSRange)arg1;
- (struct _NSRange)_convertToNSRange:(struct Range *)arg1;
- (BOOL)_prepareAccessibilityCall;
- (id)_stringForRange:(struct _NSRange)arg1 attributed:(BOOL)arg2;
- (unsigned long long)accessibilityARIAColumnCount;
- (unsigned long long)accessibilityARIAColumnIndex;
- (id)accessibilityARIACurrentStatus;
- (BOOL)accessibilityARIAIsBusy;
- (BOOL)accessibilityARIALiveRegionIsAtomic;
- (id)accessibilityARIALiveRegionStatus;
- (id)accessibilityARIARelevantStatus;
- (unsigned long long)accessibilityARIARowCount;
- (unsigned long long)accessibilityARIARowIndex;
- (struct CGPoint)accessibilityActivationPoint;
- (unsigned long long)accessibilityBlockquoteLevel;
- (BOOL)accessibilityCanFuzzyHitTest;
- (BOOL)accessibilityCanSetValue;
- (struct CGPoint)accessibilityClickPoint;
- (unsigned long long)accessibilityColumnCount;
- (struct _NSRange)accessibilityColumnRange;
- (id)accessibilityContainer;
- (id)accessibilityDatetimeValue;
- (void)accessibilityDecreaseSelection:(int)arg1;
- (void)accessibilityDecrement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;
- (struct CGRect)accessibilityElementRect;
- (id)accessibilityExpandedTextValue;
- (id)accessibilityFindMatchingObjects:(id)arg1;
- (id)accessibilityFlowToElements;
- (id)accessibilityFocusedUIElement;
- (struct CGRect)accessibilityFrame;
- (BOOL)accessibilityHasPopup;
- (id)accessibilityHeaderElements;
- (id)accessibilityHint;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityIdentifier;
- (void)accessibilityIncreaseSelection:(int)arg1;
- (void)accessibilityIncrement;
- (id)accessibilityInvalidStatus;
- (BOOL)accessibilityIsAttachmentElement;
- (BOOL)accessibilityIsComboBox;
- (BOOL)accessibilityIsDialog;
- (BOOL)accessibilityIsExpanded;
- (BOOL)accessibilityIsMathTopObject;
- (BOOL)accessibilityIsPressed;
- (BOOL)accessibilityIsShowingValidationMessage;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityLinkedElement;
- (id)accessibilityMathBaseObject;
- (id)accessibilityMathDenominatorObject;
- (id)accessibilityMathFencedCloseString;
- (id)accessibilityMathFencedOpenString;
- (long long)accessibilityMathLineThickness;
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
- (void)accessibilityModifySelection:(int)arg1 increase:(BOOL)arg2;
- (void)accessibilityMoveSelectionToMarker:(id)arg1;
- (struct WebAccessibilityObjectWrapper *)accessibilityObjectForTextMarker:(id)arg1;
- (id)accessibilityPlaceholderValue;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (struct WebAccessibilityObjectWrapper *)accessibilityPostProcessHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityRequired;
- (id)accessibilityRoleDescription;
- (unsigned long long)accessibilityRowCount;
- (struct _NSRange)accessibilityRowRange;
- (BOOL)accessibilityScroll:(long long)arg1;
- (id)accessibilitySortDirection;
- (id)accessibilitySpeechHint;
- (BOOL)accessibilitySupportsARIAExpanded;
- (BOOL)accessibilitySupportsARIAPressed;
- (id)accessibilityTitleElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (id)accessibilityValue;
- (id)arrayOfTextForTextMarkers:(id)arg1 attributed:(BOOL)arg2;
- (id)attachmentView;
- (id)attributedStringForRange:(struct _NSRange)arg1;
- (BOOL)containsUnnaturallySegmentedChildren;
- (struct CGPoint)convertPointToScreenSpace:(struct FloatPoint *)arg1;
- (struct CGRect)convertRectToScreenSpace:(struct IntRect *)arg1;
- (void)dealloc;
- (id)description;
- (void)detach;
- (struct AccessibilityObject *)detailParentForObject:(struct AccessibilityObject *)arg1;
- (struct AccessibilityObject *)detailParentForSummaryObject:(struct AccessibilityObject *)arg1;
- (BOOL)determineIsAccessibilityElement;
- (void)disableAttributeCaching;
- (struct _NSRange)elementTextRange;
- (id)elementsForRange:(struct _NSRange)arg1;
- (void)enableAttributeCaching;
- (BOOL)fileUploadButtonReturnsValueInTitle;
- (struct CGRect)frameForTextMarkers:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)initWithAccessibilityObject:(struct AccessibilityObject *)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isAttachment;
- (BOOL)isSVGGroupElement;
- (long long)lengthForTextMarkers:(id)arg1;
- (id)lineEndMarkerForMarker:(id)arg1;
- (id)lineStartMarkerForMarker:(id)arg1;
- (id)nextMarkerForCharacterOffset:(struct CharacterOffset *)arg1;
- (id)nextMarkerForMarker:(id)arg1;
- (long long)positionForTextMarker:(id)arg1;
- (void)postChildrenChangedNotification;
- (void)postExpandedChangedNotification;
- (void)postFocusChangeNotification;
- (void)postInvalidStatusChangedNotification;
- (void)postLayoutChangeNotification;
- (void)postLiveRegionChangeNotification;
- (void)postLiveRegionCreatedNotification;
- (void)postLoadCompleteNotification;
- (void)postScrollStatusChangeNotification;
- (void)postSelectedTextChangeNotification;
- (void)postValueChangedNotification;
- (id)previousMarkerForCharacterOffset:(struct CharacterOffset *)arg1;
- (id)previousMarkerForMarker:(id)arg1;
- (RefPtr_59db400e)rangeForTextMarkers:(id)arg1;
- (RefPtr_59db400e)rangeFromMarkers:(id)arg1 withText:(id)arg2;
- (id)rectsForSelectionRects:(const Vector_2a2f4e8a *)arg1;
- (id)selectedTextMarker;
- (id)selectionRangeString;
- (id)startOrEndTextMarkerForTextMarkers:(id)arg1 isStart:(BOOL)arg2;
- (id)stringForRange:(struct _NSRange)arg1;
- (id)stringForTextMarkers:(id)arg1;
- (BOOL)stringValueShouldBeUsedInLabel;
- (struct AccessibilityTableCell *)tableCellParent;
- (struct AccessibilityTable *)tableParent;
- (id)textMarkerForPoint:(struct CGPoint)arg1;
- (id)textMarkerForPosition:(long long)arg1;
- (id)textMarkerRange;
- (id)textMarkerRangeForMarkers:(id)arg1;
- (id)textMarkerRangeForSelection;
- (id)textMarkerRangeFromMarkers:(id)arg1 withText:(id)arg2;
- (id)textMarkersForRange:(RefPtr_59db400e)arg1;
- (id)textRectsFromMarkers:(id)arg1 withText:(id)arg2;
- (struct AccessibilityObject *)treeItemParentForObject:(struct AccessibilityObject *)arg1;

@end


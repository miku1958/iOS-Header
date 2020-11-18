//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (AXPrivCategory)
+ (void)_accessibilityClearProcessedClasses:(id)arg1;
+ (BOOL)_accessibilityHasUnitTestingOrientation;
+ (void)_accessibilitySetUnitTestingOrientation:(long long)arg1;
+ (id)_accessibilityTextChecker;
+ (void)_accessibilityUndoAttributedDecisionCaching:(id)arg1;
+ (long long)_accessibilityUnitTestingOrientation;
+ (void)_accessibilityUnsetUnitTestingOrientation;
- (BOOL)__accessibilityReadAllOnFocus;
- (id)__accessibilityRetrieveFrameOrPathDelegate;
- (BOOL)__accessibilitySupportsActivateAction;
- (BOOL)__accessibilitySupportsSecondaryActivateAction;
- (void)__accessibilityUnregister:(void *)arg1 shouldRelease:(BOOL)arg2;
- (struct CGPoint)__accessibilityVisibleScrollArea:(BOOL)arg1;
- (id)_accessibilityAXAttributedHint;
- (id)_accessibilityAXAttributedLabel;
- (id)_accessibilityAXAttributedValue;
- (id)_accessibilityAccessibleAncestor;
- (id)_accessibilityAccessibleDescendants;
- (float)_accessibilityActivationDelay;
- (id)_accessibilityActiveKeyboard;
- (id)_accessibilityActiveURL;
- (void)_accessibilityAddMispellingsToAttributedString:(id)arg1;
- (void)_accessibilityAddRecentlyActivatedBundleIdFromSwitcher:(id)arg1;
- (id)_accessibilityAddToDragSessionCustomAction;
- (void)_accessibilityAddTrait:(unsigned long long)arg1;
- (id)_accessibilityAllContextDescriptors;
- (id)_accessibilityAllDragSourceDescriptors;
- (id)_accessibilityAllDropPointDescriptors;
- (BOOL)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)_accessibilityAllowedGeometryOverlap;
- (double)_accessibilityAllowedGeometryOverlapX;
- (BOOL)_accessibilityAllowsAlternativeCharacterActivation;
- (BOOL)_accessibilityAlternateActionForURL:(id)arg1;
- (BOOL)_accessibilityAlwaysNo;
- (BOOL)_accessibilityAlwaysOrderedFirst;
- (BOOL)_accessibilityAlwaysSpeakTableHeaders;
- (BOOL)_accessibilityAlwaysYes;
- (id)_accessibilityAncestorForSiblingsWithType:(unsigned long long)arg1;
- (id)_accessibilityAncestorIsAccessibilityElementsHidden;
- (id)_accessibilityAncestorIsKindOf:(Class)arg1;
- (BOOL)_accessibilityAnimationsInProgress;
- (void)_accessibilityAnnouncementComplete:(id)arg1;
- (id)_accessibilityAppSwitcherApps;
- (id)_accessibilityApplication;
- (BOOL)_accessibilityApplicationIsRTL;
- (int)_accessibilityApplicationOrientation;
- (id)_accessibilityApplicationSemanticContext;
- (id)_accessibilityApplicationWindowContextIDs;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (id)_accessibilityAuditIssuesWithOptions:(id)arg1;
- (id)_accessibilityAutomaticIdentifier;
- (id)_accessibilityAwayAlertElements;
- (BOOL)_accessibilityBackingElementIsValid;
- (BOOL)_accessibilityBannerIsSticky;
- (id)_accessibilityBaseHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityBasePerformOrbGesture:(long long)arg1;
- (BOOL)_accessibilityBaseScrollToVisible;
- (BOOL)_accessibilityBookShowsDualPages;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (id)_accessibilityBriefLabel;
- (id)_accessibilityBundleIdentifier;
- (BOOL)_accessibilityCameraIrisOpen;
- (BOOL)_accessibilityCanBeConsideredAsMainWindow;
- (BOOL)_accessibilityCanBeFirstResponder;
- (BOOL)_accessibilityCanBeFirstResponderWhenNotAnElement;
- (BOOL)_accessibilityCanDeleteTableViewCell;
- (BOOL)_accessibilityCanDismissPopoverController:(id)arg1;
- (BOOL)_accessibilityCanDisplayMultipleControllers;
- (BOOL)_accessibilityCanPerformAction:(int)arg1;
- (BOOL)_accessibilityCanPerformEscapeAction;
- (BOOL)_accessibilityCanScrollInAtLeastOneDirection;
- (void)_accessibilityChangeToKeyplane:(id)arg1;
- (struct CGRect)_accessibilityChildrenUnionContentFrame;
- (id)_accessibilityCirclePathBasedOnBoundsWidth;
- (void)_accessibilityCleanupContainerElementReferences;
- (id)_accessibilityCollectionViewCellContentSubviews;
- (unsigned long long)_accessibilityColumnCount;
- (struct _NSRange)_accessibilityColumnRange;
- (long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2;
- (struct CGRect)_accessibilityCompareFrameForScrollParent:(id)arg1 frame:(struct CGRect)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4;
- (BOOL)_accessibilityContainedByTableLogicIsEnabledOutsideOfWebContext;
- (id)_accessibilityContainerForAccumulatingCustomRotorItems;
- (id)_accessibilityContainerInDirection:(BOOL)arg1;
- (id)_accessibilityContainerTypes;
- (id)_accessibilityContainingParentForOrdering;
- (struct CGRect)_accessibilityContentFrame;
- (struct CGPoint)_accessibilityContentOffset;
- (id)_accessibilityContextDescriptors;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityControlDescendantWithAction:(SEL)arg1;
- (id)_accessibilityControlDescendantWithTarget:(id)arg1;
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;
- (void)_accessibilityConvertStyleAttributesToAccessibility:(id)arg1;
- (id)_accessibilityConvertSystemBoundedPathToContextSpace:(id)arg1;
- (struct CGPoint)_accessibilityConvertSystemBoundedScreenPointToContextSpace:(struct CGPoint)arg1;
- (struct CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(struct CGRect)arg1;
- (id)_accessibilityCurrentStatus;
- (id)_accessibilityCustomActionGroupIdentifier;
- (id)_accessibilityCustomActionNamesAndIdentifiers;
- (id)_accessibilityCustomActions;
- (id)_accessibilityCustomRotorResultHelper:(id)arg1 array:(id)arg2;
- (long long)_accessibilityCustomRotorTypeForString:(id)arg1;
- (void)_accessibilityCut;
- (id)_accessibilityDOMAttributes;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (unsigned long long)_accessibilityDatePickerComponentType;
- (id)_accessibilityDateTimePickerValues;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (void)_accessibilityDelete;
- (BOOL)_accessibilityDescendantElementAtIndexPathIsValid:(id)arg1;
- (id)_accessibilityDescendantOfType:(Class)arg1;
- (void)_accessibilityDetectAnimationsNonActive;
- (BOOL)_accessibilityDidDeleteTableViewCell;
- (BOOL)_accessibilityDidSetOpaqueElementProvider;
- (struct CGRect)_accessibilityDirectInteractionFrame;
- (BOOL)_accessibilityDismissAlternativeKeyPicker;
- (BOOL)_accessibilityDispatchKeyboardAction:(id)arg1;
- (unsigned int)_accessibilityDisplayId;
- (id)_accessibilityDisplayPathForScreenPath:(id)arg1;
- (struct CGPoint)_accessibilityDisplayPointForSceneReferencePoint:(struct CGPoint)arg1;
- (struct CGRect)_accessibilityDisplayRectForSceneReferenceRect:(struct CGRect)arg1;
- (float)_accessibilityDistance:(struct CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3;
- (float)_accessibilityDistanceFromEndOfRoad:(struct CGPoint)arg1 forAngle:(float)arg2;
- (id)_accessibilityDragSourceDescriptorDictionaryRepresentations;
- (id)_accessibilityDropPointDescriptorDictionaryRepresentations;
- (id)_accessibilityElementCommunityIdentifier;
- (BOOL)_accessibilityElementShouldBeInvalid;
- (id)_accessibilityElementStoredUserLabel;
- (BOOL)_accessibilityElementVisibilityAffectsLayout;
- (id)_accessibilityElements;
- (id)_accessibilityElementsForSearchParameter:(id)arg1;
- (id)_accessibilityEquivalenceTag;
- (long long)_accessibilityExpandedStatus;
- (id)_accessibilityFilenameForAttachmentCID:(id)arg1;
- (id)_accessibilityFilterInteractionLocationDescriptorsForVisible:(id)arg1;
- (id)_accessibilityFindAXDescendants:(CDUnknownBlockType)arg1 byAddingElements:(CDUnknownBlockType)arg2;
- (id)_accessibilityFindAncestor:(CDUnknownBlockType)arg1 startWithSelf:(BOOL)arg2;
- (id)_accessibilityFindAnyAXDescendant:(CDUnknownBlockType)arg1 byAddingElements:(CDUnknownBlockType)arg2;
- (id)_accessibilityFindDescendant:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindElementInDirection:(long long)arg1 searchType:(long long)arg2 allowOutOfBoundsChild:(BOOL)arg3;
- (void)_accessibilityFindSearchResult:(BOOL)arg1 withString:(id)arg2;
- (id)_accessibilityFindSubviewDescendant:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindSubviewDescendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindUnsortedSubviewDescendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindViewAncestor:(CDUnknownBlockType)arg1 startWithSelf:(BOOL)arg2;
- (id)_accessibilityFirstElementForFocus;
- (id)_accessibilityFirstOpaqueElement;
- (id)_accessibilityFirstOpaqueElementForFocus;
- (id)_accessibilityFirstResponderForKeyWindow;
- (id)_accessibilityFirstResponderForWindow:(id)arg1;
- (id)_accessibilityFirstVisibleItem;
- (id)_accessibilityFocusAbsoluteFirstOpaqueElementForTechnology:(id)arg1;
- (id)_accessibilityFocusAbsoluteLastOpaqueElementForTechnology:(id)arg1;
- (struct CGRect)_accessibilityFocusableFrameForZoom;
- (double)_accessibilityFontSize;
- (struct CGRect)_accessibilityFrameForRange:(struct _NSRange)arg1;
- (struct CGRect)_accessibilityFrameForSorting;
- (id)_accessibilityFuzzyHitTestElements;
- (struct CGRect)_accessibilityGesturePracticeRegion;
- (id)_accessibilityGuideElementHeaderText;
- (id)_accessibilityGuideElementInDirection:(BOOL)arg1;
- (void)_accessibilityHandleATFocused:(BOOL)arg1 assistiveTech:(id)arg2;
- (BOOL)_accessibilityHandlePublicScroll:(long long)arg1;
- (BOOL)_accessibilityHandwritingActivateKeyboardDeleteKey;
- (BOOL)_accessibilityHandwritingActivateKeyboardReturnKey;
- (id)_accessibilityHandwritingAncestor;
- (BOOL)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (BOOL)_accessibilityHandwritingAttributeAcceptsRawInput;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSetsForKeyboardType:(long long)arg1;
- (BOOL)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (id)_accessibilityHandwritingAttributeLanguage;
- (int)_accessibilityHandwritingAttributePreferredCharacterSet;
- (int)_accessibilityHandwritingAttributePreferredCharacterSetForKeyboardType:(long long)arg1;
- (BOOL)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (BOOL)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (id)_accessibilityHandwritingAttributes;
- (BOOL)_accessibilityHasBadge;
- (BOOL)_accessibilityHasDescendantOfType:(Class)arg1;
- (BOOL)_accessibilityHasDragDestinations;
- (BOOL)_accessibilityHasDragSources;
- (BOOL)_accessibilityHasOrderedChildren;
- (BOOL)_accessibilityHasTextOperations;
- (BOOL)_accessibilityHasVariantKeys;
- (id)_accessibilityHeaderElement;
- (id)_accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)_accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (id)_accessibilityHeadingLevel;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityHitTestReverseOrder;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityHitTestSupplementaryViews:(struct CGPoint)arg1 event:(id)arg2;
- (id)_accessibilityHitTestSupplementaryViews:(id)arg1 point:(struct CGPoint)arg2 withEvent:(id)arg3;
- (id)_accessibilityHitTestingObscuredScreenAllowedViews;
- (BOOL)_accessibilityHitTestsStatusBar;
- (long long)_accessibilityHorizontalSizeClass;
- (void)_accessibilityIgnoreNextNotification:(unsigned int)arg1;
- (void)_accessibilityIgnoreNextPostPasteboardTextOperation:(id)arg1;
- (BOOL)_accessibilityIncludeDuringContentReading;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (long long)_accessibilityIndexForPickerString:(id)arg1;
- (id)_accessibilityIndexPath;
- (struct _NSRange)_accessibilityIndexPathAsRange;
- (unsigned long long)_accessibilityInheritedTraits;
- (id)_accessibilityInputIdentifierForKeyboard;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (long long)_accessibilityInterfaceOrientationForScreenCoordinates;
- (id)_accessibilityInternalTextLinkCustomRotors;
- (id)_accessibilityInternalTextLinks;
- (BOOL)_accessibilityIsAccessibilityUIServer;
- (BOOL)_accessibilityIsAlertContainer;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityIsAwayAlertElementNew;
- (BOOL)_accessibilityIsDescendantOfElement:(id)arg1;
- (BOOL)_accessibilityIsDictating;
- (BOOL)_accessibilityIsDraggableElementAttribute;
- (BOOL)_accessibilityIsEscapable;
- (BOOL)_accessibilityIsFirstElementForFocus;
- (BOOL)_accessibilityIsFirstSibling;
- (BOOL)_accessibilityIsFirstSiblingForType:(unsigned long long)arg1;
- (BOOL)_accessibilityIsFrameOutOfBounds;
- (BOOL)_accessibilityIsFrameOutOfBoundsConsideringScrollParents:(BOOL)arg1;
- (BOOL)_accessibilityIsGuideElement;
- (BOOL)_accessibilityIsInAppSwitcher;
- (BOOL)_accessibilityIsInFolder;
- (BOOL)_accessibilityIsInTabBar;
- (BOOL)_accessibilityIsInTableCell;
- (BOOL)_accessibilityIsInternationalKeyboardKey;
- (BOOL)_accessibilityIsIsolatedWindow;
- (BOOL)_accessibilityIsLastSibling;
- (BOOL)_accessibilityIsLastSiblingForType:(unsigned long long)arg1;
- (BOOL)_accessibilityIsMainWindow;
- (BOOL)_accessibilityIsMap;
- (BOOL)_accessibilityIsMathTouchExplorationView;
- (BOOL)_accessibilityIsNotFirstElement;
- (BOOL)_accessibilityIsPressed;
- (BOOL)_accessibilityIsRTL;
- (BOOL)_accessibilityIsRealtimeElement;
- (BOOL)_accessibilityIsRemoteElement;
- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)_accessibilityIsScrollable;
- (BOOL)_accessibilityIsSoftwareKeyboardMimic;
- (BOOL)_accessibilityIsSortPriorityContainer;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_accessibilityIsStarkElement;
- (BOOL)_accessibilityIsTableCell;
- (BOOL)_accessibilityIsTitleElement;
- (BOOL)_accessibilityIsTouchContainer;
- (BOOL)_accessibilityIsTourGuideRunning;
- (BOOL)_accessibilityIsUserInteractionEnabled;
- (BOOL)_accessibilityIsUsingRemoteParentActivateAction;
- (BOOL)_accessibilityIsViewDescendantOfElement:(id)arg1;
- (BOOL)_accessibilityIsVisibleByCompleteHitTest;
- (BOOL)_accessibilityIsWebDocumentView;
- (BOOL)_accessibilityIterateParentsForTestBlock:(CDUnknownBlockType)arg1;
- (void)_accessibilityIterateScrollParentsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_accessibilityIterateScrollParentsUsingBlock:(CDUnknownBlockType)arg1 includeSelf:(BOOL)arg2;
- (struct CGAffineTransform)_accessibilityJailTransform;
- (void)_accessibilityJumpToTableIndex:(id)arg1;
- (BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
- (id)_accessibilityKeyboardKeyForString:(id)arg1;
- (BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (BOOL)_accessibilityLanguageOverriddesUser;
- (id)_accessibilityLastElementsUpdatedWithContainerElementReferences;
- (BOOL)_accessibilityLastHitTestNearBorder;
- (id)_accessibilityLastOpaqueElement;
- (id)_accessibilityLaunchableApps;
- (double)_accessibilityLeftOpaqueScrollViewContentOffsetLimit;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (long long)_accessibilityLineEndPosition;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (long long)_accessibilityLineStartPosition;
- (id)_accessibilityLinkedUIElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityLoadAccessibilityInformationSupplementaryItems;
- (BOOL)_accessibilityLoadURL:(id)arg1;
- (id)_accessibilityMapDetailedInfoAtPoint:(struct CGPoint)arg1;
- (long long)_accessibilityMapFeatureType;
- (id)_accessibilityMarkerForPoint:(struct CGPoint)arg1;
- (id)_accessibilityMarkerLineEndsForMarkers:(id)arg1;
- (id)_accessibilityMarkersForPoints:(id)arg1;
- (id)_accessibilityMarkersForRange:(struct _NSRange)arg1;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (double)_accessibilityMaxValue;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (double)_accessibilityMinValue;
- (id)_accessibilityMoveFocusToNextOpaqueElementForTechnology:(id)arg1 direction:(long long)arg2 searchType:(long long)arg3 range:(struct _NSRange)arg4;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (unsigned long long)_accessibilityNativeTraits;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)_accessibilityObscuredScreenAllowedViews;
- (id)_accessibilityObscuredScreenAllowedWindows;
- (struct CGPoint)_accessibilityOffsetForOpaqueElementDirection:(long long)arg1;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (id)_accessibilityOpaqueElementParent;
- (BOOL)_accessibilityOpaqueElementProvider;
- (void)_accessibilityOpaqueElementScrollCleanup;
- (void)_accessibilityOpaqueElementScrollToDirection:(long long)arg1;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)_accessibilityOpaqueHeaderElementInDirection:(long long)arg1 childElement:(id)arg2;
- (BOOL)_accessibilityOpaqueScrollViewSupportsLastResortScrollBeyondBounds;
- (id)_accessibilityOrderedChildrenContainer;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (BOOL)_accessibilityOverridesInvisibility;
- (BOOL)_accessibilityOverridesLabelValueHintSelector:(SEL)arg1;
- (id)_accessibilityPageContent;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (id)_accessibilityPageTextMarkerRange;
- (id)_accessibilityParentForFindingScrollParent;
- (id)_accessibilityParentTableView;
- (id)_accessibilityParentView;
- (void)_accessibilityPaste;
- (BOOL)_accessibilityPerformCustomActionWithIdentifier:(id)arg1;
- (BOOL)_accessibilityPerformEscape;
- (BOOL)_accessibilityPerformLegacyCustomAction:(id)arg1;
- (BOOL)_accessibilityPerformOrbGesture:(long long)arg1;
- (id)_accessibilityPerformPublicCustomRotorSearch:(id)arg1 searchDirection:(long long)arg2 currentItem:(id)arg3;
- (BOOL)_accessibilityPerformUserTestingAction:(id)arg1;
- (id)_accessibilityPhotoDescription;
- (long long)_accessibilityPickerType;
- (void)_accessibilityPlayKeyboardClickSound;
- (void)_accessibilityPlaySystemSound:(int)arg1;
- (void)_accessibilityPostAnnouncement:(id)arg1;
- (void)_accessibilityPostNotificationHelper:(id)arg1;
- (void)_accessibilityPostPasteboardTextForOperation:(id)arg1;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString *)arg1;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString *)arg1 insertedText:(id)arg2;
- (void)_accessibilityPostValueChangedNotificationWithInsertedText:(id)arg1;
- (SEL)_accessibilityPotentiallyAttributedSelectorForNonAttributedSelector:(SEL)arg1 attributedSelector:(SEL)arg2;
- (id)_accessibilityPotentiallyAttributedValueForNonAttributedSelector:(SEL)arg1 attributedSelector:(SEL)arg2;
- (id)_accessibilityPreferredScrollActions;
- (BOOL)_accessibilityPrefersNonAttributedAttributeWithOverrideSelector:(SEL)arg1 nonAttributedSelector:(SEL)arg2 attributedSelector:(SEL)arg3;
- (BOOL)_accessibilityPrefersNonAttributedHint;
- (BOOL)_accessibilityPrefersNonAttributedLabel;
- (BOOL)_accessibilityPrefersNonAttributedValue;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)_accessibilityPublicCustomRotorIdForSystemType:(id)arg1;
- (id)_accessibilityPublicCustomRotorName:(id)arg1;
- (BOOL)_accessibilityPublicCustomRotorVisibleInTouchRotor:(id)arg1;
- (id)_accessibilityPublicCustomRotors;
- (struct _NSRange)_accessibilityRangeForLineNumber:(long long)arg1;
- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (struct _NSRange)_accessibilityRangeForTextMarker:(id)arg1;
- (id)_accessibilityRawIsSpeakThisElement;
- (struct _NSRange)_accessibilityRawRangeForUITextRange:(id)arg1;
- (void)_accessibilityRawSetIsSpeakThisElement:(id)arg1;
- (BOOL)_accessibilityReadAllContinuesWithScroll;
- (BOOL)_accessibilityReadAllOnFocus;
- (BOOL)_accessibilityRealtimeCompleted;
- (BOOL)_accessibilityRealtimeHasUnread;
- (id)_accessibilityRecentlyActivatedApplicationBundleIdentifiers;
- (void)_accessibilityRegisterForDictationLifecycleNotifications;
- (long long)_accessibilityReinterpretVoiceOverCommand:(long long)arg1;
- (id)_accessibilityRemoteApplication;
- (id)_accessibilityRemoteParent;
- (void)_accessibilityRemoveRecentlyActivatedBundleIdFromSwitcher:(id)arg1;
- (void)_accessibilityRemoveTrait:(unsigned long long)arg1;
- (void)_accessibilityReplace;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (BOOL)_accessibilityRepresentsInfiniteCollection;
- (void)_accessibilityResetContainerElements;
- (BOOL)_accessibilityRespectsTableScrollEnabledFlag;
- (id)_accessibilityResponderChainForKeyWindow;
- (id)_accessibilityResponderChainForWindow:(id)arg1;
- (id)_accessibilityResponderElement;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (id)_accessibilityRetieveHeaderElementText;
- (id)_accessibilityRetrieveImagePathLabel:(id)arg1;
- (id)_accessibilityRetrieveLinkedUIElementsFromContainerChain;
- (id)_accessibilityRetrieveLocalizationBundleID;
- (id)_accessibilityRetrieveLocalizationBundlePath;
- (id)_accessibilityRetrieveLocalizedStringKey;
- (id)_accessibilityRetrieveLocalizedStringTableName;
- (double)_accessibilityRightOpaqueScrollViewContentOffsetLimit;
- (BOOL)_accessibilityRoadContainsTrackingPoint:(struct CGPoint)arg1;
- (id)_accessibilityRoleDescription;
- (id)_accessibilityRotorTypeStringForCustomRotor:(long long)arg1;
- (unsigned long long)_accessibilityRowCount;
- (struct _NSRange)_accessibilityRowRange;
- (BOOL)_accessibilitySavePhotoLabel:(id)arg1;
- (id)_accessibilityScannerElementsGrouped:(BOOL)arg1 shouldIncludeNonScannerElements:(BOOL)arg2;
- (BOOL)_accessibilityScannerShouldUseActivateInPointMode;
- (BOOL)_accessibilityScrollAcrossPageBoundaries;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1 alwaysAllowRefreshAction:(BOOL)arg2;
- (BOOL)_accessibilityScrollDownPage;
- (BOOL)_accessibilityScrollLeftPage;
- (BOOL)_accessibilityScrollNextPage;
- (void)_accessibilityScrollOpaqueElementIntoView:(long long)arg1 previousScroller:(id)arg2;
- (BOOL)_accessibilityScrollPageInDirection:(long long)arg1 shouldSendScrollFailed:(BOOL)arg2;
- (id)_accessibilityScrollParent;
- (id)_accessibilityScrollParentForComparingByXAxis;
- (BOOL)_accessibilityScrollPreviousPage;
- (struct CGPoint)_accessibilityScrollRectToVisible:(struct CGRect)arg1;
- (BOOL)_accessibilityScrollRightPage;
- (SEL)_accessibilityScrollSelectorForDirection:(long long)arg1;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (void)_accessibilityScrollToPoint:(struct CGPoint)arg1;
- (BOOL)_accessibilityScrollToVisible;
- (BOOL)_accessibilityScrollToVisibleForNextElementRetrieval:(long long)arg1;
- (BOOL)_accessibilityScrollUpPage;
- (BOOL)_accessibilityScrollingEnabled;
- (id)_accessibilitySearchSubtreesAfterChildElement:(id)arg1 direction:(long long)arg2 searchType:(long long)arg3 allowOutOfBoundsChild:(BOOL)arg4 range:(struct _NSRange)arg5;
- (BOOL)_accessibilitySecondaryActivate;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (struct _NSRange)_accessibilitySelectedNSRangeForObject;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (BOOL)_accessibilitySelfFoundByHitTesting;
- (id)_accessibilitySemanticContext;
- (id)_accessibilitySemanticContextForElement:(id)arg1;
- (void)_accessibilitySendPageScrollFailedIfNecessary;
- (BOOL)_accessibilityServesAsContainingParentForOrdering;
- (BOOL)_accessibilityServesAsFirstElement;
- (BOOL)_accessibilityServesAsFirstResponder;
- (void)_accessibilitySetAllowedGeometryOverlap:(double)arg1;
- (void)_accessibilitySetAnimationsInProgress:(BOOL)arg1;
- (void)_accessibilitySetApplicationOrientation:(int)arg1;
- (void)_accessibilitySetAuditIssueForType:(unsigned long long)arg1;
- (void)_accessibilitySetCameraIrisOpen:(BOOL)arg1;
- (void)_accessibilitySetContextDescriptors:(id)arg1;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (void)_accessibilitySetCurrentWordInPageContext:(id)arg1;
- (void)_accessibilitySetIsSortPriorityContainer:(BOOL)arg1;
- (void)_accessibilitySetIsSpeakThisElement:(BOOL)arg1;
- (void)_accessibilitySetIsTourGuideRunning:(BOOL)arg1;
- (void)_accessibilitySetLastElementsUpdatedWithContainerElementReferences:(id)arg1;
- (void)_accessibilitySetNavigationControllerInset:(struct UIEdgeInsets)arg1;
- (void)_accessibilitySetObscuredScreenAllowedWindows:(id)arg1;
- (void)_accessibilitySetOpaqueElementScrollsContentIntoView:(BOOL)arg1;
- (void)_accessibilitySetOverridesInvisibility:(BOOL)arg1;
- (void)_accessibilitySetRoleDescription:(id)arg1;
- (void)_accessibilitySetRowRange:(struct _NSRange)arg1;
- (void)_accessibilitySetScrollAcrossPageBoundaries:(BOOL)arg1;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (void)_accessibilitySetShouldHitTestFallBackToNearestChild:(BOOL)arg1;
- (void)_accessibilitySetShouldPreventOpaqueScrolling:(BOOL)arg1;
- (void)_accessibilitySetSortPriority:(long long)arg1;
- (void)_accessibilitySetSupportsMediaAnalysis:(BOOL)arg1;
- (void)_accessibilitySetUserDefinedIsGuideElement:(BOOL)arg1;
- (void)_accessibilitySetUsesScrollParentForOrdering:(BOOL)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (void)_accessibilitySetVisibleContentInset:(struct UIEdgeInsets)arg1;
- (void)_accessibilitySetWantsOpaqueElementProviders:(BOOL)arg1;
- (BOOL)_accessibilityShouldAnnounceFontInfo;
- (BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
- (BOOL)_accessibilityShouldAvoidAnnouncing;
- (BOOL)_accessibilityShouldAvoidScrollingCollectionViewCells;
- (BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
- (BOOL)_accessibilityShouldInheritTraits;
- (BOOL)_accessibilityShouldPerformIncrementOrDecrement;
- (BOOL)_accessibilityShouldPreventOpaqueScrolling;
- (BOOL)_accessibilityShouldReleaseAfterUnregistration;
- (BOOL)_accessibilityShouldScrollRemoteParent;
- (BOOL)_accessibilityShouldSpeakMathEquationTrait;
- (BOOL)_accessibilityShouldSpeakScrollStatusOnEntry;
- (BOOL)_accessibilityShouldSuppressCustomActionsHint;
- (BOOL)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
- (BOOL)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3;
- (BOOL)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3 sawAXElement:(BOOL *)arg4;
- (id)_accessibilitySoftwareMimicKeyboard;
- (BOOL)_accessibilitySortCollectionViewLogically;
- (long long)_accessibilitySortPriority;
- (id)_accessibilitySortPriorityContainer;
- (long long)_accessibilitySortPriorityWithReturningView:(id *)arg1;
- (id)_accessibilitySortedElementsWithin;
- (BOOL)_accessibilitySpeakThisIgnoresAccessibilityElementStatus;
- (id)_accessibilitySpeakThisString;
- (id)_accessibilitySpeakThisStringValue;
- (id)_accessibilityStatusBar;
- (id)_accessibilityString:(id)arg1 withSpeechHint:(id)arg2;
- (id)_accessibilityStringForLabelKeyValues:(id)arg1;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilitySupportGesturesAttributes;
- (id)_accessibilitySupportedLanguages;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilitySupportsDirectioOrbManipulation;
- (BOOL)_accessibilitySupportsFrameForRange;
- (BOOL)_accessibilitySupportsHandwriting;
- (BOOL)_accessibilitySupportsMediaAnalysis;
- (BOOL)_accessibilitySupportsMultipleCustomRotorTitles;
- (BOOL)_accessibilitySupportsPressedState;
- (BOOL)_accessibilitySupportsRangeForLineNumber;
- (BOOL)_accessibilitySupportsSemanticContext;
- (id)_accessibilitySwipeIsland;
- (id)_accessibilitySwipeIslandIdentifier;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (id)_accessibilityTabBarAncestor;
- (BOOL)_accessibilityTableCellUsesDetailTextAsValue;
- (id)_accessibilityTableViewCellContentSubviews;
- (id)_accessibilityTableViewCellWithRowIndex:(long long)arg1 column:(long long)arg2 tableView:(id)arg3;
- (id)_accessibilityTextChecker;
- (struct CGRect)_accessibilityTextCursorFrame;
- (id)_accessibilityTextFieldText;
- (id)_accessibilityTextInputElement;
- (id)_accessibilityTextInputElementRange;
- (struct _NSRange)_accessibilityTextInputElementRangeAsNSRange;
- (id)_accessibilityTextMarkerForPosition:(long long)arg1;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (BOOL)_accessibilityTextOperationAction:(id)arg1;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextRangeFromNSRange:(struct _NSRange)arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityTouchContainer;
- (BOOL)_accessibilityTouchContainerShouldOutputBraille;
- (id)_accessibilityTraitsAsHumanReadableStrings:(unsigned long long)arg1;
- (id)_accessibilityTraitsInspectorHumanReadable;
- (BOOL)_accessibilityTriggerDictationFromPath:(id)arg1;
- (BOOL)_accessibilityTryScrollWithSelector:(SEL)arg1 shouldSendScrollFailed:(BOOL)arg2;
- (id)_accessibilityUnignoredDescendant;
- (void)_accessibilityUnregister;
- (id)_accessibilityUpcomingRoadsForPoint:(struct CGPoint)arg1 forAngle:(float)arg2;
- (void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1;
- (BOOL)_accessibilityUpdatesOnActivationAfterDelay;
- (BOOL)_accessibilityUseContextlessPassthroughForDrag;
- (BOOL)_accessibilityUseWindowBoundsForOutOfBoundsChecking;
- (id)_accessibilityUserDefinedGuideElementHeaderText;
- (BOOL)_accessibilityUserDefinedIsGuideElement;
- (id)_accessibilityUserDefinedLinkedUIElements;
- (id)_accessibilityUserTestingActionIdentifiers;
- (id)_accessibilityUserTestingActions;
- (id)_accessibilityUserTestingVisibleAncestor;
- (id)_accessibilityUserTestingVisibleCells;
- (id)_accessibilityUserTestingVisibleSections;
- (BOOL)_accessibilityUsesChildrenFramesForSorting;
- (BOOL)_accessibilityUsesScrollParentForOrdering;
- (BOOL)_accessibilityUsesSpecialKeyboardDismiss;
- (id)_accessibilityValueForRange:(struct _NSRange *)arg1;
- (id)_accessibilityVariantKeys;
- (long long)_accessibilityVerticalSizeClass;
- (double)_accessibilityViewAlpha;
- (id)_accessibilityViewAncestorIsKindOf:(Class)arg1;
- (id)_accessibilityViewController;
- (struct UIEdgeInsets)_accessibilityVisibleContentInset;
- (id)_accessibilityVisibleElements;
- (struct CGRect)_accessibilityVisibleFrame;
- (double)_accessibilityVisibleItemDenominator;
- (id)_accessibilityVisibleItemInList;
- (id)_accessibilityVisibleOpaqueElements;
- (struct CGPoint)_accessibilityVisiblePoint;
- (struct CGPoint)_accessibilityVisiblePointHitTestingAnyElement:(BOOL)arg1;
- (BOOL)_accessibilityVisiblePointHonorsScreenBounds;
- (struct CGPoint)_accessibilityVisibleScrollArea:(BOOL)arg1;
- (unsigned long long)_accessibilityVisionDetectionOptions;
- (BOOL)_accessibilityWantsOpaqueElementProviders;
- (void)_accessibilityWarmPrefersNonAttributedLabelValueHintCache;
- (id)_accessibilityWatchAutoSpeakElements;
- (id)_accessibilityWebAreaURL;
- (BOOL)_accessibilityWebSearchResultsActive;
- (BOOL)_accessibilityWebViewIsLoading;
- (id)_accessibilityWindow;
- (BOOL)_accessibilityWindowVisible;
- (double)_accessibilityZoomScale;
- (id)_accessibiltyAvailableKeyplanes;
- (void)_addPublicRotorsToArray:(id)arg1 forElement:(id)arg2;
- (BOOL)_allowCustomActionHintSpeakOverride;
- (BOOL)_animateScrollViewWithMachPort:(unsigned int)arg1 amount:(double)arg2;
- (id)_axAncestorTypes;
- (id)_axCachedHasTabBarAncestor;
- (id)_axDebugTraits;
- (struct CGRect)_axFrameForBoundsCheck:(BOOL)arg1;
- (id)_axOutermostScrollParent;
- (struct CGRect)_axScreenBoundsForBoundsCheck;
- (void)_axSetCachedHasTabBarAncestor:(id)arg1;
- (id)_axSuperviews;
- (void)_cleanupRotorCache;
- (id)_getAccessibilityAttributedString;
- (struct CGRect)_handleRotatingFrame:(struct CGRect)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (id)_privateAccessibilityCustomActions;
- (id)_retrieveCustomActions;
- (void)_setAccessibilityGuideElementHeaderText:(id)arg1;
- (void)_setAccessibilityIsMainWindow:(BOOL)arg1;
- (void)_setAccessibilityIsNotFirstElement:(BOOL)arg1;
- (void)_setAccessibilityLinkedUIElements:(id)arg1;
- (void)_setAccessibilityPhotoDescription:(id)arg1;
- (void)_setAccessibilityServesAsFirstElement:(BOOL)arg1;
- (void)_setAccessibilityTableCellUsesDetailTextAsValue:(BOOL)arg1;
- (void)_setAccessibilityUpdatesOnActivationAfterDelay:(BOOL)arg1;
- (void)_setAccessibilityWindowVisible:(BOOL)arg1;
- (unsigned long long)accessibilityARIAColumnCount;
- (unsigned long long)accessibilityARIAColumnIndex;
- (unsigned long long)accessibilityARIARowCount;
- (unsigned long long)accessibilityARIARowIndex;
- (BOOL)accessibilityActivate;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityAssistiveTechnologyFocusedIdentifiers;
- (id)accessibilityAttributeValue:(long long)arg1;
- (id)accessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;
- (unsigned long long)accessibilityBlockquoteLevel;
- (struct CGRect)accessibilityBoundsForTextMarkers:(id)arg1;
- (unsigned long long)accessibilityColumnCount;
- (struct _NSRange)accessibilityColumnRange;
- (long long)accessibilityCompareGeometry:(id)arg1;
- (id)accessibilityContainerElements;
- (id)accessibilityContentForLineNumber:(long long)arg1;
- (id)accessibilityDataTableCellElementForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)accessibilityDatetimeValue;
- (void)accessibilityDecreaseTrackingDetail;
- (void)accessibilityDecrement;
- (BOOL)accessibilityEditOperationAction:(id)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityElementForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2;
- (BOOL)accessibilityElementIsFocused;
- (struct CGRect)accessibilityElementRect;
- (void)accessibilityEnumerateAncestorsUsingBlock:(CDUnknownBlockType)arg1;
- (void)accessibilityEnumerateContainerElementsUsingBlock:(CDUnknownBlockType)arg1;
- (void)accessibilityEnumerateContainerElementsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)accessibilityExpandedTextValue;
- (id)accessibilityFlowToElements;
- (struct CGRect)accessibilityFrameForLineNumber:(long long)arg1;
- (struct CGRect)accessibilityFrameForScrolling;
- (id)accessibilityHeaderElements;
- (id)accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityIncreaseTrackingDetail;
- (void)accessibilityIncrement;
- (id)accessibilityInvalidStatus;
- (BOOL)accessibilityIsAttachmentElement;
- (BOOL)accessibilityIsComboBox;
- (id)accessibilityLabelForRange:(struct _NSRange *)arg1;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint)arg1;
- (id)accessibilityLinkedElement;
- (id)accessibilityMathEquation;
- (id)accessibilityMathMLSource;
- (id)accessibilityMenuActions;
- (id)accessibilityNextTextNavigationElement;
- (id)accessibilityPageContent;
- (BOOL)accessibilityPerformCustomAction:(long long)arg1;
- (id)accessibilityPlaceholderValue;
- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (id)accessibilityPreviousTextNavigationElement;
- (BOOL)accessibilityRequired;
- (unsigned long long)accessibilityRowCount;
- (struct _NSRange)accessibilityRowRange;
- (BOOL)accessibilityScrollDownPage;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollLeftPage;
- (BOOL)accessibilityScrollLeftPageSupported;
- (BOOL)accessibilityScrollRightPage;
- (BOOL)accessibilityScrollRightPageSupported;
- (BOOL)accessibilityScrollToTopSupported;
- (BOOL)accessibilityScrollUpPage;
- (BOOL)accessibilityScrollUpPageSupported;
- (id)accessibilitySecondaryLabel;
- (void)accessibilitySetUserDefinedOpaqueElementScrollsContentIntoView:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(long long)arg2;
- (BOOL)accessibilityShouldEnumerateContainerElementsArrayDirectly;
- (id)accessibilitySortDirection;
- (id)accessibilitySpeechHint;
- (BOOL)accessibilityStartStopToggle;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (id)accessibilityTitleElement;
- (id)accessibilityURL;
- (id)accessibilityUserDefinedIsMainWindow;
- (id)accessibilityUserDefinedNotFirstElement;
- (id)accessibilityUserDefinedOpaqueElementScrollsContentIntoView;
- (id)accessibilityUserDefinedServesAsFirstElement;
- (id)accessibilityUserDefinedSize;
- (id)accessibilityUserDefinedWindowVisible;
- (id)accessibilityViewWithIdentifier:(id)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (unsigned long long)axContainerTypeFromUIKitContainerType:(long long)arg1;
- (CDUnknownFunctionPointerType)impOrNullForSelector:(SEL)arg1;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (id)isAccessibilityUserDefinedScrollAncestor;
- (void)setAccessibilitySize:(struct CGSize)arg1;
- (void)setIsAccessibilityOpaqueElementProvider:(BOOL)arg1;
- (void)setIsAccessibilityScrollAncestor:(BOOL)arg1;
@end


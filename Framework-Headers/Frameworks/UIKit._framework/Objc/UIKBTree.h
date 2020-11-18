//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UIKBTree : NSObject <NSCopying>
{
    int type;
    NSString *name;
    NSMutableDictionary *properties;
    NSMutableArray *subtrees;
    NSMutableDictionary *cache;
    NSString *layoutTag;
}

@property (strong, nonatomic) NSMutableDictionary *cache; // @synthesize cache;
@property (strong, nonatomic) NSString *layoutTag; // @synthesize layoutTag;
@property (strong, nonatomic) NSString *name; // @synthesize name;
@property (strong, nonatomic) NSMutableDictionary *properties; // @synthesize properties;
@property (strong, nonatomic) NSMutableArray *subtrees; // @synthesize subtrees;
@property (nonatomic) int type; // @synthesize type;

+ (long long)extraIdiomForVisualStyling:(CDStruct_961fb75c)arg1 width:(double)arg2;
+ (id)key;
+ (id)keyboard;
+ (id)mergeStringForKeyName:(id)arg1;
+ (id)shapesForControlKeyShapes:(id)arg1 options:(int)arg2;
+ (BOOL)shouldSkipCacheString:(id)arg1;
+ (id)stringForType:(int)arg1;
+ (id)treeOfType:(int)arg1;
+ (BOOL)typeIsPersistent:(int)arg1;
+ (id)uniqueName;
- (void)_addKeylayoutKeys:(id)arg1;
- (id)_cacheRootNameForKey:(id)arg1;
- (long long)_keyCountOnNamedRow:(id)arg1;
- (struct CGRect)_keyplaneFrame;
- (BOOL)_needsScaling;
- (BOOL)_renderAsStringKey;
- (int)_variantType;
- (id)activeGeometriesList;
- (id)activeShapesFromOutputShapes:(id)arg1 inputShapes:(id)arg2;
- (void)addMessagesWriteboardKey;
- (void)addkeyToCachedKeyList:(id)arg1;
- (BOOL)allowRetestAfterCommittingDownActions;
- (id)alternateKeyplaneName;
- (id)attributeSet:(BOOL)arg1;
- (id)autolocalizedKeyCacheIterator;
- (BOOL)avoidAutoDeactivation;
- (BOOL)avoidsLanguageIndicator;
- (BOOL)behavesAsShiftKey;
- (BOOL)boolForProperty:(id)arg1;
- (id)cacheDisplayString;
- (void)cacheKey:(id)arg1;
- (id)cacheSecondaryDisplayString;
- (id)cachedGestureLayout;
- (id)cachedKeysByKeyName:(id)arg1;
- (void)centerKeys:(id)arg1 inRect:(struct CGRect)arg2 scale:(double)arg3;
- (void)clearManualAddedKey;
- (void)clearTransientCaches;
- (int)clipCorners;
- (id)componentName;
- (BOOL)containsDividerVariant;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)diacriticForwardCompose;
- (BOOL)disabled;
- (BOOL)disablesEdgeSwipe;
- (int)displayRowHint;
- (id)displayString;
- (int)displayType;
- (int)displayTypeHint;
- (int)dragThreshold;
- (BOOL)dynamicDisplayTypeHint;
- (void)elaborateLayoutWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)findLeftMoreKey;
- (id)firstCachedKeyWithName:(id)arg1;
- (id)firstKeyplaneSwitchKey;
- (long long)flickDirection;
- (BOOL)forceMultitap;
- (struct CGRect)frame;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
- (id)fullRepresentedString;
- (id)geometries;
- (id)geometriesList;
- (id)geometriesOrderedByPosition;
- (id)geometry;
- (id)geometrySet:(BOOL)arg1;
- (id)gestureKey;
- (id)gestureKeyplaneName;
- (BOOL)ghost;
- (long long)handBias;
- (BOOL)hasLayoutTag:(id)arg1;
- (long long)highlightedVariantIndex;
- (id)highlightedVariantsList;
- (int)indexOfSubtree:(id)arg1;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5;
- (long long)intForProperty:(id)arg1;
- (int)interactionType;
- (BOOL)isAlphabeticPlane;
- (BOOL)isDuplicateOfTree:(id)arg1;
- (BOOL)isEqualToTree:(id)arg1;
- (BOOL)isExemptFromInputManagerHitTesting;
- (BOOL)isExemptFromInputManagerLayout;
- (BOOL)isGenerated;
- (BOOL)isHashed;
- (BOOL)isLeafType;
- (BOOL)isLetters;
- (BOOL)isRightToLeftSensitive;
- (BOOL)isSameAsTree:(id)arg1;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)isShiftKeyplane;
- (BOOL)isSplit;
- (id)keyAttributes;
- (id)keyForString:(id)arg1;
- (id)keySet;
- (id)keyplaneForKey:(id)arg1;
- (id)keys;
- (id)keysByKeyName:(id)arg1;
- (id)keysForMergeConditions;
- (id)keysOrderedByPosition;
- (id)keysOrderedByPositionRTL;
- (id)keysOrderedByPositionWithoutZip;
- (id)keysWithString:(id)arg1;
- (id)keysetCanContainWriteboardKey;
- (id)layoutName;
- (id)listShapes;
- (id)localizationKey;
- (BOOL)looksLike:(id)arg1;
- (BOOL)looksLikeShiftAlternate;
- (id)mergeKeyNames:(id)arg1;
- (void)mergeReturnKey:(id)arg1 withReturnKey:(id)arg2;
- (BOOL)modifiesKeyplane;
- (id)nameFromAttributes;
- (struct CGPoint)navigationPointOfKey;
- (BOOL)noLanguageIndicator;
- (BOOL)notUseCandidateSelection;
- (id)numberForProperty:(id)arg1;
- (id)objectForProperty:(id)arg1;
- (void)orderVariantKeys:(BOOL)arg1;
- (id)overrideDisplayString;
- (struct CGRect)paddedFrame;
- (id)parentKey;
- (void)precacheLayoutName:(id)arg1;
- (double)primaryKeylayoutOffset;
- (double)primaryKeylayoutWidthRatio;
- (id)recursiveDescription;
- (void)removeKeyFromCachedKeyList:(id)arg1;
- (BOOL)renderKeyInKeyplane:(id)arg1;
- (int)rendering;
- (id)representedString;
- (id)rightSpaceKey;
- (id)secondaryDisplayStrings;
- (id)secondaryRepresentedStrings;
- (long long)selectedVariantIndex;
- (void)setActiveGeometriesList:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCachedGestureLayout:(id)arg1;
- (void)setClipCorners:(int)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setDisplayRowHint:(int)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayType:(int)arg1;
- (void)setDisplayTypeHint:(int)arg1;
- (void)setFlickDirection:(long long)arg1;
- (void)setForceMultitap:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setGeometriesList:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setGestureKey:(id)arg1;
- (void)setGhost:(BOOL)arg1;
- (void)setHighlightedVariantsList:(id)arg1;
- (void)setInteractionType:(int)arg1;
- (void)setIsGenerated:(BOOL)arg1;
- (BOOL)setObject:(id)arg1 forProperty:(id)arg2;
- (void)setOverrideDisplayString:(id)arg1;
- (void)setPaddedFrame:(struct CGRect)arg1;
- (void)setParentKey:(id)arg1;
- (void)setRendering:(int)arg1;
- (void)setRepresentedString:(id)arg1;
- (void)setSecondaryDisplayStrings:(id)arg1;
- (void)setSecondaryRepresentedStrings:(id)arg1;
- (void)setSelectedVariantIndex:(long long)arg1;
- (void)setShape:(id)arg1;
- (void)setSplitMode:(int)arg1;
- (void)setState:(int)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setVariantPopupBias:(id)arg1;
- (void)setVariantType:(int)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setVisualStyle:(int)arg1;
- (void)setVisualStyling:(CDStruct_961fb75c)arg1;
- (id)shape;
- (id)shapeFromFrame:(struct CGRect)arg1 leftPadding:(double)arg2 rightPadding:(double)arg3;
- (id)shiftAlternateKeyplaneName;
- (BOOL)shouldCacheKey;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)shouldSkipCandidateSelectionForVariants;
- (int)splitMode;
- (int)state;
- (id)stringForProperty:(id)arg1;
- (CDStruct_961fb75c)stylingFromVisualStyle;
- (void)subsumeDisappearingKeyName:(id)arg1 intoKeyName:(id)arg2 factors:(id)arg3;
- (id)subtreeWithName:(id)arg1;
- (id)subtreeWithName:(id)arg1 rows:(id)arg2;
- (id)subtreeWithType:(int)arg1;
- (BOOL)subtreesAreOrdered;
- (id)subtreesWithProperty:(id)arg1 value:(id)arg2;
- (BOOL)supportsType:(long long)arg1;
- (long long)textAlignment;
- (id)unhashedName;
- (void)updateDictationKeyOnNumberPads:(BOOL)arg1;
- (void)updateFlickKeycapOnKeys;
- (void)updateMoreAndInternationalKeysWithOptions:(int)arg1;
- (void)updateVariantTypeForActions:(unsigned int)arg1;
- (BOOL)usesAdaptiveKeys;
- (BOOL)usesAutoShift;
- (BOOL)usesKeyCharging;
- (id)variantDisplayString;
- (id)variantPopupBias;
- (int)variantType;
- (BOOL)visible;
- (int)visualStyle;
- (CDStruct_961fb75c)visualStyling;
- (void)zipAttributes;
- (void)zipGeometries:(BOOL)arg1 attributes:(BOOL)arg2;
- (void)zipGeometrySet;

@end


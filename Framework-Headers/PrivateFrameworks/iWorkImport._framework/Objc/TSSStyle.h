//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>
#import <iWorkImport/TSSPropertySource-Protocol.h>
#import <iWorkImport/TSSPropertyValueValidator-Protocol.h>
#import <iWorkImport/TSSStyleClient-Protocol.h>
#import <iWorkImport/TSSStyleObject-Protocol.h>

@class NSString, TSSPropertyMap, TSSStylesheet, TSURetainedPointerSet;

__attribute__((visibility("hidden")))
@interface TSSStyle : TSPObject <NSCopying, TSSPropertyValueValidator, TSSStyleObject, TSSPropertySource, TSSStyleClient, TSKModel, TSKTransformableObject>
{
    TSSPropertyMap *mOverridePropertyMap;
    TSSStylesheet *mStylesheet;
    NSString *mName;
    NSString *mStyleIdentifier;
    TSSStyle *mParent;
    BOOL mIsVariation;
    BOOL mWasUnarchivedAsOrphanVariation;
}

@property (readonly, nonatomic) TSSStyle *baseStyleForVariation;
@property (readonly, nonatomic) TSURetainedPointerSet *children;
@property (readonly, nonatomic) NSString *contentTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSURetainedPointerSet *descendants;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSSStyle *firstIdentifiedAncestor;
@property (readonly, nonatomic) TSSStyle *firstNamedAncestor;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isIdentified;
@property (readonly, nonatomic) BOOL isNamed;
@property (readonly, nonatomic) BOOL isVariation;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) TSSPropertyMap *overridePropertyMap;
@property (readonly, nonatomic) TSSStyle *parent; // @synthesize parent=mParent;
@property (readonly, nonatomic) TSSStyle *rootAncestor;
@property (readonly, nonatomic) TSSStyle *rootIdentifiedAncestor;
@property (readonly, nonatomic) NSString *styleIdentifier;
@property (weak, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=mStylesheet;
@property (readonly) Class superclass;

+ (id)boxedDefaultValueForProperty:(int)arg1;
+ (double)defaultDoubleValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)description;
+ (double)fontSizeForFontSize:(double)arg1 scalingFactor:(double)arg2;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (BOOL)needsObjectUUID;
+ (struct __CTFont *)pCreateFontWithName:(id)arg1 fontSize:(double)arg2;
+ (id)pReplacementForMissingFontName:(id)arg1 outBold:(int *)arg2 outItalic:(int *)arg3 outQuiet:(BOOL *)arg4;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (BOOL)shouldWarnWithPersistingWithoutStylesheet;
+ (BOOL)validateDoubleValue:(double *)arg1 forProperty:(int)arg2;
+ (BOOL)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (id)validateFontInPropertyMap:(id)arg1 parentStyle:(id)arg2 checkedFontMap:(id)arg3;
+ (id)validateFontName:(id)arg1 size:(double)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4 checkedFontMap:(id)arg5 newFontName:(id *)arg6 newBold:(BOOL *)arg7 newItalic:(BOOL *)arg8;
+ (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2;
+ (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+ (BOOL)validateIntValueAsBool:(int *)arg1 forProperty:(int)arg2;
+ (BOOL)validateObjectValue:(id *)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
- (void).cxx_destruct;
- (double)CGFloatValueForProperty:(int)arg1;
- (id)additionalPropertiesNeededForVariationWithPropertyMap:(id)arg1;
- (BOOL)allowsImplicitComponentOwnership;
- (id)archivableRepresentationOfChangeSet:(id)arg1;
- (BOOL)boolValueForProperty:(int)arg1 defaultValue:(BOOL)arg2;
- (id)boxedObjectForProperty:(int)arg1;
- (id)boxedOverrideValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (id)componentRootObject;
- (void)constrainShadowForSwatchGeneration;
- (id)constrainShapeStyleForContext:(id)arg1;
- (void)constrainStrokeForSwatchGeneration;
- (BOOL)containsProperty:(int)arg1;
- (id)copyFlattenedWithContext:(id)arg1;
- (id)copyPropertyMap;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 includeParentProperties:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (BOOL)definesProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (void)fadeReflectionForSwatchGeneration;
- (float)floatValueForProperty:(int)arg1;
- (id)fullPropertyMap;
- (BOOL)hasEqualPropertyValues:(id)arg1;
- (BOOL)hasEqualValues:(id)arg1 forProperties:(id)arg2;
- (BOOL)hasEqualValuesToPropertyMap:(id)arg1 forProperties:(id)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (int)intValueForMUXedProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (BOOL)isAncestorOf:(id)arg1;
- (BOOL)isChildOf:(id)arg1;
- (BOOL)isDescendentOf:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStyle:(id)arg1 ignoreObjectContext:(BOOL)arg2;
- (BOOL)isEqualToStyle:(id)arg1 ignoreObjectContext:(BOOL)arg2 ignoreObjectUUID:(BOOL)arg3;
- (BOOL)isEqualToStyle:(id)arg1 ignoreObjectUUID:(BOOL)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (BOOL)isParentOf:(id)arg1;
- (BOOL)isRelatedTo:(id)arg1;
- (void)loadCharacterStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct CharacterStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (void)loadFromArchive:(const struct StyleArchive *)arg1 unarchiver:(id)arg2;
- (void)loadParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ParagraphStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (id)newOverridePropertyMapWithPropertyMap:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (id)overriddenProperties;
- (double)overrideCGFloatValueForProperty:(int)arg1;
- (unsigned long long)overrideCount;
- (double)overrideDoubleValueForProperty:(int)arg1;
- (float)overrideFloatValueForProperty:(int)arg1;
- (int)overrideIntValueForProperty:(int)arg1;
- (BOOL)overridePropertyMapIsEqualTo:(id)arg1;
- (id)overridePropertyMapWithPropertyMap:(id)arg1 overridePropertyMap:(id)arg2 collapseSourceOverrides:(BOOL)arg3;
- (id)overrideValueForProperty:(int)arg1;
- (BOOL)overridesAnyProperty;
- (BOOL)overridesProperty:(int)arg1;
- (BOOL)p_hasEqualValuesTo:(id)arg1 forProperty:(int)arg2;
- (id)parentStyleForFixingOrphanVariation;
- (id)propertyMap;
- (id)propertyMapIgnoringStyle:(id)arg1;
- (id)propertyMapThatNeedsToBeTransformedWithTransformedObjects:(id)arg1;
- (id)referencedStyles;
- (void)removeAllValues;
- (void)removeValueForProperty:(int)arg1;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (void)saveCharacterStylePropertiesToArchive:(struct CharacterStylePropertiesArchive *)arg1 archiver:(id)arg2;
- (void)saveParagraphStylePropertiesToArchive:(struct ParagraphStylePropertiesArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchive:(struct StyleArchive *)arg1 archiver:(id)arg2;
- (void)setBoolValue:(BOOL)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setIsVariation:(BOOL)arg1;
- (void)setObjectUUID:(id)arg1;
- (void)setOverridePropertyMap:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setStyleIdentifier:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (void)setValuesForProperties:(id)arg1;
- (id)shapeStyleByRemovingShadowFrameAndReflectionForContext:(id)arg1;
- (id)shapeStyleByRemovingTextShadowForContext:(id)arg1;
- (BOOL)transformsFontSizes;
- (BOOL)validateDoubleValue:(double *)arg1 forProperty:(int)arg2;
- (BOOL)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
- (id)validateFontWithCheckedFontMap:(id)arg1;
- (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2;
- (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
- (BOOL)validateIntValueAsBool:(int *)arg1 forProperty:(int)arg2;
- (BOOL)validateObjectValue:(id *)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
- (id)valueForProperty:(int)arg1;
- (id)valuesForProperties:(id)arg1;

@end

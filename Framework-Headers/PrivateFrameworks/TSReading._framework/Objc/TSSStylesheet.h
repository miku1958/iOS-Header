//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSKTransformableObject-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, TSUMutableRetainedPointerSet, TSURetainedPointerKeyDictionary;

@interface TSSStylesheet : TSPObject <TSKTransformableObject>
{
    TSSStylesheet *mParent;
    TSSStylesheet *mChild;
    TSUMutableRetainedPointerSet *mStyles;
    NSMutableDictionary *mIdentifierToStyleMap;
    TSURetainedPointerKeyDictionary *mParentToChildrenStyleMap;
    BOOL mIsLocked;
    BOOL mCanCullStyles;
}

@property (nonatomic) BOOL canCullStyles;
@property (readonly, nonatomic) TSSStylesheet *child; // @synthesize child=mChild;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isLocked;
@property (readonly, nonatomic) TSSStylesheet *parent; // @synthesize parent=mParent;
@property (readonly, nonatomic) NSSet *styles;
@property (readonly) Class superclass;

- (id)_defaultCharacterStyleWasCreated:(BOOL *)arg1;
- (id)_defaultColumnStyleWasCreated:(BOOL *)arg1;
- (id)_defaultListStyleWasCreated:(BOOL *)arg1;
- (id)_defaultParagraphStyleWasCreated:(BOOL *)arg1;
- (id)_defaultStyleOfClass:(Class)arg1 withIdentifier:(id)arg2 wasCreated:(BOOL *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)_hyperlinkStyleWasCreated:(BOOL *)arg1;
- (void)addStyle:(id)arg1;
- (void)addStyle:(id)arg1 withIdentifier:(id)arg2;
- (void)addStyle:(id)arg1 withParent:(id)arg2;
- (void)addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (BOOL)cascadedContainsStyle:(id)arg1;
- (id)cascadedFirstStyleWithName:(id)arg1;
- (id)cascadedStyleWithIdentifier:(id)arg1;
- (id)cascadedStyleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)childrenOfStyle:(id)arg1;
- (BOOL)containsStyle:(id)arg1;
- (void)dealloc;
- (id)defaultCharacterStyle;
- (id)defaultColumnStyle;
- (id)defaultListStyle;
- (id)defaultParagraphStyle;
- (unsigned long long)descendantCount;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (void)enumerateCascadedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)firstRootlessStyleOfClass:(Class)arg1 withOverridePropertyMap:(id)arg2;
- (id)firstStyleWithName:(id)arg1;
- (id)headerAndFooterStyle;
- (id)hyperlinkStyle;
- (id)identifiedStyles;
- (id)identifiedStylesOfClass:(Class)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 canCullStyles:(BOOL)arg2;
- (BOOL)isAncestorOf:(id)arg1;
- (BOOL)isChildOf:(id)arg1;
- (BOOL)isDescendentOf:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isParentOf:(id)arg1;
- (id)namedStylesOfClass:(Class)arg1;
- (id)pVariationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (void)p_addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (void)p_addStyleToParentChildren:(id)arg1;
- (void)p_removeStyle:(id)arg1;
- (void)p_removeStyleFromParentChildren:(id)arg1;
- (void)p_setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (void)p_setParent:(id)arg1 ofStyle:(id)arg2;
- (id)p_variationMapForVaryingCharacterStyle:(id)arg1 overParagraphStyle:(id)arg2 withPropertyMap:(id)arg3;
- (void)removeStyle:(id)arg1;
- (id)rootAncestor;
- (void)setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setParent:(id)arg1 ofStyle:(id)arg2;
- (void)setParent:(id)arg1 withParentStyleMap:(struct __CFDictionary *)arg2;
- (id)styleWithIdentifier:(id)arg1;
- (id)styleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)stylesOfClass:(Class)arg1;
- (id)stylesPassingTest:(CDUnknownBlockType)arg1;
- (id)stylesWithName:(id)arg1;
- (id)stylesWithName:(id)arg1 ofClass:(Class)arg2;
- (void)unlockStylesheetForDurationOfBlock:(CDUnknownBlockType)arg1;
- (id)unusedStyleIdentifierWithPackageString:(id)arg1 styleDescriptor:(id)arg2 contentTag:(id)arg3;
- (id)variationOfCharacterStyle:(id)arg1 paragraphStyle:(id)arg2 propertyMap:(id)arg3;
- (id)variationOfStyle:(id)arg1 exactPropertyMap:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 context:(id)arg3;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (id)variationOfStyleMatchingStyle:(id)arg1 withNewParentStyle:(id)arg2;

@end


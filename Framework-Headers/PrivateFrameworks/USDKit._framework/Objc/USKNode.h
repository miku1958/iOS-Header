//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <USDKit/USKObject.h>

@class NSArray, NSDictionary, NSString, USKToken;

@interface USKNode : USKObject
{
    struct UsdPrim _prim;
}

@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSArray *schemaTypes;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) USKToken *typeName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2;
- (void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2 offset:(id)arg3;
- (void)addReferenceWithURL:(id)arg1 nodePath:(id)arg2;
- (void)addVariant:(id)arg1 variantSet:(id)arg2;
- (void)addVariantSet:(id)arg1;
- (void)applyType:(id)arg1;
- (id)childIterator;
- (void)clearReferences;
- (id)customMetadataWithKey:(id)arg1;
- (id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2;
- (BOOL)editVariant:(id)arg1 variantSet:(id)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)hasSchemaType:(id)arg1;
- (BOOL)hasVariantSet:(id)arg1;
- (BOOL)hasVariantSets;
- (unsigned long long)hash;
- (id)inheritedMaterialBinding;
- (id)inheritedProperty:(id)arg1;
- (id)inheritedSkeletonAnimationBinding;
- (id)inheritedSkeletonBinding;
- (id)initWithUsdPrim:(struct UsdPrim)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInstanceNode;
- (id)loadedChildIterator;
- (id)loadedSubtreeIterator;
- (id)masterNode;
- (id)metadata;
- (id)metadataWithKey:(id)arg1;
- (id)name;
- (id)newCustomPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3;
- (id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3;
- (id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 variability:(BOOL)arg4;
- (id)parent;
- (id)path;
- (id)property:(id)arg1;
- (id)propertyList;
- (BOOL)removeProperty:(id)arg1;
- (BOOL)selectVariant:(id)arg1 variantSet:(id)arg2;
- (BOOL)setCustomMetadata:(id)arg1 value:(id)arg2;
- (BOOL)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3;
- (BOOL)setMetadataWithKey:(id)arg1 value:(id)arg2;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (id)subtreeIterator;
- (struct UsdPrim)usdPrim;
- (id)variantSets;
- (id)variantsWithVariantSet:(id)arg1;

@end

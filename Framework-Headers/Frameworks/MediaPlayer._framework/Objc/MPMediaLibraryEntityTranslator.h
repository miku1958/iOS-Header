//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MPMediaLibraryEntityTranslator : NSObject
{
    NSMutableDictionary *_propertiesToTranslators;
    NSMutableDictionary *_relationshipsToTranslators;
    BOOL _transient;
    Class _MPModelClass;
    struct EntityClass *_entityClass;
    CDUnknownBlockType _allowedItemPredicatesBlock;
    CDUnknownBlockType _entityQueryBlock;
}

@property (readonly, nonatomic) Class MPModelClass; // @synthesize MPModelClass=_MPModelClass;
@property (copy, nonatomic) CDUnknownBlockType allowedItemPredicatesBlock; // @synthesize allowedItemPredicatesBlock=_allowedItemPredicatesBlock;
@property (readonly, nonatomic) struct EntityClass *entityClass; // @synthesize entityClass=_entityClass;
@property (copy, nonatomic) CDUnknownBlockType entityQueryBlock; // @synthesize entityQueryBlock=_entityQueryBlock;
@property (readonly, nonatomic, getter=isTransient) BOOL transient; // @synthesize transient=_transient;

+ (struct EntityClass *)MLCoreEntityClassForModelEntityClass:(Class)arg1;
+ (id)_translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(struct EntityClass *)arg2 create:(BOOL)arg3 transient:(BOOL)arg4;
+ (id)translatorForMPModelClass:(Class)arg1;
+ (id)translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(struct EntityClass *)arg2;
+ (id)translatorForTransientMPModelClass:(Class)arg1;
- (void).cxx_destruct;
- (vector_90d4f7ff)MLCorePropertiesForPropertySet:(id)arg1;
- (vector_90d4f7ff)MLCorePropertiesForPropertySet:(id)arg1 withForeignPropertyBase:(struct ModelPropertyBase *)arg2;
- (vector_11bc6599)MLCoreSortDescriptorsForModelSortDescriptors:(id)arg1;
- (struct ModelPropertyBase *)_propertyForKeyPath:(id)arg1;
- (map_041e1ed5)_propertyMapForKeyPath:(id)arg1 includePropertiesToSort:(BOOL)arg2;
- (id)_propertyTranslatorForKeyPath:(id)arg1;
- (Class)classForRelationshipKey:(id)arg1;
- (shared_ptr_e8455ceb)entityQueryForPropertySet:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3 predicate:(shared_ptr_cf7b8a22)arg4;
- (id)identifiersForEntity:(shared_ptr_27513921)arg1;
- (void)mapIdentifierMLProperties:(const map_041e1ed5 *)arg1 identifierCreationBlock:(CDUnknownBlockType)arg2;
- (void)mapPropertyKey:(id)arg1 toMLProperty:(struct ModelPropertyBase *)arg2;
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const map_041e1ed5 *)arg2 propertiesToSort:(const map_041e1ed5 *)arg3 sortTransformer:(CDUnknownBlockType)arg4 valueTransformer:(CDUnknownBlockType)arg5;
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const map_041e1ed5 *)arg2 valueTransformer:(CDUnknownBlockType)arg3;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(BOOL)arg3 usingForeignPropertyBase:(struct ModelPropertyBase *)arg4;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 usingForeignPropertyBase:(struct ModelPropertyBase *)arg3;
- (id)objectForPropertySet:(id)arg1 entity:(shared_ptr_27513921)arg2 baseTranslator:(id)arg3 prependKeyPath:(id)arg4 context:(id)arg5;
- (id)objectForPropertySet:(id)arg1 entity:(shared_ptr_27513921)arg2 context:(id)arg3;
- (shared_ptr_889ae36a)propertiesQueryForPropertySet:(id)arg1 scopedContainers:(id)arg2 allowedItemIdentifiers:(id)arg3 predicate:(shared_ptr_cf7b8a22)arg4;
- (id)valueForKeyPath:(id)arg1 forEntity:(shared_ptr_27513921)arg2 context:(id)arg3;

@end

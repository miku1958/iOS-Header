//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKEventStore, EKObjectRelation, EKPersistentObject, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface EKObject : NSObject
{
    unsigned int _flags;
    NSMutableDictionary *_dirtyProperties;
    NSMutableDictionary *_cachedProperties;
    EKPersistentObject *_persistentObject;
    NSString *_propertyName;
    EKObjectRelation *_owningRelation;
    NSMutableDictionary *_relations;
    NSMutableSet *_weakRelations;
}

@property (strong, nonatomic) NSMutableDictionary *cachedProperties; // @synthesize cachedProperties=_cachedProperties;
@property (strong, nonatomic) NSMutableDictionary *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property (strong, nonatomic) EKEventStore *eventStore;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic, getter=isNew) BOOL new;
@property (nonatomic) EKObjectRelation *owningRelation; // @synthesize owningRelation=_owningRelation;
@property (strong, nonatomic) EKPersistentObject *persistentObject; // @synthesize persistentObject=_persistentObject;
@property (copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property (strong, nonatomic) NSMutableDictionary *relations; // @synthesize relations=_relations;
@property (strong, nonatomic) NSMutableSet *weakRelations; // @synthesize weakRelations=_weakRelations;

- (void).cxx_destruct;
- (void)addWeakRelation:(id)arg1;
- (BOOL)boolPropertyForKey:(id)arg1 withPersistentFallback:(CDUnknownBlockType)arg2;
- (void)cachePropertyValue:(id)arg1 forKey:(id)arg2;
- (void)childRelationChanged:(id)arg1;
- (void)clearPropertyValueForKey:(id)arg1;
- (id)committedValueForKey:(id)arg1;
- (void)dealloc;
- (void)deletePersistentObject;
- (void)didCommit;
- (BOOL)existsInStore;
- (void)faultPropertiesWithNames:(id)arg1;
- (id)initWithPersistentObject:(id)arg1;
- (void)insertPersistentObjectIfNeeded;
- (int)intPropertyForKey:(id)arg1 withPersistentFallback:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPropertyDirty:(id)arg1;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)objectID;
- (id)owner;
- (id)persistentOrDirtyPropertyForKey:(id)arg1;
- (id)propertyForKey:(id)arg1 withPersistentFallback:(CDUnknownBlockType)arg2;
- (id)propertyValueForKey:(id)arg1;
- (BOOL)propertyValueForKey:(id)arg1 value:(id *)arg2;
- (BOOL)rebase;
- (BOOL)refresh;
- (id)relationForKey:(id)arg1;
- (void)removeWeakRelation:(id)arg1;
- (void)reset;
- (void)rollback;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)updatePersistentObject;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (void)updatePersistentValueForKeyIfNeeded:(id)arg1;
- (BOOL)validate:(id *)arg1;

@end

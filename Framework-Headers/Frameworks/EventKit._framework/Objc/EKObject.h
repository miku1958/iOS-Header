//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKFrozenMeltedPair-Protocol.h>
#import <EventKit/EKProtocolMutableObject-Protocol.h>

@class EKChangeSet, EKEventStore, EKObjectValidationContext, EKPersistentObject, NSDictionary, NSMutableDictionary, NSString;

@interface EKObject : NSObject <EKFrozenMeltedPair, EKProtocolMutableObject>
{
    EKPersistentObject *_persistentObject;
    EKChangeSet *_changeSet;
    NSMutableDictionary *__cachedMeltedObjects;
    NSDictionary *_additionalFrozenProperties;
    NSMutableDictionary *__cachedValues;
    EKObjectValidationContext *__validationContext;
}

@property (strong, nonatomic) NSMutableDictionary *_cachedMeltedObjects; // @synthesize _cachedMeltedObjects=__cachedMeltedObjects;
@property (strong, nonatomic) NSMutableDictionary *_cachedValues; // @synthesize _cachedValues=__cachedValues;
@property (strong, nonatomic) EKObjectValidationContext *_validationContext; // @synthesize _validationContext=__validationContext;
@property (strong, nonatomic) NSDictionary *additionalFrozenProperties; // @synthesize additionalFrozenProperties=_additionalFrozenProperties;
@property (strong, nonatomic) EKPersistentObject *backingObject;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (strong, nonatomic) EKChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isFrozen;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic, getter=isNew) BOOL new;
@property (strong, nonatomic) EKPersistentObject *persistentObject; // @synthesize persistentObject=_persistentObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSString *semanticIdentifier;
@property (readonly, nonatomic) NSString *specificIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

+ (id)EKObjectChangeSummarizer_multiValueDiffKeys;
+ (id)EKObjectChangeSummarizer_singleValueDiffKeys;
+ (BOOL)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3;
+ (BOOL)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(BOOL)arg4;
+ (BOOL)_compareIdentityKeysForObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3;
+ (BOOL)_compareIdentityKeysForObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3;
+ (BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3;
+ (BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(BOOL)arg4 compareImmutableKeys:(BOOL)arg5 propertiesToIgnore:(id)arg6;
+ (BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(BOOL)arg4 compareImmutableKeys:(BOOL)arg5 propertiesToIgnore:(id)arg6;
+ (BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5;
+ (BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5;
+ (BOOL)_compareMultiValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareMultiValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareMultiValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareMutliValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5;
+ (BOOL)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5;
+ (BOOL)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareNonRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareRelationshipObject1:(id)arg1 againstRelationshipObject2:(id)arg2 propertiesToIgnore:(id)arg3;
+ (BOOL)_compareRelationshipObject1:(id)arg1 againstRelationshipObject2:(id)arg2 propertiesToIgnore:(id)arg3 relationshipObjectKey:(id)arg4;
+ (BOOL)_compareSingleValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareSingleValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (BOOL)_compareSingleValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;
+ (unsigned long long)_numberOfSharedLocksForUnitTesting;
+ (BOOL)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 compareImmutableKeys:(BOOL)arg4 ignoringProperties:(id)arg5;
+ (BOOL)_objects:(id)arg1 haveSameMeltedClass:(Class)arg2 frozenClass:(Class)arg3;
+ (BOOL)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5;
+ (Class)frozenClass;
+ (BOOL)isDerivedRelationship;
+ (BOOL)isMeltedAndNotWeakRelationshipObject:(id)arg1 forKey:(id)arg2;
+ (BOOL)isWeakRelationObject:(id)arg1 forKey:(id)arg2;
+ (BOOL)isWeakRelationship;
+ (id)knownDerivedAndSingleValueRelationshipKeys;
+ (id)knownDerivedRelationshipKeys;
+ (id)knownIdentityKeysForComparison;
+ (id)knownImmutableKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipWeakKeys;
+ (id)knownSingleValueKeysForComparison;
+ (id)knownSummaryKeys;
+ (Class)meltedClass;
+ (id)propertiesUnavailableForPartialObjects;
- (void).cxx_destruct;
- (void)_addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;
- (void)_addChanges:(id)arg1 copyingBackingObjects:(BOOL)arg2;
- (void)_addChangesFromObject:(id)arg1 except:(id)arg2 keep:(id)arg3 copyingBackingObjects:(BOOL)arg4;
- (void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 indentFirstLine:(BOOL)arg3;
- (void)_applyDefinedAfterFirstSaveFrom:(id)arg1;
- (void)_applyKnownImmutableValuesFrom:(id)arg1;
- (BOOL)_areOnlyChangedKeys:(id)arg1;
- (id)_basicSummaryWithDepth:(long long)arg1;
- (void)_cachedMeltedChildIdentifierToParentMap:(id)arg1;
- (unsigned long long)_cachedMeltedObjectsCount;
- (id)_changeSetForDiff:(id)arg1;
- (id)_convertBackingObjectsWithPath:(id)arg1 updateBackingObjects:(BOOL)arg2 allChangedBackingObjects:(id)arg3 eventStore:(id)arg4 updatedBackingObjectProvider:(id)arg5;
- (id)_copyWithoutChangesInZone:(struct _NSZone *)arg1;
- (BOOL)_hasChangeHelperInKeys:(id)arg1 ignoreKeys:(id)arg2 checkUnsaved:(BOOL)arg3;
- (BOOL)_hasChanges;
- (BOOL)_hasChangesForKey:(id)arg1;
- (BOOL)_hasChangesForKey:(id)arg1 checkUnsaved:(BOOL)arg2;
- (BOOL)_hasUnsavedChangesInKeys:(id)arg1 ignoreKeys:(id)arg2;
- (void)_initChangeSetIfNone;
- (BOOL)_isNew;
- (BOOL)_isOnlyChangedKey:(id)arg1;
- (BOOL)_isPropertyUnavailable:(id)arg1 convertToFullObjectIfUnavailable:(BOOL)arg2;
- (void)_markAsCommittedCommon;
- (void)_markAsDeletedCommon;
- (void)_markAsNewCommon;
- (void)_markAsNotNewCommon;
- (void)_markAsSavedCommon;
- (void)_markAsUndeletedCommon;
- (id)_multiRelationshipKeysToCheckForChanges;
- (void)_performBlockOnOwnedCachedRelatedObjects:(CDUnknownBlockType)arg1;
- (void)_performWithReadLock:(CDUnknownBlockType)arg1;
- (void)_performWithWriteLock:(CDUnknownBlockType)arg1;
- (id)_previousValueForKey:(id)arg1;
- (id)_propertyValueForKey:(id)arg1;
- (id)_readWriteLock;
- (id)_recursiveSnapshotCopyWithPropertyAccessor:(CDUnknownBlockType)arg1 recurseOnWeakRelations:(BOOL)arg2;
- (BOOL)_refreshCommon;
- (BOOL)_refreshable;
- (void)_removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;
- (BOOL)_reset;
- (void)_resetAfterUpdatingChangeSetOrBackingObject;
- (BOOL)_resetCommon;
- (BOOL)_resetIfBackingObjectIsOfClass:(Class)arg1 fetchResetFrozenObjectBlock:(CDUnknownBlockType)arg2;
- (void)_resetInternalState;
- (void)_resetMeltedCache;
- (void)_resetWithFrozenObject:(id)arg1;
- (void)_rollbackCommon;
- (void)_sharedInit;
- (id)_singleRelationshipKeysToCheckForChanges;
- (id)_summaryWithDepth:(long long)arg1;
- (void)_updateCachedMeltedObjectSetForMultiValueKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_updatePersistentValueForKey:(id)arg1;
- (void)addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;
- (void)addChanges:(id)arg1;
- (void)addChangesFromObject:(id)arg1;
- (void)addChangesFromObject:(id)arg1 copyingBackingObjects:(BOOL)arg2;
- (void)addChangesFromObject:(id)arg1 except:(id)arg2;
- (void)addChangesFromObject:(id)arg1 keep:(id)arg2;
- (void)addCoCommitObject:(id)arg1;
- (void)addMultiChangedObjectValue:(id)arg1 forKey:(id)arg2;
- (void)addMultiChangedObjectValues:(id)arg1 forKey:(id)arg2;
- (void)applyChanges:(id)arg1;
- (id)backingObjectOfChildObject:(id)arg1 withRelationshipKey:(id)arg2;
- (id)cachedMeltedChildIdentifierToParentMap;
- (id)cachedMeltedObjectForSingleValueKey:(id)arg1;
- (id)cachedMeltedObjectsForMultiValueKey:(id)arg1;
- (id)cachedValueForKey:(id)arg1;
- (id)cachedValueForKey:(id)arg1 expectingCachedValue:(id)arg2 forMasterKey:(id)arg3 relatedKeys:(id)arg4 populateBlock:(CDUnknownBlockType)arg5;
- (id)cachedValueForKey:(id)arg1 populateBlock:(CDUnknownBlockType)arg2;
- (id)changedKeys;
- (void)clearCachedValueForKey:(id)arg1;
- (void)clearCachedValuesForKeys:(id)arg1;
- (id)committedCopy;
- (id)committedValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)deletePersistentObject;
- (id)diffWithObject:(id)arg1;
- (id)duplicate;
- (void)emptyMeltedCache;
- (void)emptyMeltedCacheForKey:(id)arg1;
- (void)emptyMeltedCacheForKeys:(id)arg1;
- (id)existingMeltedObject;
- (BOOL)existsInStore;
- (Class)frozenClass;
- (id)frozenObject;
- (id)frozenOrMeltedCachedSingleRelationObjectForKey:(id)arg1;
- (BOOL)hasUnsavedChanges;
- (BOOL)hasUnsavedChangesIgnoreKeys:(id)arg1;
- (BOOL)hasUnsavedChangesInKeys:(id)arg1;
- (id)init;
- (id)initWithObject:(id)arg1;
- (id)initWithObjectForCopy:(id)arg1;
- (id)initWithPersistentObject:(id)arg1;
- (void)insertPersistentObjectIfNeeded;
- (id)inverseObjectWithObject:(id)arg1 diff:(id *)arg2;
- (BOOL)isCompletelyEqual:(id)arg1;
- (BOOL)isDeleted;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1 comparingKeys:(id)arg2 compareImmutableKeys:(BOOL)arg3 ignoringProperties:(id)arg4;
- (BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2;
- (BOOL)isPropertyUnavailable:(id)arg1;
- (BOOL)isSaved;
- (BOOL)isUndeleted;
- (void)markAsCommitted;
- (void)markAsDeleted;
- (void)markAsNew;
- (void)markAsNotNew;
- (void)markAsSaved;
- (void)markAsUndeleted;
- (unsigned long long)meltedAndCachedMultiRelationCountForKey:(id)arg1;
- (id)meltedAndCachedMultiRelationObjectsForKey:(id)arg1;
- (id)meltedAndCachedSingleRelationObjectForKey:(id)arg1;
- (id)meltedObjectInStore:(id)arg1;
- (id)multiChangedObjectValuesForKey:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectID;
- (id)prepareReminderKitObjectForSaveWithUpdatedBackingObjectProvider:(id)arg1;
- (id)previouslySavedObject;
- (id)privacyDescription;
- (void)rebase;
- (void)rebaseSkippingRelationProperties:(id)arg1;
- (void)refetch;
- (BOOL)refresh;
- (void)removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;
- (void)removeMultiChangedObjectValue:(id)arg1 forKey:(id)arg2;
- (void)removeMultiChangedObjectValues:(id)arg1 forKey:(id)arg2;
- (void)replaceMultiChangedObjectValuesWithObjectValues:(id)arg1 forKey:(id)arg2;
- (void)reset;
- (BOOL)revert;
- (void)rollback;
- (int)rowID;
- (void)setCachedMeltedObject:(id)arg1 forSingleValueKey:(id)arg2;
- (void)setCachedMeltedObjects:(id)arg1 forMultiValueKey:(id)arg2;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)setSingleChangedValue:(id)arg1 forKey:(id)arg2;
- (id)singleChangedValueForKey:(id)arg1;
- (id)snapshotCopy;
- (void)updateAfterApplyingChanges:(id)arg1;
- (void)updateMeltedAndCachedMultiRelationObjects:(id)arg1 forKey:(id)arg2;
- (void)updateMeltedAndCachedSingleRelationObject:(id)arg1 forKey:(id)arg2 frozenClass:(Class)arg3;
- (void)updateMeltedCacheForChangeSet:(id)arg1;
- (void)updateMultiValueCacheForChangeSet:(id)arg1 preservingExistingAdds:(BOOL)arg2;
- (void)updatePersistentObject;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (void)updatePersistentValueForKeyIfNeeded:(id)arg1;
- (BOOL)validate:(id *)arg1;
- (BOOL)validateWithOwner:(id)arg1 error:(id *)arg2;

@end

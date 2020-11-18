//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseTransaction, HDProfile, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString;

@interface HDDataEntityDeletionContext : NSObject
{
    HDProfile *_profile;
    NSMutableDictionary *_deleteStatementsByClassName;
    NSMutableDictionary *_deletedObjectProvenanceIDsByOriginalProvenanceID;
    NSMutableDictionary *_localSourceIDsByOriginalSourceID;
    NSMutableSet *_deletedObjectTypeSet;
    NSString *_startAndEndDatesSQL;
    NSString *_deleteInfoSQL;
    BOOL _insertDeletedObjects;
    BOOL _preserveStartAndEndDates;
    BOOL _callWillDeleteFromDatabase;
    HDDatabaseTransaction *_transaction;
    CDUnknownBlockType _recursiveDeleteAuthorizationBlock;
    NSNumber *_lastInsertedDeletedObjectPersistentID;
    unsigned long long _deletedObjectCount;
}

@property (nonatomic) BOOL callWillDeleteFromDatabase; // @synthesize callWillDeleteFromDatabase=_callWillDeleteFromDatabase;
@property (readonly, nonatomic) unsigned long long deletedObjectCount; // @synthesize deletedObjectCount=_deletedObjectCount;
@property (readonly, copy, nonatomic) NSSet *deletedObjectTypeSet; // @synthesize deletedObjectTypeSet=_deletedObjectTypeSet;
@property (nonatomic) BOOL insertDeletedObjects; // @synthesize insertDeletedObjects=_insertDeletedObjects;
@property (readonly, nonatomic) NSNumber *lastInsertedDeletedObjectPersistentID; // @synthesize lastInsertedDeletedObjectPersistentID=_lastInsertedDeletedObjectPersistentID;
@property (nonatomic) BOOL preserveStartAndEndDates; // @synthesize preserveStartAndEndDates=_preserveStartAndEndDates;
@property (copy, nonatomic) CDUnknownBlockType recursiveDeleteAuthorizationBlock; // @synthesize recursiveDeleteAuthorizationBlock=_recursiveDeleteAuthorizationBlock;
@property (readonly, nonatomic) HDDatabaseTransaction *transaction; // @synthesize transaction=_transaction;

- (void).cxx_destruct;
- (BOOL)_deleteAssociatedObjectsForPersistentID:(long long)arg1 entityClass:(Class)arg2 deletionDate:(id)arg3 error:(id *)arg4;
- (id)_localSourceIDForSourceID:(id)arg1 error:(id *)arg2;
- (id)_provenanceIDForDeletedObjectWithOriginalProvenanceID:(id)arg1 error:(id *)arg2;
- (BOOL)_startAndEndDatesForSampleWithPersistentID:(long long)arg1 startTimestampOut:(double *)arg2 endTimestampOut:(double *)arg3 database:(id)arg4 error:(id *)arg5;
- (struct _HDObjectDeletionInfo)deleteInfoForObjectWithUUID:(id)arg1 error:(id *)arg2;
- (BOOL)deleteObjectWithPersistentID:(long long)arg1 entityClass:(Class)arg2 error:(id *)arg3;
- (BOOL)deleteObjectWithPersistentID:(long long)arg1 objectUUID:(id)arg2 entityClass:(Class)arg3 objectType:(id)arg4 provenanceIdentifier:(id)arg5 deletionDate:(id)arg6 error:(id *)arg7;
- (void)finish;
- (id)initWithProfile:(id)arg1 transaction:(id)arg2;

@end

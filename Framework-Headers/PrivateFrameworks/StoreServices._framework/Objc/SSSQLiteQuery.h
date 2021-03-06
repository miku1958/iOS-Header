//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase, SSSQLiteQueryDescriptor;

@interface SSSQLiteQuery : NSObject
{
    SSSQLiteDatabase *_database;
    SSSQLiteQueryDescriptor *_descriptor;
}

@property (readonly) long long countOfEntities;
@property (readonly) SSSQLiteDatabase *database;
@property (readonly) SSSQLiteQueryDescriptor *queryDescriptor;

- (id)_newSelectSQLWithProperties:(const id *)arg1 count:(unsigned long long)arg2;
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)copyEntityIdentifiers;
- (id)copySelectSQLWithProperties:(const id *)arg1 count:(unsigned long long)arg2;
- (BOOL)createTemporaryTableWithName:(id)arg1 properties:(const id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (BOOL)deleteAllEntities;
- (void)enumerateMemoryEntitiesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersistentIDsAndProperties:(const id *)arg1 count:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;

@end


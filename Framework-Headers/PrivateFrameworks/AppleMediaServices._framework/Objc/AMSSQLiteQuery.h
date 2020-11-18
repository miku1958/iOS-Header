//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, AMSSQLiteQueryDescriptor;

__attribute__((visibility("hidden")))
@interface AMSSQLiteQuery : NSObject
{
    AMSSQLiteConnection *_connection;
    AMSSQLiteQueryDescriptor *_descriptor;
}

@property (readonly) AMSSQLiteConnection *connection;
@property (readonly) long long countOfEntities;
@property (readonly) AMSSQLiteQueryDescriptor *queryDescriptor;

- (void).cxx_destruct;
- (id)_newSelectSQLWithProperties:(id)arg1;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)copyEntityIdentifiers;
- (id)copySelectSQLWithProperties:(id)arg1;
- (BOOL)createTemporaryTableWithName:(id)arg1 properties:(id)arg2;
- (BOOL)deleteAllEntities;
- (void)enumerateMemoryEntitiesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initOnConnection:(id)arg1 descriptor:(id)arg2;

@end


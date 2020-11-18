//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/_PASDatabaseMigrationProtocol-Protocol.h>

@class NSString, _PASSqliteDatabase;

@interface SGQuickResponsesDatabase : NSObject <_PASDatabaseMigrationProtocol>
{
    _PASSqliteDatabase *_db;
}

@property (readonly, nonatomic) _PASSqliteDatabase *db; // @synthesize db=_db;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_openAnotherHandleForPath:(id)arg1;
+ (id)_openFreshHandleForPath:(id)arg1 inMemory:(BOOL)arg2;
- (void).cxx_destruct;
- (BOOL)_handleCorruptionWithCheck:(BOOL)arg1 path:(id)arg2 inMemory:(BOOL)arg3;
- (BOOL)_performMigrationsWithPath:(id)arg1 inMemory:(BOOL)arg2 attemptIteration:(int)arg3;
- (id)databaseHandle;
- (id)initInDirectory:(id)arg1 inMemory:(BOOL)arg2 withMigration:(BOOL)arg3;
- (id)initInDirectory:(id)arg1 inMemory:(BOOL)arg2 withMigration:(BOOL)arg3 forTools:(BOOL)arg4;
- (id)migrations;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)arg1;

@end

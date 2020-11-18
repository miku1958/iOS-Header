//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSString;

__attribute__((visibility("hidden")))
@interface GEOLocationShifterPersistence : NSObject
{
    NSString *_dbPath;
    GEOSQLiteDB *_db;
}

+ (id)sharedPersister;
- (void).cxx_destruct;
- (void)_findResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 usingStatement:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_setup:(id)arg1;
- (void)findExactResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDBFilePath:(id)arg1;
- (void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2;
- (void)removeAllEntries;
- (void)storeResponse:(id)arg1;
- (void)tearDown;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEODBWriter.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataDBWriter : GEODBWriter
{
    struct sqlite3_stmt *_sqlInsertPhoneNumber;
    struct sqlite3_stmt *_sqlInsertKeyString;
    struct sqlite3_stmt *_sqlDeleteAllPhoneNumbers;
    struct sqlite3_stmt *_sqlDeleteKeyStringForMUID;
    struct sqlite3_stmt *_sqlDeletePlaceDataForMUID;
}

- (void)_createKeyStringTable;
- (void)_createPhoneNumberTable;
- (void)_openIfNecessary;
- (void)_populateDBKey:(struct _GEOTileKey *)arg1 forMUID:(unsigned long long)arg2;
- (void)_setMUID:(id)arg1 forKey:(struct _GEOTileKey)arg2;
- (void)_setMUID:(unsigned long long)arg1 forPhoneNumber:(long long)arg2;
- (void)clear;
- (void)dealloc;
- (void)deleteComponentForKey:(union _GEOPlaceDataComponentKey)arg1;
- (void)deletePhoneNumberMapping;
- (void)deletePlaceDataForMUID:(unsigned long long)arg1;
- (id)initWithPath:(id)arg1;
- (void)performStatementPreparationTasks;
- (void)performTableCreationTasks;
- (void)setComponent:(id)arg1 forKey:(union _GEOPlaceDataComponentKey)arg2;
- (void)setComponentsFromPlaceData:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface WBSPerSitePreferencesSQLiteStore : NSObject
{
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

+ (id)sharedStore;
- (void).cxx_destruct;
- (void)_closeDatabase;
- (int)_createFreshDatabaseSchema;
- (BOOL)_isDatabaseOpen;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (BOOL)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (void)_openDatabase;
- (void)_openDatabaseIfNecessary;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (BOOL)_tryToPerformTransactionInBlock:(CDUnknownBlockType)arg1;
- (void)closeDatabase;
- (void)dealloc;
- (void)getAllDomainsConfiguredForPreference:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAllPreferenceInformationForPreference:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getDefaultValueForPreference:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTimestampAndValueOfPreference:(long long)arg1 forDomain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getValueOfPreference:(long long)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getValuesOfPreferences:(id)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;
- (void)removeAllPreferenceValuesFromPreference:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDefaultValue:(id)arg1 forPreference:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setValue:(id)arg1 ofPreference:(long long)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setValue:(id)arg1 ofPreference:(long long)arg2 forDomain:(id)arg3 includeTimestamp:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

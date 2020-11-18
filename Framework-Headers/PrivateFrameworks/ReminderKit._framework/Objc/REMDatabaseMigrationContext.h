//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString, REMStore, REMStoreContainerToken;

@interface REMDatabaseMigrationContext : NSObject
{
    BOOL _hasPerformedEnsureAccountsExist;
    REMStoreContainerToken *_containerToken;
    REMStore *_cachedStore;
    NSDate *_migrationStartDate;
    NSString *_lastReportedErrorIdentifier;
    unsigned long long _lastReportedErrorStage;
    NSError *_lastReportedError;
}

@property (strong, nonatomic) REMStore *cachedStore; // @synthesize cachedStore=_cachedStore;
@property (strong, nonatomic) REMStoreContainerToken *containerToken; // @synthesize containerToken=_containerToken;
@property (nonatomic) BOOL hasPerformedEnsureAccountsExist; // @synthesize hasPerformedEnsureAccountsExist=_hasPerformedEnsureAccountsExist;
@property (nonatomic) BOOL isDatabaseMigrated;
@property (strong, nonatomic) NSError *lastReportedError; // @synthesize lastReportedError=_lastReportedError;
@property (strong, nonatomic) NSString *lastReportedErrorIdentifier; // @synthesize lastReportedErrorIdentifier=_lastReportedErrorIdentifier;
@property (nonatomic) unsigned long long lastReportedErrorStage; // @synthesize lastReportedErrorStage=_lastReportedErrorStage;
@property (strong, nonatomic) NSDate *migrationStartDate; // @synthesize migrationStartDate=_migrationStartDate;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;

- (void).cxx_destruct;
- (BOOL)_cleanLocalDatabases:(id *)arg1;
- (void)_diagnosticReportWithStage:(unsigned long long)arg1 failureIdentifier:(id)arg2 error:(id)arg3;
- (id)_migrationAccountInfosFromDEPRECATEDInfoDictionaryList:(id)arg1;
- (void)_postMigrationLocalAccountCleanup;
- (void)dealloc;
- (void)destroySandboxContainerIfNecessary;
- (BOOL)ensureAccountsExist:(id *)arg1;
- (BOOL)ensureAccountsExist:(id)arg1 error:(id *)arg2;
- (BOOL)ensureAccountsExistWithMigrationAccountInfos:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithSandboxDatabaseEnabled:(BOOL)arg1;
- (id)remStore;
- (void)reportMigrationDidFinishWithSuccess:(BOOL)arg1;
- (void)reportMigrationErrorWithIdentifier:(id)arg1 atStage:(unsigned long long)arg2 error:(id)arg3 objectLocator:(id)arg4;
- (void)reportMigrationWillBegin;
- (void)setShouldDataAccessStopSyncingReminders:(BOOL)arg1;

@end

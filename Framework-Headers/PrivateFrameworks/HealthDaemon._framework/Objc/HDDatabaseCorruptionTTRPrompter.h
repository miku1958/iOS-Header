//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HDDatabaseCorruptionTTRPromptDataSource;

@interface HDDatabaseCorruptionTTRPrompter : NSObject
{
    id<HDDatabaseCorruptionTTRPromptDataSource> _dataSource;
    CDUnknownBlockType _unitTest_willPresentTTRAlertHandler;
}

@property (copy, nonatomic) CDUnknownBlockType unitTest_willPresentTTRAlertHandler; // @synthesize unitTest_willPresentTTRAlertHandler=_unitTest_willPresentTTRAlertHandler;

+ (id)defaultPrompterWithProfile:(id)arg1;
- (void).cxx_destruct;
- (id)_currentDatabaseCorruptionContextForError:(id)arg1;
- (id)_currentDatabaseIdentifierAndBuildString;
- (id)_defaultKeyForSQLite:(BOOL)arg1 databaseType:(long long)arg2 suffix:(id)arg3;
- (BOOL)_deviceSupportsCorruptionPrompt;
- (void)_persistDatabaseCorruptionContext:(id)arg1 isSQLite:(BOOL)arg2 databaseType:(long long)arg3;
- (void)_persistDatabaseIdentifierAndBuild:(id)arg1 isSQLite:(BOOL)arg2 databaseType:(long long)arg3;
- (id)_persistedDatabaseCorruptionContextForSQLite:(BOOL)arg1 databaseType:(long long)arg2;
- (id)_persistedDatabaseIdentifierAndBuildFromPriorPromptForSQLite:(BOOL)arg1 databaseType:(long long)arg2;
- (void)_popAlertWithRadarDescription:(id)arg1;
- (void)_promptTTRWithDatabaseType:(long long)arg1 isSQLite:(BOOL)arg2 description:(id)arg3 error:(id)arg4;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)promptTTRForHFDCorruptionWithFailureType:(long long)arg1 corruptionError:(id)arg2;
- (void)promptTTRForSQLiteCorruptionWithDatabaseType:(long long)arg1 corruptionError:(id)arg2;

@end

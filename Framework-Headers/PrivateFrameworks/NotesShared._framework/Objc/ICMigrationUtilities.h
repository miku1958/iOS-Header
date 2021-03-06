//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICMigrationUtilities : NSObject
{
}

+ (void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1;
+ (void)deleteMigratedHTMLAccountsInContext:(id)arg1;
+ (void)fetchAndSetMigrationStateForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchMigrationStateAndUserRecordForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchMigrationStateForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 didMigrateOnMac:(BOOL)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)updateAllLegacyAccountMigrationStatesInContext:(id)arg1;
+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1;

@end


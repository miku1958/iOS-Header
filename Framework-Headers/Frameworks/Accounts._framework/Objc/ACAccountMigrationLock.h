//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupport/CPExclusiveLock.h>

@interface ACAccountMigrationLock : CPExclusiveLock
{
}

+ (id)_currentSystemVersion;
+ (id)createAccountMigrationLock;
+ (BOOL)migrationFinished;
+ (void)signalMigrationFinished;
+ (void)writeMigrationVersionPref;

@end

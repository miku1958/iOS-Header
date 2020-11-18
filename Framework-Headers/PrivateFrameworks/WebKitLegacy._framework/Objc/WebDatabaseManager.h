//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebDatabaseManager : NSObject
{
}

+ (void)didFinishLastTransaction;
+ (void)endBackgroundTask;
+ (void)removeEmptyDatabaseFiles;
+ (void)scheduleEmptyDatabaseRemoval;
+ (id)sharedWebDatabaseManager;
+ (void)startBackgroundTask;
+ (void)willBeginFirstTransaction;
- (id)databasesWithOrigin:(id)arg1;
- (void)deleteAllDatabases;
- (void)deleteAllIndexedDatabases;
- (BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (BOOL)deleteOrigin:(id)arg1;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (id)init;
- (id)origins;

@end


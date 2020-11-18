//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVTArchiverBasedStorePersistence : NSObject
{
}

+ (BOOL)_createStoreEmptyFileIfNeededAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_createStoreFolderIfNeededAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_createStoreIfNeededAtLocation:(id)arg1 logger:(id)arg2 error:(id *)arg3;
+ (id)_migrateDifferentAvatarKitVersionsForContent:(id)arg1 logger:(id)arg2;
+ (BOOL)_migrateFromPre0_5ToCurrentForStoreAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_migrateFromPre0_6ToCurrentForStoreAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_performMigrationIfNeededForStoreAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id *)arg4;
+ (id)_readContentFromDiskAtLocation:(id)arg1 logger:(id)arg2 error:(id *)arg3;
+ (BOOL)_writeContent:(id)arg1 toDiskAtLocation:(id)arg2 logger:(id)arg3 error:(id *)arg4;
+ (id)currentVersion;
+ (id)dbLocationForStoreLocation:(id)arg1;
+ (BOOL)isFileNotFoundError:(id)arg1;
+ (id)readContentFromDiskAtLocation:(id)arg1 logger:(id)arg2 error:(id *)arg3;
+ (id)readVersionForStoreAtLocation:(id)arg1 error:(id *)arg2;
+ (BOOL)writeContent:(id)arg1 toDiskAtLocation:(id)arg2 logger:(id)arg3 error:(id *)arg4;
+ (BOOL)writeVersion:(id)arg1 toDiskAtLocation:(id)arg2 error:(id *)arg3;

@end


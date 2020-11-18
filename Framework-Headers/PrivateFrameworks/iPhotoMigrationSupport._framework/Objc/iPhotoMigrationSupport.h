//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibrary;

@interface iPhotoMigrationSupport : NSObject
{
    int _inFlightMigrationCount;
    PLPhotoLibrary *_pl_library;
}

@property (readonly, nonatomic) BOOL migrationWasInterrupted;
@property (strong, nonatomic, setter=setPL_library:) PLPhotoLibrary *pl_library; // @synthesize pl_library=_pl_library;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_createParentDirectoryIfNecessaryWithPath:(id)arg1;
- (void)_decrementInFlightMigrationCount;
- (void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)arg1 subDirectoryName:(id)arg2 description:(id)arg3;
- (id)_displayableUuidWithUuid:(id)arg1;
- (id)_firstFilePathWithAnyExtensionAtPath:(id)arg1 extension:(id *)arg2;
- (id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)arg1;
- (id)_iPhotoToPhotosUuidMapTable;
- (id)_iPhotoUuidsWithProjectDict:(id)arg1 type:(unsigned long long)arg2;
- (id)_inFlightMigrationMarkerFilePath;
- (void)_incrementInFlightMigrationCount;
- (BOOL)_isMigrating;
- (id)_migratediPhotoDir;
- (void)_migrateiPhotoLibraryWorkerWithProgressHandler:(CDUnknownBlockType)arg1 iPhotoLibraryDir:(id)arg2;
- (id)_preMigratediPhotoDir;
- (id)_premigratedProjectUuidMapTable;
- (BOOL)_validateUuid:(id)arg1;
- (void)addKeywordIfDoesNotExist:(id)arg1 forAsset:(id)arg2;
- (void)checkForUnmigratediPhotoContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)fireMigrationOfiPhotoLibraryWithProgressHandler:(CDUnknownBlockType)arg1;
- (void)setCaption:(id)arg1 forAsset:(id)arg2;

@end


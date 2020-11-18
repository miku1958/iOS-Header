//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject
{
    PLPhotoLibraryPathManager *_pathManager;
}

+ (BOOL)isCameraDirectoryFolderName:(id)arg1;
+ (BOOL)isImportDirectoryFolderName:(id)arg1;
- (void).cxx_destruct;
- (id)_DCIMFolderNameWithNumber:(long long)arg1;
- (id)_dcimDirectory;
- (id)init;
- (id)initWithPathManager:(id)arg1;
- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;
- (BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg1;
- (id)urlForNewDCIMFolderWithFolderNumber:(long long *)arg1;

@end

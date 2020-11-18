//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DEUtils : NSObject
{
}

+ (BOOL)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2;
+ (BOOL)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2 keepSourceDir:(BOOL)arg3;
+ (id)copyAndReturn:(id)arg1 toDir:(id)arg2;
+ (BOOL)copyFile:(id)arg1 toDir:(id)arg2;
+ (id)copyItem:(id)arg1 toDestinationDir:(id)arg2 zipped:(BOOL)arg3;
+ (id)copyPath:(id)arg1 toDestinationDir:(id)arg2 zipped:(BOOL)arg3;
+ (id)copyPaths:(id)arg1 toDestinationDir:(id)arg2 withZipName:(id)arg3;
+ (id)createUserOwnedDirectoryAtUrl:(id)arg1;
+ (id)dirForTarGz:(id)arg1;
+ (void)excludeFromBackup:(id)arg1;
+ (id)findAllItems:(id)arg1 includeDirs:(BOOL)arg2;
+ (id)findAllfiles:(id)arg1;
+ (id)findEntriesInDirectory:(id)arg1 createdAfter:(id)arg2 matchingPattern:(id)arg3;
+ (unsigned long long)getDirectorySize:(id)arg1;
+ (unsigned long long)getFileSystemItemSize:(id)arg1;
+ (BOOL)isValidDirectory:(id)arg1;
+ (id)lsDir:(id)arg1;
+ (id)lsDir:(id)arg1 sorted:(BOOL)arg2;
+ (id)processErrorResponse:(id)arg1;
+ (void)removeFile:(id)arg1;
+ (id)tarGzForDirectoryUrl:(id)arg1;
+ (id)tarGzForDirectoryUrl:(id)arg1 validatesUrl:(BOOL)arg2;
+ (id)uniqueDateString;
+ (id)urlByRemovingComponentsBefore:(id)arg1 source:(id)arg2 keepComponent:(BOOL)arg3;
+ (id)userFileAttributes;
+ (id)userLibraryDirectoryForApp:(id)arg1;

@end


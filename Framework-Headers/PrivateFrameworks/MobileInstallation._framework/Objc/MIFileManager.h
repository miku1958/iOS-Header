//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MIFileManager : NSObject
{
}

+ (id)defaultManager;
- (id)_cloneFileToClearExtraFileReferences:(id)arg1 entry:(struct _ftsent *)arg2 usingStagingDir:(id)arg3 clonedReplacementFiles:(id)arg4 error:(id *)arg5;
- (BOOL)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 alwaysClone:(BOOL)arg4 error:(id *)arg5;
- (BOOL)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 error:(id *)arg4;
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(BOOL)arg2;
- (id)_realPathWhatExistsInPath:(id)arg1;
- (BOOL)_removeACLAtPath:(const char *)arg1 isDir:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;
- (BOOL)bundleAtURLIsPlaceholder:(id)arg1;
- (BOOL)captureStoreDataFromDirectory:(id)arg1 toDirectory:(id)arg2 doCopy:(BOOL)arg3 failureIsFatal:(BOOL)arg4 withError:(id *)arg5;
- (BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 alwaysClone:(BOOL)arg3 error:(id *)arg4;
- (BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id *)arg5;
- (BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 error:(id *)arg4;
- (BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id *)arg3;
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;
- (BOOL)dataProtectionClassOfItemAtURL:(id)arg1 class:(int *)arg2 error:(id *)arg3;
- (id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;
- (id)enumerateURLsForItemsInDirectoryAtURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)installTypeForBundle:(id)arg1 error:(id *)arg2;
- (BOOL)itemDoesNotExistAtURL:(id)arg1;
- (BOOL)itemExistsAtURL:(id)arg1;
- (BOOL)itemExistsAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)markBundleAsPlaceholder:(id)arg1 withError:(id *)arg2;
- (BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;
- (BOOL)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)setInstallType:(id)arg1 onBundle:(id)arg2 error:(id *)arg3;
- (BOOL)setOwnerOfURL:(id)arg1 toUID:(unsigned int)arg2 gid:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)setPermissionsForURL:(id)arg1 toMode:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)setUniqueInstallID:(id)arg1 onBundle:(id)arg2 error:(id *)arg3;
- (BOOL)standardizeOwnershipAtURL:(id)arg1 toUID:(unsigned int)arg2 GID:(unsigned int)arg3 removeACLs:(BOOL)arg4 setProtectionClass:(BOOL)arg5 foundSymlink:(BOOL *)arg6 clearExtraFileReferencesUsingStagingDir:(id)arg7 error:(id *)arg8;
- (BOOL)traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)uniqueInstallIDForBundle:(id)arg1 error:(id *)arg2;
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(BOOL)arg2 error:(id *)arg3;
- (BOOL)verifySymlinksDoNotEscapeURL:(id)arg1 error:(id *)arg2;

@end


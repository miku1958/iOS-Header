//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (NSFileManagerAdditions)
- (BOOL)mf_canWriteToDirectoryAtPath:(id)arg1;
- (void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;
- (id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)mf_makeCompletePath:(id)arg1 mode:(int)arg2;
- (id)mf_makeUniqueFileInDirectory:(id)arg1;
- (id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;
- (BOOL)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id *)arg3;
- (BOOL)mf_setValue:(id)arg1 forExtendedAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id *)arg4;
- (long long)mf_sizeForDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (long long)mf_sizeForDirectoryAtURL:(id)arg1 error:(id *)arg2;
- (id)mf_valueForExtendedAttribute:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
@end


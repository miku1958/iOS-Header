//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (BRCPathAdditions)
+ (id)brc_emptyFilenameAlternativeName;
+ (id)brc_pathForDirectory:(unsigned long long)arg1;
+ (id)brc_pathWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;
+ (id)brc_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)brc_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(BOOL)arg4;
- (long long)brc_compareToStringForHFS:(id)arg1 isCaseSensitive:(BOOL)arg2;
- (id)brc_displayFilenameWithExtensionHidden:(BOOL)arg1;
- (const char *)brc_fileSystemRepresentation;
- (BOOL)brc_isAbsolutePath;
- (BOOL)brc_isEqualToStringForHFS:(id)arg1 isCaseSensitive:(BOOL)arg2;
- (BOOL)brc_isExcludedWithMaximumDepth:(unsigned int)arg1;
- (BOOL)brc_isInPackage;
- (BOOL)brc_isPackageRoot;
- (BOOL)brc_isSideFaultName;
- (BOOL)brc_nameIsRepresentableOnHFS;
- (id)brc_pathExtension;
- (id)brc_pathOfPackageRoot;
- (id)brc_pathRelativeToDirectory:(unsigned long long)arg1;
- (id)brc_pathRelativeToPackageRoot;
- (id)brc_pathRelativeToPath:(id)arg1;
- (id)brc_realpath;
- (id)brc_realpathKeepingLastSymlink;
- (id)brc_representableDirectoryExtension;
- (id)brc_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(BOOL)arg3;
- (id)brc_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(BOOL)arg3;
- (id)brc_sideFaultName;
- (id)brc_stringByDeletingPathBounceNo:(unsigned long long *)arg1;
- (id)brc_stringByDeletingPathBounceNo:(unsigned long long *)arg1 andPathExtension:(id *)arg2;
- (id)brc_stringByDeletingPathExtension;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FPAdditions)
+ (id)fp_homeDirectory;
+ (id)fp_homeDirectoryForUserID:(unsigned int)arg1;
+ (id)fp_supportDirectory;
- (id)fp_addDocumentTrackingWithError:(id *)arg1;
- (BOOL)fp_associateThumbnailFromDocumentAtURL:(id)arg1 error:(id *)arg2;
- (id)fp_copyToTempFolderWithFilename:(id)arg1 error:(id *)arg2;
- (id)fp_directorySizeWithError:(id *)arg1;
- (unsigned long long)fp_fileSize;
- (void)fp_hideExtension:(BOOL)arg1;
- (BOOL)fp_isFolder;
- (id)fp_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;
- (BOOL)fp_makeWritableWithError:(id *)arg1;
- (BOOL)fp_matchesCloudDocsURL:(id)arg1;
- (BOOL)fp_matchesFileProviderHeuristics:(unsigned int)arg1;
- (BOOL)fp_matchesFileProviderURL:(id)arg1;
- (BOOL)fp_matchesLocalStorageURL:(id)arg1;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 byCopying:(BOOL)arg2 error:(id *)arg3;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 error:(id *)arg2;
- (long long)fp_relationshipToItemAtURL:(id)arg1;
- (id)fp_relativePathOf:(id)arg1;
- (id)fp_scopeDescription;
- (id)fp_shortDescription;
@end


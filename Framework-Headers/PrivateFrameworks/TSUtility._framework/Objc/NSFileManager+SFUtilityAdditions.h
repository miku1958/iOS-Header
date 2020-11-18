//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SFUtilityAdditions)
- (BOOL)_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(BOOL)arg4 error:(id *)arg5;
- (BOOL)_fileProtection:(id)arg1 isGreaterThan:(id)arg2;
- (BOOL)_fileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 passesTest:(CDUnknownBlockType)arg3;
- (void)_logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 indent:(id)arg3;
- (BOOL)_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id *)arg4 shouldUpdateAttributesHandler:(CDUnknownBlockType)arg5;
- (BOOL)applyFileAttributesFromDocumentAtURL:(id)arg1 toDocumentAtURL:(id)arg2 error:(id *)arg3;
- (BOOL)changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(BOOL)arg4 error:(id *)arg5;
- (BOOL)changeFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(BOOL)arg3 error:(id *)arg4;
- (unsigned long long)directoryUsage:(id)arg1;
- (BOOL)hasAtLeastFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3;
- (BOOL)hasAtMostFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3;
- (void)logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2;
- (unsigned long long)pathUsage:(id)arg1;
- (BOOL)setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id *)arg4;
@end

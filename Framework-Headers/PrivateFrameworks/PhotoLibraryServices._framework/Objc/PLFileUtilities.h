//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLFileUtilities : NSObject
{
}

+ (id)_mobileOwnerAttributes;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id *)arg2 usingFileManager:(id)arg3;
+ (BOOL)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (BOOL)createDirectoryAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)createDirectoryAtPath:(id)arg1 error:(id *)arg2 usingFileManager:(id)arg3;
+ (id)fileManager;
+ (BOOL)filePath:(id)arg1 hasPrefix:(id)arg2;
+ (BOOL)hasDiskSpaceToCopyFileAtURL:(id)arg1;
+ (id)realPathForPath:(id)arg1 error:(id *)arg2;
+ (BOOL)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (BOOL)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id *)arg3;
+ (BOOL)supportsClone;

@end


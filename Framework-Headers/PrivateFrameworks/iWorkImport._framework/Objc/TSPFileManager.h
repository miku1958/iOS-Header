//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPFileManager : NSObject
{
}

+ (BOOL)copyReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 error:(id *)arg6;
+ (void)copyReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)copyReadChannel:(id)arg1 decryptionInfo:(id)arg2 toWriteChannel:(id)arg3 encryptionInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)copyReadChannel:(id)arg1 size:(unsigned long long)arg2 toWriteChannel:(id)arg3 synchronous:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 sourcePath:(id)arg3 targetPath:(id)arg4;
+ (id)ioCompletionQueue;
+ (BOOL)linkFileAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (BOOL)linkOrCopyURL:(id)arg1 decryptionInfo:(id)arg2 toURL:(id)arg3 encryptionInfo:(id)arg4 canLink:(BOOL)arg5 error:(id *)arg6;
+ (void)transcodeReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;

@end


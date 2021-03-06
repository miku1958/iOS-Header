//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface OKDocumentsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_documentsAccessQueue;
}

+ (id)defaultManager;
- (void)_performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)deleteFileURL:(id)arg1 error:(id *)arg2;
- (id)documentURLs:(id *)arg1;
- (id)documentURLsAtDirectoryURL:(id)arg1 error:(id *)arg2;
- (id)documentsDirectoryURL;
- (id)duplicateFileURL:(id)arg1 error:(id *)arg2;
- (id)duplicateFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)importFileURL:(id)arg1 error:(id *)arg2;
- (id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 copy:(BOOL)arg3 error:(id *)arg4;
- (id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)localDocumentsDirectoryURL;
- (void)performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (id)renameFileURL:(id)arg1 toFileName:(id)arg2 error:(id *)arg3;
- (id)uniqueFileURLForFileName:(id)arg1 error:(id *)arg2;
- (id)uniqueFileURLForFileName:(id)arg1 inDirectoryURL:(id)arg2 error:(id *)arg3;

@end


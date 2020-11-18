//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUZipArchive.h>

@class NSObject, NSURL, TSUZipFileDescriptorWrapper;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUZipFileArchive : TSUZipArchive
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _archiveLength;
    TSUZipFileDescriptorWrapper *_fdWrapper;
    NSURL *_temporaryDirectoryURL;
    NSURL *_URL;
}

+ (BOOL)isZipArchiveAtFD:(int)arg1;
+ (BOOL)isZipArchiveAtURL:(id)arg1 error:(id *)arg2;
+ (void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)URL;
- (unsigned long long)archiveLength;
- (BOOL)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id *)arg2;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)isValid;
- (id)newArchiveReadChannel;
- (BOOL)openWithURL:(id)arg1 error:(id *)arg2;
- (void)removeTemporaryDirectory;
- (BOOL)reopenWithTemporaryURL:(id)arg1 error:(id *)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUZipArchive.h>

@class NSObject, NSURL;
@protocol OS_dispatch_queue, TSUReadChannel;

@interface TSUZipFileArchive : TSUZipArchive
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _archiveLength;
    id<TSUReadChannel> _archiveReadChannel;
    NSURL *_temporaryDirectoryURL;
}

+ (void)readArchiveFromURL:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (unsigned long long)archiveLength;
- (BOOL)copyToTemporaryLocationRelativeToURL:(id)arg1;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithURL:(id)arg1;
- (id)initWithWriter:(id)arg1 atURL:(id)arg2;
- (BOOL)openWithURL:(id)arg1;
- (id)readChannel;
- (void)removeTemporaryDirectory;
- (BOOL)reopenWithTemporaryURL:(id)arg1;

@end


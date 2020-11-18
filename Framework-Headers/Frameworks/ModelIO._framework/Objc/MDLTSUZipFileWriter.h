//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLTSUZipWriter.h>

@protocol MDLTSURandomWriteChannel;

@interface MDLTSUZipFileWriter : MDLTSUZipWriter
{
    id<MDLTSURandomWriteChannel> _writeChannel;
    CDUnknownBlockType _writeChannelCompletionHandler;
}

+ (void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(CDUnknownBlockType)arg5;
+ (void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)copyEntriesFromZipFileWriter:(id)arg1 readingFromURL:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)copyRemainingEntries:(id)arg1 fromArchive:(id)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithZipFileArchive:(id)arg1 error:(id *)arg2;
- (id)initWithZipFileArchive:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)prepareWriteChannelWithCloseCompletionHandler:(CDUnknownBlockType)arg1;
- (void)truncateToOffsetImpl:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface MFFileArchive : NSObject
{
    NSData *_inputData;
    NSMutableData *_outputData;
    CDUnknownBlockType _readerBlock;
    CDUnknownBlockType _writerBlock;
    struct _NSRange _inputRange;
}

@property (strong, nonatomic) NSData *inputData; // @synthesize inputData=_inputData;
@property (nonatomic) struct _NSRange inputRange; // @synthesize inputRange=_inputRange;
@property (strong, nonatomic) NSMutableData *outputData; // @synthesize outputData=_outputData;
@property (copy, nonatomic) CDUnknownBlockType readerBlock; // @synthesize readerBlock=_readerBlock;
@property (copy, nonatomic) CDUnknownBlockType writerBlock; // @synthesize writerBlock=_writerBlock;

+ (id)archive;
- (void).cxx_destruct;
- (int)_archiveDirectoryName:(id)arg1 withArchive:(struct archive *)arg2 error:(id *)arg3;
- (id)_compressContents:(id)arg1 error:(id *)arg2;
- (int)_compressContents:(id)arg1 fileName:(id)arg2 withArchive:(struct archive *)arg3 error:(id *)arg4;
- (int)_compressContents:(id)arg1 withArchive:(struct archive *)arg2 error:(id *)arg3;
- (int)_compressWithArchive:(struct archive *)arg1 error:(id *)arg2;
- (struct archive *)_compressionArchive;
- (struct archive_entry *)_compressionArchiveEntryWithName:(id)arg1 length:(unsigned long long)arg2 isDirectory:(BOOL)arg3;
- (int)_compressionCompleteForArchive:(struct archive *)arg1 error:(id *)arg2;
- (BOOL)_decompressArchive:(struct archive *)arg1 intoArchiveDirectory:(id)arg2 error:(id *)arg3;
- (BOOL)_decompressContents:(id)arg1 inMemoryWithError:(id *)arg2 mainEntry:(BOOL)arg3;
- (struct archive *)_decompressionArchive;
- (int)_decompressionCompleteForArchive:(struct archive *)arg1 error:(id *)arg2;
- (id)_errorForArchiveStatus:(long long)arg1;
- (void)compressContents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)compressFolder:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)decompressContents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)description;
- (id)init;
- (void)registerBlocks:(CDUnknownBlockType)arg1 writer:(CDUnknownBlockType)arg2;
- (void)unregisterBlocks;

@end


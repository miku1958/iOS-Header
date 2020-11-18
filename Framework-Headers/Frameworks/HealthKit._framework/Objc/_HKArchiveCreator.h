//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSURL;

@interface _HKArchiveCreator : NSObject
{
    struct archive *_archive;
    NSURL *_archiveURL;
    NSFileHandle *_fileHandle;
}

@property (readonly, copy, nonatomic) NSURL *archiveURL; // @synthesize archiveURL=_archiveURL;
@property (readonly, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;

- (void).cxx_destruct;
- (void)_addDataOfSize:(long long)arg1 toPathInArchive:(id)arg2 fromByteProvider:(CDUnknownBlockType)arg3;
- (void)addDataToArchive:(id)arg1 pathInArchive:(id)arg2;
- (void)addFileToArchive:(id)arg1 pathInArchive:(id)arg2;
- (BOOL)archiveIsValid;
- (void)closeArchive;
- (void)dealloc;
- (id)initWithFileHandle:(id)arg1 archiveType:(long long)arg2;
- (id)initWithURL:(id)arg1 archiveType:(long long)arg2;
- (id)initWithURL:(id)arg1 fileHandle:(id)arg2 archiveType:(long long)arg3;
- (long long)writeData:(const void *)arg1 ofLength:(unsigned long long)arg2;

@end


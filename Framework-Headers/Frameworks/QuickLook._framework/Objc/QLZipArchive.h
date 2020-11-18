//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSFileWrapper, NSURL;

@interface QLZipArchive : NSObject
{
    struct archive *_archive;
    NSURL *_url;
    NSData *_data;
    NSFileWrapper *_fileWrapper;
}

- (void).cxx_destruct;
- (BOOL)_reopenWithError:(id *)arg1;
- (void)dealloc;
- (void)enumerateEntriesWithHandler:(CDUnknownBlockType)arg1;
- (id)fileWrapper;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)libarchiveError;
- (id)readCurrentDataWithEntry:(struct archive_entry *)arg1 error:(id *)arg2;

@end


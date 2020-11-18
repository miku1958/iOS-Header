//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSURL, QLZipArchive;

__attribute__((visibility("hidden")))
@interface QLZipArchiveEntry : NSObject
{
    struct archive_entry *_entry;
    NSData *_data;
    NSError *_error;
    QLZipArchive *_archive;
    NSURL *_url;
}

@property (weak) QLZipArchive *archive; // @synthesize archive=_archive;
@property (strong) NSData *data; // @synthesize data=_data;
@property struct archive_entry *entry; // @synthesize entry=_entry;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (id)readDataWithError:(id *)arg1;

@end


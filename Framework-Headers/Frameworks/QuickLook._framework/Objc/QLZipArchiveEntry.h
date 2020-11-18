//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSError, NSURL, QLZipArchive;

__attribute__((visibility("hidden")))
@interface QLZipArchiveEntry : NSObject
{
    struct archive_entry *_entry;
    QLZipArchive *_archive;
    NSData *_data;
    NSError *_error;
    NSURL *_url;
}

@property QLZipArchive *archive; // @synthesize archive=_archive;
@property NSData *data; // @synthesize data=_data;
@property struct archive_entry *entry; // @synthesize entry=_entry;
@property (nonatomic) NSURL *url; // @synthesize url=_url;

- (void)dealloc;
- (id)readDataWithError:(id *)arg1;

@end

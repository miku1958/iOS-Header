//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSString;

@interface _HKZipArchiveExtractor : NSObject
{
    NSString *_pathname;
    struct archive *_archive;
    struct archive_entry *_entry;
    BOOL _dataRead;
    NSData *_data;
    NSError *_lastError;
}

- (void).cxx_destruct;
- (void)_clearState;
- (id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(unsigned long long)arg1;
- (id)_getDataForCurrentEntryWithSize:(unsigned long long)arg1;
- (void)_logError:(id)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)getDataForCurrentEntry;
- (id)getDataForCurrentEntryWithMaxSizeBytes:(unsigned long long)arg1;
- (id)initWithPathname:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)lastError;

@end

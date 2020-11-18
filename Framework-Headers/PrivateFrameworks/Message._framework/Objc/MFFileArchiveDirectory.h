//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFFileArchiveEntry, NSData, NSError, NSMutableDictionary, NSURL;

@interface MFFileArchiveDirectory : NSObject
{
    NSMutableDictionary *_entries;
    NSMutableDictionary *_scrubbedEntries;
    MFFileArchiveEntry *_mainEntry;
    NSURL *_url;
    NSData *_contents;
    NSError *_error;
}

@property (strong, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property (readonly, strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

+ (struct CentralDirectory *)_centralDirectory:(id)arg1;
+ (struct CentralHeader *)_centralHeader:(id)arg1;
+ (id)_entriesFromCentralDictionary:(struct CentralDirectory *)arg1 inData:(id)arg2 archiveData:(id)arg3;
+ (BOOL)_hasZipSignature:(id)arg1;
+ (struct _NSRange)_rangeOfCentralDirectory:(long long)arg1;
+ (id)archiveDirectory;
+ (struct _NSRange)rangeOfCentralDirectoryInData:(id)arg1;
- (void)_scrubContentDirectory;
- (id)archiveEntries;
- (void)dealloc;
- (id)description;
- (BOOL)inputWithData:(id)arg1;
- (BOOL)inputWithURL:(id)arg1;
- (id)mainEntry;
- (id)scrubbedArchiveEntries;
- (BOOL)setArchiveEntry:(id)arg1;
- (void)setMainEntry:(id)arg1;

@end

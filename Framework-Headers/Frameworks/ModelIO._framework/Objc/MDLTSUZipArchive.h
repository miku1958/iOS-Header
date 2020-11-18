//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface MDLTSUZipArchive : NSObject
{
    unsigned long long _options;
    NSMutableDictionary *_entriesMap;
    NSMutableOrderedSet *_entries;
    long long _endOfLastEntry;
}

@property (readonly, nonatomic) unsigned long long archiveLength;
@property (readonly, nonatomic) long long endOfLastEntry; // @synthesize endOfLastEntry=_endOfLastEntry;
@property (readonly, nonatomic) unsigned long long entriesCount;
@property (readonly, nonatomic) BOOL hasNonEmptyEntries;
@property (readonly, nonatomic) BOOL isValid;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (void)collapseCommonRootDirectory;
- (id)containedZipArchiveForEntry:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)entryForName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)newArchiveReadChannel;
- (id)normalizeEntryName:(id)arg1;
- (void)readArchiveWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(unsigned long long)arg3 channel:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)readCentralFileHeaderWithBuffer:(const void **)arg1 dataSize:(unsigned long long *)arg2 error:(id *)arg3;
- (id)readChannelForEntry:(id)arg1;
- (id)readChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2;
- (void)readEndOfCentralDirectoryData:(id)arg1 eocdOffset:(long long)arg2 channel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)readExtraFieldsFromBuffer:(const void **)arg1 extraFieldsLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)readFileCommentFromBuffer:(const void **)arg1 fileCommentLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)readFilenameFromBuffer:(const void **)arg1 nameLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long *)arg4 error:(id *)arg5;
- (void)readLocalFileHeaderData:(id)arg1 atOffset:(long long)arg2 channel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readLocalFileHeaderEntriesFromChannel:(id)arg1 offset:(long long)arg2 previousEntry:(id)arg3 seekAttempts:(unsigned int)arg4 seekForward:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)readLocalFileHeaderFilenameAndExtraFieldsData:(id)arg1 forEntry:(id)arg2 error:(id *)arg3;
- (void)readZip64EndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readZip64EndOfCentralDirectoryLocatorData:(id)arg1 channel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg1 eocdOffset:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readZip64EndOfCentralDirectoryWithChannel:(id)arg1 offset:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)readZip64ExtraFieldFromBuffer:(const void *)arg1 dataLength:(unsigned short)arg2 entry:(id)arg3 error:(id *)arg4;
- (id)streamReadChannelForEntry:(id)arg1;
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2;

@end


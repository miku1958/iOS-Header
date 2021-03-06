//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BUZipWriterEntry, NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary;
@protocol BURandomWriteChannel, OS_dispatch_data, OS_dispatch_group, OS_dispatch_queue;

@interface BUZipWriter : NSObject
{
    NSArray *_sortedEntries;
    BOOL _closed;
    BOOL _calculateSize;
    BOOL _force32BitSize;
    BOOL _calculateCRC;
    unsigned int _CRCToMatch;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_channelQueue;
    id<BURandomWriteChannel> _writeChannel;
    NSObject<OS_dispatch_group> *_writeChannelCompletionGroup;
    NSMutableArray *_entries;
    NSMutableDictionary *_entriesMap;
    BUZipWriterEntry *_currentEntry;
    unsigned long long _sizeToMatch;
    NSDate *_lastModificationDateIfSizeAndCRCMatches;
    NSDate *_updatedEntryLastModificationDate;
    long long _currentOffset;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    NSMutableArray *_entryDatas;
    unsigned long long _entryDataSize;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _writtenOffset;
    NSError *_error;
}

@property (nonatomic) unsigned int CRCToMatch; // @synthesize CRCToMatch=_CRCToMatch;
@property (readonly) unsigned long long archiveLength;
@property (nonatomic) BOOL calculateCRC; // @synthesize calculateCRC=_calculateCRC;
@property (nonatomic) BOOL calculateSize; // @synthesize calculateSize=_calculateSize;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *channelQueue; // @synthesize channelQueue=_channelQueue;
@property (nonatomic, getter=isClosed) BOOL closed; // @synthesize closed=_closed;
@property (strong, nonatomic) BUZipWriterEntry *currentEntry; // @synthesize currentEntry=_currentEntry;
@property (nonatomic) long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property (strong, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property (readonly) unsigned long long entriesCount;
@property (strong, nonatomic) NSMutableDictionary *entriesMap; // @synthesize entriesMap=_entriesMap;
@property (nonatomic) unsigned long long entryDataSize; // @synthesize entryDataSize=_entryDataSize;
@property (strong, nonatomic) NSMutableArray *entryDatas; // @synthesize entryDatas=_entryDatas;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) BOOL force32BitSize; // @synthesize force32BitSize=_force32BitSize;
@property (readonly) BOOL isClosed;
@property (strong, nonatomic) NSDate *lastModificationDateIfSizeAndCRCMatches; // @synthesize lastModificationDateIfSizeAndCRCMatches=_lastModificationDateIfSizeAndCRCMatches;
@property (strong, nonatomic) NSObject<OS_dispatch_data> *localFileHeaderData; // @synthesize localFileHeaderData=_localFileHeaderData;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (nonatomic) unsigned long long sizeToMatch; // @synthesize sizeToMatch=_sizeToMatch;
@property (readonly) NSArray *sortedEntries;
@property (strong, nonatomic) NSDate *updatedEntryLastModificationDate; // @synthesize updatedEntryLastModificationDate=_updatedEntryLastModificationDate;
@property (strong, nonatomic) id<BURandomWriteChannel> writeChannel; // @synthesize writeChannel=_writeChannel;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *writeChannelCompletionGroup; // @synthesize writeChannelCompletionGroup=_writeChannelCompletionGroup;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property (nonatomic) long long writtenOffset; // @synthesize writtenOffset=_writtenOffset;

- (void).cxx_destruct;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)addData:(id)arg1;
- (void)addData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addExistingEntry:(id)arg1;
- (void)addExistingEntryImpl:(id)arg1;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg6;
- (void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg6;
- (void)closeWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)entriesCountImpl;
- (id)entryWithName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)finishEntry;
- (void)flushCurrentEntryWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flushEntryData;
- (void)handleWriteError:(id)arg1;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (id)p_writeChannel;
- (void)p_writeData:(id)arg1 offset:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)prepareWriteChannelWithCloseCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setEntryInsertionOffset:(long long)arg1;
- (void)setEntryInsertionOffsetImpl:(long long)arg1;
- (id)sortedEntriesImpl;
- (void)truncateToNumberOfEntries:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)truncateToNumberOfEntriesImpl:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)truncateToOffset:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)truncateToOffsetImpl:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeCentralDirectory;
- (void)writeCentralFileHeaderDataForEntry:(id)arg1;
- (void)writeData:(id)arg1;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)writeData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 fromReadChannel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 writeHandler:(CDUnknownBlockType)arg7;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;

@end


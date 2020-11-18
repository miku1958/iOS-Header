//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSUtility/SFUSimpleOutputStream-Protocol.h>

@class NSData, NSMutableArray, NSString, SFUCryptoKey, SFUMoveableFileOutputStream, SFUZipFreeSpaceEntry, SFUZipOutputEntry;
@protocol SFUOutputStream;

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream>
{
    SFUMoveableFileOutputStream *mOutputStream;
    SFUCryptoKey *mCryptoKey;
    NSData *mPassphraseHint;
    NSData *mEncryptedDocumentUuid;
    NSMutableArray *mEntries;
    SFUZipOutputEntry *mCurrentEntry;
    SFUZipOutputEntry *mLastEntryInFile;
    id<SFUOutputStream> mEntryOutputStream;
    char *mBuffer;
    NSMutableArray *mFreeList;
    SFUZipFreeSpaceEntry *mCurrentFreeSpace;
    unsigned long long mFreeBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)approximateBytesForEntryHeaderWithName:(id)arg1;
- (void)beginEntryWithName:(id)arg1 isCompressed:(BOOL)arg2 uncompressedSize:(unsigned long long)arg3;
- (id)beginUncompressedUnknownSizeEntryWithName:(id)arg1;
- (void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(BOOL)arg2;
- (BOOL)canRemoveEntryWithName:(id)arg1;
- (void)close;
- (void)coalesceAndTruncateFreeSpace;
- (unsigned int)crc32ForEntry:(id)arg1;
- (void)dealloc;
- (id)entriesAtPath:(id)arg1;
- (id)entryNames;
- (void)finishEntry;
- (void)flush;
- (unsigned long long)freeBytes;
- (id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (void)moveToPath:(id)arg1;
- (void)removeEntryWithName:(id)arg1;
- (void)reset;
- (void)setCrc32ForCurrentEntry:(unsigned int)arg1;
- (void)setEncryptedDocumentUuid:(id)arg1;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(BOOL)arg2;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)arg1;
- (unsigned long long)writeLocalFileHeaderForEntry:(id)arg1;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1;

@end


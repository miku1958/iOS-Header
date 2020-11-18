//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface StreamingUnzipState : NSObject
{
    CDStruct_4686af4b _cmpState;
    unsigned long long _lastResumptionSavedOffset;
    unsigned long long _hashedChunkSize;
    unsigned long long _bytesHashedInChunk;
    unsigned long long _uncompressedBytesOutput;
    unsigned long long _totalFileSizeWritten;
    NSString *_unzipPath;
    NSArray *_hashes;
    unsigned long long _currentLFRecordAllocationSize;
    CDStruct_3b890e00 _hashContext;
    NSDictionary *_streamInfoDict;
    NSString *_lastChunkPartialHash;
    NSMutableData *_unsureData;
    NSMutableData *_inMemoryFileData;
    CDStruct_6e051504 *_currentLFRecord;
    CDStruct_1e765437 *_dataDescriptor;
    unsigned long long _thisStageBytesComplete;
    unsigned long long _currentOffset;
    unsigned long long _recordsProcessed;
    unsigned long long _totalRecordCount;
    unsigned long long _totalUncompressedBytes;
    unsigned long long _currentCRC32;
    int _currentOutputFD;
    unsigned short _currentLFMode;
    unsigned char _streamState;
    BOOL _storeCurrentFileInMemory;
    BOOL _currentLFRequiresDataDescriptor;
    BOOL _denyInvalidSymlinks;
}

@property (readonly, nonatomic) unsigned long long bytesHashedInChunk; // @synthesize bytesHashedInChunk=_bytesHashedInChunk;
@property (readonly, nonatomic) CDStruct_4686af4b *cmpState;
@property (nonatomic) unsigned long long currentCRC32; // @synthesize currentCRC32=_currentCRC32;
@property (nonatomic) unsigned short currentLFMode; // @synthesize currentLFMode=_currentLFMode;
@property (nonatomic) CDStruct_6e051504 *currentLFRecord; // @synthesize currentLFRecord=_currentLFRecord;
@property (nonatomic) unsigned long long currentLFRecordAllocationSize; // @synthesize currentLFRecordAllocationSize=_currentLFRecordAllocationSize;
@property (nonatomic) BOOL currentLFRequiresDataDescriptor; // @synthesize currentLFRequiresDataDescriptor=_currentLFRequiresDataDescriptor;
@property (nonatomic) unsigned long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property (nonatomic) int currentOutputFD; // @synthesize currentOutputFD=_currentOutputFD;
@property (nonatomic) CDStruct_1e765437 *dataDescriptor; // @synthesize dataDescriptor=_dataDescriptor;
@property (nonatomic) BOOL denyInvalidSymlinks; // @synthesize denyInvalidSymlinks=_denyInvalidSymlinks;
@property (readonly, nonatomic) CDStruct_3b890e00 hashContext; // @synthesize hashContext=_hashContext;
@property (readonly, nonatomic) unsigned long long hashedChunkSize; // @synthesize hashedChunkSize=_hashedChunkSize;
@property (strong, nonatomic) NSMutableData *inMemoryFileData; // @synthesize inMemoryFileData=_inMemoryFileData;
@property (strong, nonatomic) NSString *lastChunkPartialHash; // @synthesize lastChunkPartialHash=_lastChunkPartialHash;
@property (nonatomic) unsigned long long recordsProcessed; // @synthesize recordsProcessed=_recordsProcessed;
@property (nonatomic) BOOL storeCurrentFileInMemory; // @synthesize storeCurrentFileInMemory=_storeCurrentFileInMemory;
@property (strong, nonatomic) NSDictionary *streamInfoDict; // @synthesize streamInfoDict=_streamInfoDict;
@property (nonatomic) unsigned char streamState; // @synthesize streamState=_streamState;
@property (nonatomic) unsigned long long thisStageBytesComplete; // @synthesize thisStageBytesComplete=_thisStageBytesComplete;
@property (nonatomic) unsigned long long totalFileSizeWritten; // @synthesize totalFileSizeWritten=_totalFileSizeWritten;
@property (nonatomic) unsigned long long totalRecordCount; // @synthesize totalRecordCount=_totalRecordCount;
@property (nonatomic) unsigned long long totalUncompressedBytes; // @synthesize totalUncompressedBytes=_totalUncompressedBytes;
@property (nonatomic) unsigned long long uncompressedBytesOutput; // @synthesize uncompressedBytesOutput=_uncompressedBytesOutput;
@property (strong, nonatomic) NSMutableData *unsureData; // @synthesize unsureData=_unsureData;
@property (readonly, nonatomic) NSString *unzipPath; // @synthesize unzipPath=_unzipPath;

+ (id)unzipStateWithPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)_checkHashForOffset:(unsigned long long)arg1;
- (void)_internalSetStreamState:(unsigned char)arg1;
- (id)checkLastChunkPartialHash;
- (void)clearSavedState;
- (void)dealloc;
- (id)finishStream;
- (id)init;
- (id)initWithPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)markResumptionPoint;
- (id)serializeState;
- (id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;
- (id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3 onlyFinishCurrentChunk:(BOOL)arg4;

@end


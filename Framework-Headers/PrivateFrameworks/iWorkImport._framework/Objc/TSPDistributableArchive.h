//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SFUFileDataRepresentation, SFUMemoryDataRepresentation, SFUZipEntry;

__attribute__((visibility("hidden")))
@interface TSPDistributableArchive : NSObject
{
    struct map<long long, std::__1::pair<long long, long long>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::pair<long long, long long>>>> *_entries;
    SFUFileDataRepresentation *_archiveFileRep;
    SFUMemoryDataRepresentation *_archiveMemoryRep;
    SFUZipEntry *_archiveZipEntryRep;
    struct {
        unsigned long long version;
        unsigned long long compatibleVersion;
    } _archivedVersions;
}

+ (BOOL)_checkFileHeader:(const char *)arg1 length:(unsigned long long)arg2 dffVersion:(unsigned short *)arg3 archivedVersions:(CDStruct_4bcfbbae *)arg4 defaultObjectVersion:(unsigned int *)arg5 hasDescriptors:(BOOL *)arg6 hasToc:(BOOL *)arg7 otherDataLength:(unsigned int *)arg8 closedCleanly:(BOOL *)arg9;
+ (id)_newStringFromUtf8DataInStream:(id)arg1 length:(unsigned long long)arg2;
+ (void)cancelStreaming;
+ (BOOL)readArchivedVersionsFromStream:(id)arg1 versions:(CDStruct_4bcfbbae *)arg2 error:(id *)arg3;
+ (BOOL)readCheckCrcFromArchiveInputStream:(id)arg1 crc:(unsigned int *)arg2 error:(id *)arg3;
+ (BOOL)streamDistributableArchive:(id)arg1 estimatedDataLength:(long long)arg2 toUnarchiver:(id)arg3 supplementalDataBundle:(id)arg4 closedCleanly:(BOOL *)arg5 context:(id)arg6 error:(id *)arg7;
- (void).cxx_destruct;
- (id)_createInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (BOOL)_readEntriesFromToc:(id)arg1 error:(id *)arg2;
- (CDStruct_4bcfbbae)archivedVersions;
- (BOOL)containsObjectWithIdentifier:(long long)arg1;
- (id)createStreamForObject:(long long)arg1 length:(long long *)arg2;
- (void)dealloc;
- (id)initWithDffData:(id)arg1 error:(id *)arg2;
- (long long)lengthOfObject:(long long)arg1;

@end


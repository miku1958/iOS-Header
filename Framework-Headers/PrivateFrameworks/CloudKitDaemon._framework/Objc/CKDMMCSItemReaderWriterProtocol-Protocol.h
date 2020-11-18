//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext, CKFileMetadata;

@protocol CKDMMCSItemReaderWriterProtocol <NSObject>

@property (readonly, nonatomic) CKDMMCSItem *MMCSItem;
@property (readonly, nonatomic) CKDMMCSItemGroupContext *MMCSRequest;

- (BOOL)closeWithError:(id *)arg1;
- (CKFileMetadata *)getFileMetadataWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long *)arg4 error:(id *)arg5;
@end


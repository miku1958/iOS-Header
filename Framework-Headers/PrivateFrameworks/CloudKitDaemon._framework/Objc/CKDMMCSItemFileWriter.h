//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDMMCSItemReaderWriterProtocol-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemFileWriter : NSObject <CKDMMCSItemReaderWriterProtocol>
{
    NSMutableData *_data;
    CKDMMCSItemGroupContext *_MMCSRequest;
    CKDMMCSItem *_MMCSItem;
}

@property (strong, nonatomic) CKDMMCSItem *MMCSItem; // @synthesize MMCSItem=_MMCSItem;
@property (strong, nonatomic) CKDMMCSItemGroupContext *MMCSRequest; // @synthesize MMCSRequest=_MMCSRequest;
@property (strong, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)closeWithError:(id *)arg1;
- (void)dealloc;
- (id)getFileMetadataWithError:(id *)arg1;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long *)arg4 error:(id *)arg5;

@end


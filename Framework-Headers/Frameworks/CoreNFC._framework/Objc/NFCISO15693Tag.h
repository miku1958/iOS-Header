//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NFCTag.h>

#import <CoreNFC/NFCISO15693Tag-Protocol.h>

@class NSData, NSString;
@protocol NFCReaderSession;

__attribute__((visibility("hidden")))
@interface NFCISO15693Tag : NFCTag <NFCISO15693Tag>
{
}

@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long icManufacturerCode;
@property (readonly, copy, nonatomic) NSData *icSerialNumber;
@property (readonly, copy, nonatomic) NSData *identifier;
@property (readonly, weak, nonatomic) id<NFCReaderSession> session;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type;

- (id)_generateRequestHeader:(unsigned char)arg1 flags:(unsigned char)arg2;
- (id)_parseResponseErrorWithData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)customCommandWithRequestFlag:(unsigned char)arg1 customCommandCode:(long long)arg2 customRequestParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)extendedLockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extendedReadMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extendedReadSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extendedWriteSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 dataBlock:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getSystemInfoWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lockAFIWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lockDFSIDWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readMultipleBlocksWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetToReadyWithRequestFlags:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)selectWithRequestFlags:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendCustomCommandWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stayQuietWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)writeAFIWithRequestFlag:(unsigned char)arg1 afi:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeDSFIDWithRequestFlag:(unsigned char)arg1 dsfid:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 dataBlocks:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 dataBlock:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

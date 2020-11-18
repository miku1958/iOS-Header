//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NFCTag.h>

#import <CoreNFC/NFCISO15693Tag-Protocol.h>

@class NSData, NSString;
@protocol NFCReaderSession;

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

+ (BOOL)supportsSecureCoding;
- (id)_parseResponseData:(id)arg1 outError:(id *)arg2;
- (unsigned long long)_parseResponseErrorWithData:(id)arg1;
- (BOOL)_transceiveWithData:(id)arg1 receivedData:(id *)arg2 commandConfig:(id)arg3 error:(id *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSession:(id)arg1 tag:(id)arg2;
- (void)readMultipleBlocksWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendCustomCommandWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


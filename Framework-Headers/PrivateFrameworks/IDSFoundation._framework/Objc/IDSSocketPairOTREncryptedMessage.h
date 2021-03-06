//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

#import <IDSFoundation/IDSSocketPairMessage-Protocol.h>

@class NSData, NSDate, NSString;

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage <IDSSocketPairMessage>
{
    unsigned long long _offset;
    unsigned char _versionNumber;
    BOOL _encrypted;
    BOOL _fileXfer;
    unsigned short _streamID;
    unsigned short _priority;
    unsigned int _sequenceNumber;
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (strong, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) BOOL fileXfer; // @synthesize fileXfer=_fileXfer;
@property (readonly, nonatomic) NSString *messageUUID;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) unsigned short priority; // @synthesize priority=_priority;
@property (nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property (readonly, nonatomic) unsigned char versionNumber; // @synthesize versionNumber=_versionNumber;
@property (readonly, nonatomic) BOOL wantsAppAck;

- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)description;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithVersion:(unsigned char)arg1 encrypted:(BOOL)arg2 streamID:(unsigned short)arg3 priority:(unsigned short)arg4 sequenceNumber:(unsigned int)arg5 fileXfer:(BOOL)arg6 data:(id)arg7;

@end


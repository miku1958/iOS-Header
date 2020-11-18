//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairOTRMessage : IDSSocketPairMessage
{
    unsigned long long _offset;
    unsigned char _versionNumber;
    BOOL _encrypted;
    BOOL _shouldEncrypt;
    unsigned char _protectionClass;
    unsigned short _streamID;
    unsigned short _priority;
    unsigned int _sequenceNumber;
    NSData *_data;
}

@property (readonly, strong, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property (readonly, nonatomic) unsigned short priority; // @synthesize priority=_priority;
@property (readonly, nonatomic) unsigned char protectionClass; // @synthesize protectionClass=_protectionClass;
@property (readonly, nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (readonly, nonatomic) BOOL shouldEncrypt; // @synthesize shouldEncrypt=_shouldEncrypt;
@property (nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property (readonly, nonatomic) unsigned char versionNumber; // @synthesize versionNumber=_versionNumber;

- (id)_nonHeaderData;
- (unsigned char)command;
- (void)dealloc;
- (id)description;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithVersion:(unsigned char)arg1 encrypted:(BOOL)arg2 shouldEncrypt:(BOOL)arg3 protectionClass:(unsigned char)arg4 streamID:(unsigned short)arg5 priority:(unsigned short)arg6 sequenceNumber:(unsigned int)arg7 data:(id)arg8;

@end


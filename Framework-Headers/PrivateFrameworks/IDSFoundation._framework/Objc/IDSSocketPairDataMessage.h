//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

#import <IDSFoundation/IDSSocketPairMessage-Protocol.h>

@class NSData, NSDate, NSString;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage <IDSSocketPairMessage>
{
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
    NSData *_data;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressed;
    BOOL _didWakeHint;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

@property (nonatomic) BOOL compressed; // @synthesize compressed=_compressed;
@property (readonly, nonatomic) NSData *data;
@property (nonatomic) BOOL didWakeHint; // @synthesize didWakeHint=_didWakeHint;
@property (readonly, nonatomic) BOOL expectsPeerResponse; // @synthesize expectsPeerResponse=_expectsPeerResponse;
@property (strong, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property (readonly, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property (readonly, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property (nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property (readonly, nonatomic) BOOL wantsAppAck; // @synthesize wantsAppAck=_wantsAppAck;

- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(BOOL)arg3 wantsAppAck:(BOOL)arg4 compressed:(BOOL)arg5 didWakeHint:(BOOL)arg6 peerResponseIdentifier:(id)arg7 messageUUID:(id)arg8 data:(id)arg9 expiryDate:(id)arg10;

@end

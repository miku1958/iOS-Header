//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDPushReceivedDropped : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    NSString *_guid;
    unsigned int _isFromStorage;
    int _linkQuality;
    unsigned int _payloadSize;
    unsigned int _receiveOffset;
    NSString *_topic;
    CDStruct_f8f5923d _has;
}

@property (nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property (nonatomic) unsigned int dualChannelState; // @synthesize dualChannelState=_dualChannelState;
@property (strong, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasDualChannelState;
@property (readonly, nonatomic) BOOL hasGuid;
@property (nonatomic) BOOL hasIsFromStorage;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) BOOL hasPayloadSize;
@property (nonatomic) BOOL hasReceiveOffset;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTopic;
@property (nonatomic) unsigned int isFromStorage; // @synthesize isFromStorage=_isFromStorage;
@property (nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property (nonatomic) unsigned int payloadSize; // @synthesize payloadSize=_payloadSize;
@property (nonatomic) unsigned int receiveOffset; // @synthesize receiveOffset=_receiveOffset;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) NSString *topic; // @synthesize topic=_topic;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


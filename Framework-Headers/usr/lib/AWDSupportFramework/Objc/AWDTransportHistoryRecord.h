//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDTransportHistoryRecord : PBCodable <NSCopying>
{
    unsigned long long _timestampFailure;
    NSMutableArray *_connectionInfos;
    int _connectionMethod;
    int _transport;
    unsigned int _transportSwitchReasonErrorCode;
    int _transportSwitchReasonErrorDomain;
    struct {
        unsigned int timestampFailure:1;
        unsigned int connectionMethod:1;
        unsigned int transport:1;
        unsigned int transportSwitchReasonErrorCode:1;
        unsigned int transportSwitchReasonErrorDomain:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *connectionInfos; // @synthesize connectionInfos=_connectionInfos;
@property (nonatomic) int connectionMethod; // @synthesize connectionMethod=_connectionMethod;
@property (nonatomic) BOOL hasConnectionMethod;
@property (nonatomic) BOOL hasTimestampFailure;
@property (nonatomic) BOOL hasTransport;
@property (nonatomic) BOOL hasTransportSwitchReasonErrorCode;
@property (nonatomic) BOOL hasTransportSwitchReasonErrorDomain;
@property (nonatomic) unsigned long long timestampFailure; // @synthesize timestampFailure=_timestampFailure;
@property (nonatomic) int transport; // @synthesize transport=_transport;
@property (nonatomic) unsigned int transportSwitchReasonErrorCode; // @synthesize transportSwitchReasonErrorCode=_transportSwitchReasonErrorCode;
@property (nonatomic) int transportSwitchReasonErrorDomain; // @synthesize transportSwitchReasonErrorDomain=_transportSwitchReasonErrorDomain;

+ (Class)connectionInfoType;
- (int)StringAsConnectionMethod:(id)arg1;
- (int)StringAsTransport:(id)arg1;
- (int)StringAsTransportSwitchReasonErrorDomain:(id)arg1;
- (void)addConnectionInfo:(id)arg1;
- (void)clearConnectionInfos;
- (id)connectionInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectionInfosCount;
- (id)connectionMethodAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transportAsString:(int)arg1;
- (id)transportSwitchReasonErrorDomainAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

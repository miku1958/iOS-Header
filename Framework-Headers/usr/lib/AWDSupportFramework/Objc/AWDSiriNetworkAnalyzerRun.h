//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDSiriNetworkAnalyzerRun : PBCodable <NSCopying>
{
    unsigned long long _gatewayPingDuration;
    unsigned long long _knownURLLoadDuration;
    unsigned long long _siriSaltURLLoadDuration;
    unsigned long long _siriURLLoadDuration;
    unsigned long long _timestamp;
    unsigned int _gatewayPingsDropped;
    unsigned int _gatewayPingsSent;
    int _gatewayStatus;
    int _interface;
    int _sendBufferBytesRemaining;
    BOOL _analyzingSuccessfulRetry;
    BOOL _isUserRequest;
    BOOL _wwanPreferred;
    struct {
        unsigned int gatewayPingDuration:1;
        unsigned int knownURLLoadDuration:1;
        unsigned int siriSaltURLLoadDuration:1;
        unsigned int siriURLLoadDuration:1;
        unsigned int timestamp:1;
        unsigned int gatewayPingsDropped:1;
        unsigned int gatewayPingsSent:1;
        unsigned int gatewayStatus:1;
        unsigned int interface:1;
        unsigned int sendBufferBytesRemaining:1;
        unsigned int analyzingSuccessfulRetry:1;
        unsigned int isUserRequest:1;
        unsigned int wwanPreferred:1;
    } _has;
}

@property (nonatomic) BOOL analyzingSuccessfulRetry; // @synthesize analyzingSuccessfulRetry=_analyzingSuccessfulRetry;
@property (nonatomic) unsigned long long gatewayPingDuration; // @synthesize gatewayPingDuration=_gatewayPingDuration;
@property (nonatomic) unsigned int gatewayPingsDropped; // @synthesize gatewayPingsDropped=_gatewayPingsDropped;
@property (nonatomic) unsigned int gatewayPingsSent; // @synthesize gatewayPingsSent=_gatewayPingsSent;
@property (nonatomic) int gatewayStatus; // @synthesize gatewayStatus=_gatewayStatus;
@property (nonatomic) BOOL hasAnalyzingSuccessfulRetry;
@property (nonatomic) BOOL hasGatewayPingDuration;
@property (nonatomic) BOOL hasGatewayPingsDropped;
@property (nonatomic) BOOL hasGatewayPingsSent;
@property (nonatomic) BOOL hasGatewayStatus;
@property (nonatomic) BOOL hasInterface;
@property (nonatomic) BOOL hasIsUserRequest;
@property (nonatomic) BOOL hasKnownURLLoadDuration;
@property (nonatomic) BOOL hasSendBufferBytesRemaining;
@property (nonatomic) BOOL hasSiriSaltURLLoadDuration;
@property (nonatomic) BOOL hasSiriURLLoadDuration;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWwanPreferred;
@property (nonatomic) int interface; // @synthesize interface=_interface;
@property (nonatomic) BOOL isUserRequest; // @synthesize isUserRequest=_isUserRequest;
@property (nonatomic) unsigned long long knownURLLoadDuration; // @synthesize knownURLLoadDuration=_knownURLLoadDuration;
@property (nonatomic) int sendBufferBytesRemaining; // @synthesize sendBufferBytesRemaining=_sendBufferBytesRemaining;
@property (nonatomic) unsigned long long siriSaltURLLoadDuration; // @synthesize siriSaltURLLoadDuration=_siriSaltURLLoadDuration;
@property (nonatomic) unsigned long long siriURLLoadDuration; // @synthesize siriURLLoadDuration=_siriURLLoadDuration;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) BOOL wwanPreferred; // @synthesize wwanPreferred=_wwanPreferred;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


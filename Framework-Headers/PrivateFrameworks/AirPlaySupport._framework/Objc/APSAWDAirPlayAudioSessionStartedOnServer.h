//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayAudioSessionStartedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _audioCompressionType;
    unsigned int _clientAnnounceMs;
    unsigned int _clientAuthMs;
    unsigned int _clientBonjourMs;
    unsigned int _clientConnectMs;
    NSString *_clientModel;
    unsigned int _clientSetupAudioMs;
    unsigned int _clientSetupScreenMs;
    NSString *_clientVersion;
    unsigned int _latencyMs;
    unsigned int _serverRecordMs;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    struct {
        unsigned int timestamp:1;
        unsigned int audioCompressionType:1;
        unsigned int clientAnnounceMs:1;
        unsigned int clientAuthMs:1;
        unsigned int clientBonjourMs:1;
        unsigned int clientConnectMs:1;
        unsigned int clientSetupAudioMs:1;
        unsigned int clientSetupScreenMs:1;
        unsigned int latencyMs:1;
        unsigned int serverRecordMs:1;
        unsigned int status:1;
        unsigned int transportType:1;
    } _has;
}

@property (nonatomic) unsigned int audioCompressionType; // @synthesize audioCompressionType=_audioCompressionType;
@property (nonatomic) unsigned int clientAnnounceMs; // @synthesize clientAnnounceMs=_clientAnnounceMs;
@property (nonatomic) unsigned int clientAuthMs; // @synthesize clientAuthMs=_clientAuthMs;
@property (nonatomic) unsigned int clientBonjourMs; // @synthesize clientBonjourMs=_clientBonjourMs;
@property (nonatomic) unsigned int clientConnectMs; // @synthesize clientConnectMs=_clientConnectMs;
@property (strong, nonatomic) NSString *clientModel; // @synthesize clientModel=_clientModel;
@property (nonatomic) unsigned int clientSetupAudioMs; // @synthesize clientSetupAudioMs=_clientSetupAudioMs;
@property (nonatomic) unsigned int clientSetupScreenMs; // @synthesize clientSetupScreenMs=_clientSetupScreenMs;
@property (strong, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property (nonatomic) BOOL hasAudioCompressionType;
@property (nonatomic) BOOL hasClientAnnounceMs;
@property (nonatomic) BOOL hasClientAuthMs;
@property (nonatomic) BOOL hasClientBonjourMs;
@property (nonatomic) BOOL hasClientConnectMs;
@property (readonly, nonatomic) BOOL hasClientModel;
@property (nonatomic) BOOL hasClientSetupAudioMs;
@property (nonatomic) BOOL hasClientSetupScreenMs;
@property (readonly, nonatomic) BOOL hasClientVersion;
@property (nonatomic) BOOL hasLatencyMs;
@property (nonatomic) BOOL hasServerRecordMs;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int latencyMs; // @synthesize latencyMs=_latencyMs;
@property (nonatomic) unsigned int serverRecordMs; // @synthesize serverRecordMs=_serverRecordMs;
@property (strong, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property (nonatomic) int status; // @synthesize status=_status;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;

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

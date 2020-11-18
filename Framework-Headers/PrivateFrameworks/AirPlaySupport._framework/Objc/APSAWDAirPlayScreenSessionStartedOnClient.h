//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayScreenSessionStartedOnClient : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _audioCompressionType;
    int _awdlCCA;
    int _awdlRSSI;
    unsigned int _bonjourMs;
    unsigned int _configMs;
    unsigned int _connectMs;
    int _infraCCA;
    int _infraRSSI;
    int _infraSNR;
    unsigned int _prepareMs;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    BOOL _didFallbackToInfraToAvoidP2POverDFS;
    struct {
        unsigned int timestamp:1;
        unsigned int audioCompressionType:1;
        unsigned int awdlCCA:1;
        unsigned int awdlRSSI:1;
        unsigned int bonjourMs:1;
        unsigned int configMs:1;
        unsigned int connectMs:1;
        unsigned int infraCCA:1;
        unsigned int infraRSSI:1;
        unsigned int infraSNR:1;
        unsigned int prepareMs:1;
        unsigned int status:1;
        unsigned int transportType:1;
        unsigned int didFallbackToInfraToAvoidP2POverDFS:1;
    } _has;
}

@property (nonatomic) unsigned int audioCompressionType; // @synthesize audioCompressionType=_audioCompressionType;
@property (nonatomic) int awdlCCA; // @synthesize awdlCCA=_awdlCCA;
@property (nonatomic) int awdlRSSI; // @synthesize awdlRSSI=_awdlRSSI;
@property (nonatomic) unsigned int bonjourMs; // @synthesize bonjourMs=_bonjourMs;
@property (nonatomic) unsigned int configMs; // @synthesize configMs=_configMs;
@property (nonatomic) unsigned int connectMs; // @synthesize connectMs=_connectMs;
@property (nonatomic) BOOL didFallbackToInfraToAvoidP2POverDFS; // @synthesize didFallbackToInfraToAvoidP2POverDFS=_didFallbackToInfraToAvoidP2POverDFS;
@property (nonatomic) BOOL hasAudioCompressionType;
@property (nonatomic) BOOL hasAwdlCCA;
@property (nonatomic) BOOL hasAwdlRSSI;
@property (nonatomic) BOOL hasBonjourMs;
@property (nonatomic) BOOL hasConfigMs;
@property (nonatomic) BOOL hasConnectMs;
@property (nonatomic) BOOL hasDidFallbackToInfraToAvoidP2POverDFS;
@property (nonatomic) BOOL hasInfraCCA;
@property (nonatomic) BOOL hasInfraRSSI;
@property (nonatomic) BOOL hasInfraSNR;
@property (nonatomic) BOOL hasPrepareMs;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int infraCCA; // @synthesize infraCCA=_infraCCA;
@property (nonatomic) int infraRSSI; // @synthesize infraRSSI=_infraRSSI;
@property (nonatomic) int infraSNR; // @synthesize infraSNR=_infraSNR;
@property (nonatomic) unsigned int prepareMs; // @synthesize prepareMs=_prepareMs;
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


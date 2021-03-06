//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDPushKeepAliveFailed : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _connectionType;
    unsigned int _currentGrowthStage;
    unsigned int _dualChannelState;
    int _error;
    NSString *_guid;
    unsigned int _keepAliveVersion;
    unsigned int _lastKeepAliveInterval;
    int _linkQuality;
    unsigned int _timeSinceConnected;
    unsigned int _timeSinceLastSuccessfulKeepAlive;
    struct {
        unsigned int timestamp:1;
        unsigned int connectionType:1;
        unsigned int currentGrowthStage:1;
        unsigned int dualChannelState:1;
        unsigned int error:1;
        unsigned int keepAliveVersion:1;
        unsigned int lastKeepAliveInterval:1;
        unsigned int linkQuality:1;
        unsigned int timeSinceConnected:1;
        unsigned int timeSinceLastSuccessfulKeepAlive:1;
    } _has;
}

@property (nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property (nonatomic) unsigned int currentGrowthStage; // @synthesize currentGrowthStage=_currentGrowthStage;
@property (nonatomic) unsigned int dualChannelState; // @synthesize dualChannelState=_dualChannelState;
@property (nonatomic) int error; // @synthesize error=_error;
@property (strong, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasCurrentGrowthStage;
@property (nonatomic) BOOL hasDualChannelState;
@property (nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasGuid;
@property (nonatomic) BOOL hasKeepAliveVersion;
@property (nonatomic) BOOL hasLastKeepAliveInterval;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) BOOL hasTimeSinceConnected;
@property (nonatomic) BOOL hasTimeSinceLastSuccessfulKeepAlive;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int keepAliveVersion; // @synthesize keepAliveVersion=_keepAliveVersion;
@property (nonatomic) unsigned int lastKeepAliveInterval; // @synthesize lastKeepAliveInterval=_lastKeepAliveInterval;
@property (nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property (nonatomic) unsigned int timeSinceConnected; // @synthesize timeSinceConnected=_timeSinceConnected;
@property (nonatomic) unsigned int timeSinceLastSuccessfulKeepAlive; // @synthesize timeSinceLastSuccessfulKeepAlive=_timeSinceLastSuccessfulKeepAlive;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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


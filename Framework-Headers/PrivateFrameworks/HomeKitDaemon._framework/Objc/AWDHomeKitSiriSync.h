//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitSiriSync : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _currentConfigurationVersion;
    unsigned int _duration;
    unsigned int _lastSyncedConfigurationVersion;
    NSMutableArray *_reasons;
    unsigned int _serverConfigurationVersion;
    struct {
        unsigned int timestamp:1;
        unsigned int currentConfigurationVersion:1;
        unsigned int duration:1;
        unsigned int lastSyncedConfigurationVersion:1;
        unsigned int serverConfigurationVersion:1;
    } _has;
}

@property (nonatomic) unsigned int currentConfigurationVersion; // @synthesize currentConfigurationVersion=_currentConfigurationVersion;
@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL hasCurrentConfigurationVersion;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasLastSyncedConfigurationVersion;
@property (nonatomic) BOOL hasServerConfigurationVersion;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int lastSyncedConfigurationVersion; // @synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion;
@property (strong, nonatomic) NSMutableArray *reasons; // @synthesize reasons=_reasons;
@property (nonatomic) unsigned int serverConfigurationVersion; // @synthesize serverConfigurationVersion=_serverConfigurationVersion;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (Class)reasonsType;
- (void).cxx_destruct;
- (void)addReasons:(id)arg1;
- (void)clearReasons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reasonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)reasonsCount;
- (void)writeTo:(id)arg1;

@end

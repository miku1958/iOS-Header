//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutinePersistenceStoreMigrationDuration : PBCodable <NSCopying>
{
    double _migrationTimeInterval;
    unsigned long long _timestamp;
    int _byteSize;
    int _deviceClass;
    int _nextModelVersion;
    int _previousModelVersion;
    int _storeType;
    BOOL _didVacuum;
    struct {
        unsigned int migrationTimeInterval:1;
        unsigned int timestamp:1;
        unsigned int byteSize:1;
        unsigned int deviceClass:1;
        unsigned int nextModelVersion:1;
        unsigned int previousModelVersion:1;
        unsigned int storeType:1;
        unsigned int didVacuum:1;
    } _has;
}

@property (nonatomic) int byteSize; // @synthesize byteSize=_byteSize;
@property (nonatomic) int deviceClass; // @synthesize deviceClass=_deviceClass;
@property (nonatomic) BOOL didVacuum; // @synthesize didVacuum=_didVacuum;
@property (nonatomic) BOOL hasByteSize;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) BOOL hasDidVacuum;
@property (nonatomic) BOOL hasMigrationTimeInterval;
@property (nonatomic) BOOL hasNextModelVersion;
@property (nonatomic) BOOL hasPreviousModelVersion;
@property (nonatomic) BOOL hasStoreType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double migrationTimeInterval; // @synthesize migrationTimeInterval=_migrationTimeInterval;
@property (nonatomic) int nextModelVersion; // @synthesize nextModelVersion=_nextModelVersion;
@property (nonatomic) int previousModelVersion; // @synthesize previousModelVersion=_previousModelVersion;
@property (nonatomic) int storeType; // @synthesize storeType=_storeType;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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


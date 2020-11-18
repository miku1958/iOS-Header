//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTrafficSnapshotMetaData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficIncidentSnapshot : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_incidents;
    unsigned long long _receivedTime;
    GEOTrafficSnapshotMetaData *_snapshotMetaData;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_receivedTime:1;
        unsigned int read_incidents:1;
        unsigned int read_snapshotMetaData:1;
        unsigned int wrote_incidents:1;
        unsigned int wrote_receivedTime:1;
        unsigned int wrote_snapshotMetaData:1;
    } _flags;
}

@property (nonatomic) BOOL hasReceivedTime;
@property (readonly, nonatomic) BOOL hasSnapshotMetaData;
@property (strong, nonatomic) NSMutableArray *incidents;
@property (nonatomic) unsigned long long receivedTime;
@property (strong, nonatomic) GEOTrafficSnapshotMetaData *snapshotMetaData;

+ (Class)incidentsType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)_addNoFlagsIncidents:(id)arg1;
- (void)_readIncidents;
- (void)_readSnapshotMetaData;
- (void)addIncidents:(id)arg1;
- (void)clearIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

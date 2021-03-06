//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTrafficSnapshotMetaData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficSpeedSnapshot : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    unsigned long long _receivedTime;
    GEOTrafficSnapshotMetaData *_snapshotMetaData;
    NSMutableArray *_speeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_receivedTime:1;
        unsigned int read_snapshotMetaData:1;
        unsigned int read_speeds:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) BOOL hasReceivedTime;
@property (readonly, nonatomic) BOOL hasSnapshotMetaData;
@property (nonatomic) unsigned long long receivedTime;
@property (strong, nonatomic) GEOTrafficSnapshotMetaData *snapshotMetaData;
@property (strong, nonatomic) NSMutableArray *speeds;

+ (BOOL)isValid:(id)arg1;
+ (Class)speedsType;
- (void).cxx_destruct;
- (void)addSpeeds:(id)arg1;
- (void)clearSpeeds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)speedsAtIndex:(unsigned long long)arg1;
- (unsigned long long)speedsCount;
- (void)writeTo:(id)arg1;

@end


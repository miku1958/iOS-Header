//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficRegion : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_area;
    NSMutableArray *_boundingBoxs;
    NSMutableArray *_geohashes;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_area:1;
        unsigned int read_boundingBoxs:1;
        unsigned int read_geohashes:1;
        unsigned int read_name:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSString *area;
@property (strong, nonatomic) NSMutableArray *boundingBoxs;
@property (strong, nonatomic) NSMutableArray *geohashes;
@property (readonly, nonatomic) BOOL hasArea;
@property (readonly, nonatomic) BOOL hasName;
@property (strong, nonatomic) NSString *name;

+ (Class)boundingBoxType;
+ (Class)geohashesType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addBoundingBox:(id)arg1;
- (void)addGeohashes:(id)arg1;
- (id)boundingBoxAtIndex:(unsigned long long)arg1;
- (unsigned long long)boundingBoxsCount;
- (void)clearBoundingBoxs;
- (void)clearGeohashes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geohashesAtIndex:(unsigned long long)arg1;
- (unsigned long long)geohashesCount;
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
- (void)writeTo:(id)arg1;

@end


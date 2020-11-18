//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOLogMsgEventEVRoutingVehicleDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_make;
    NSString *_model;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _batteryCapacity;
    struct {
        unsigned int has_batteryCapacity:1;
        unsigned int read_make:1;
        unsigned int read_model:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) unsigned int batteryCapacity;
@property (nonatomic) BOOL hasBatteryCapacity;
@property (readonly, nonatomic) BOOL hasMake;
@property (readonly, nonatomic) BOOL hasModel;
@property (strong, nonatomic) NSString *make;
@property (strong, nonatomic) NSString *model;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
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
- (void)writeTo:(id)arg1;

@end

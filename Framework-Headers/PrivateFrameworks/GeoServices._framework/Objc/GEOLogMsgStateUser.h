//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOLogMsgStateUser : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_homeCountryCode;
    NSString *_homeMetroRegion;
    double _mapsUseLastDate;
    double _mapsUseStartDate;
    double _syncFirstTimestamp;
    double _syncLastTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _isTourist;
    struct {
        unsigned int has_mapsUseLastDate:1;
        unsigned int has_mapsUseStartDate:1;
        unsigned int has_syncFirstTimestamp:1;
        unsigned int has_syncLastTimestamp:1;
        unsigned int has_isTourist:1;
        unsigned int read_homeCountryCode:1;
        unsigned int read_homeMetroRegion:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL hasHomeCountryCode;
@property (readonly, nonatomic) BOOL hasHomeMetroRegion;
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL hasMapsUseLastDate;
@property (nonatomic) BOOL hasMapsUseStartDate;
@property (nonatomic) BOOL hasSyncFirstTimestamp;
@property (nonatomic) BOOL hasSyncLastTimestamp;
@property (strong, nonatomic) NSString *homeCountryCode;
@property (strong, nonatomic) NSString *homeMetroRegion;
@property (nonatomic) BOOL isTourist;
@property (nonatomic) double mapsUseLastDate;
@property (nonatomic) double mapsUseStartDate;
@property (nonatomic) double syncFirstTimestamp;
@property (nonatomic) double syncLastTimestamp;

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


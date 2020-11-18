//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOWiFiAP : PBCodable <NSCopying>
{
    NSString *_uniqueID;
    unsigned int _channel;
    int _origin;
    int _rssi;
    struct {
        unsigned int has_channel:1;
        unsigned int has_origin:1;
        unsigned int has_rssi:1;
    } _flags;
}

@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasRssi;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (nonatomic) int origin;
@property (nonatomic) int rssi;
@property (strong, nonatomic) NSString *uniqueID;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsOrigin:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

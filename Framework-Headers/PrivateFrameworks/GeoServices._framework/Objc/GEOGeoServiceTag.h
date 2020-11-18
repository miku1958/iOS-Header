//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOGeoServiceTag : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_tag;
    int _serviceType;
    struct {
        unsigned int has_serviceType:1;
    } _flags;
}

@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int serviceType;
@property (strong, nonatomic) NSString *tag;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)defaultTag;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsServiceType:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

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
    int _serviceType;
    NSString *_tag;
    struct {
        unsigned int serviceType:1;
    } _has;
}

@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property (strong, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)defaultTag;
- (void).cxx_destruct;
- (int)StringAsServiceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

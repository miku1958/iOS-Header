//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORestrictionZoneInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_restrictedZoneIds;
    int _environmentalCongestionZoneImpact;
    int _licensePlateRestrictionImpact;
    int _tollCongestionZoneImpact;
    struct {
        unsigned int has_environmentalCongestionZoneImpact:1;
        unsigned int has_licensePlateRestrictionImpact:1;
        unsigned int has_tollCongestionZoneImpact:1;
    } _flags;
}

@property (nonatomic) int environmentalCongestionZoneImpact;
@property (nonatomic) BOOL hasEnvironmentalCongestionZoneImpact;
@property (nonatomic) BOOL hasLicensePlateRestrictionImpact;
@property (nonatomic) BOOL hasTollCongestionZoneImpact;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (strong, nonatomic) NSMutableArray *restrictedZoneIds;
@property (nonatomic) int tollCongestionZoneImpact;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
+ (Class)restrictedZoneIdsType;
- (void).cxx_destruct;
- (int)StringAsEnvironmentalCongestionZoneImpact:(id)arg1;
- (int)StringAsLicensePlateRestrictionImpact:(id)arg1;
- (int)StringAsTollCongestionZoneImpact:(id)arg1;
- (void)addRestrictedZoneIds:(id)arg1;
- (void)clearRestrictedZoneIds;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environmentalCongestionZoneImpactAsString:(int)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)licensePlateRestrictionImpactAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)restrictedZoneIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)restrictedZoneIdsCount;
- (id)tollCongestionZoneImpactAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

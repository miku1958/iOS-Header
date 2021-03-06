//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOAddressCorrectionTaggedLocationRequest : PBRequest <NSCopying>
{
    NSMutableArray *_significantLocations;
}

@property (strong, nonatomic) NSMutableArray *significantLocations;

+ (BOOL)isValid:(id)arg1;
+ (Class)significantLocationType;
- (void).cxx_destruct;
- (void)addSignificantLocation:(id)arg1;
- (void)clearSensitiveFields;
- (void)clearSignificantLocations;
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
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)significantLocationsCount;
- (void)writeTo:(id)arg1;

@end


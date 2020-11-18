//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying>
{
    CDStruct_95bda58d _additionalPlaceTypes;
    NSString *_deviceCountryCode;
    NSString *_displayRegion;
    NSMutableArray *_locations;
    NSMutableArray *_serviceTags;
}

@property (readonly, nonatomic) int *additionalPlaceTypes;
@property (readonly, nonatomic) unsigned long long additionalPlaceTypesCount;
@property (strong, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
@property (strong, nonatomic) NSString *displayRegion; // @synthesize displayRegion=_displayRegion;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (strong, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property (strong, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;

+ (Class)locationType;
+ (Class)serviceTagType;
- (int)StringAsAdditionalPlaceTypes:(id)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)addLocation:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;
- (id)additionalPlaceTypesAsString:(int)arg1;
- (void)clearAdditionalPlaceTypes;
- (void)clearLocations;
- (void)clearServiceTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)setAdditionalPlaceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end


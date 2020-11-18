//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, GEOStructuredAddress, NSString;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying>
{
    unsigned int _maxResults;
    NSString *_queryString;
    GEOStructuredAddress *_structuredAddress;
    GEOPDViewportInfo *_viewportInfo;
    CDStruct_4f8569d5 _has;
}

@property (nonatomic) BOOL hasMaxResults;
@property (readonly, nonatomic) BOOL hasQueryString;
@property (readonly, nonatomic) BOOL hasStructuredAddress;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
@property (strong, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property (strong, nonatomic) GEOStructuredAddress *structuredAddress; // @synthesize structuredAddress=_structuredAddress;
@property (strong, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


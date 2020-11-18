//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOVectorTileRequest : PBRequest <NSCopying>
{
    unsigned long long _lineId;
    NSString *_accessKey;
    NSString *_countryCode;
    NSString *_languageCode;
    float _latitudeHint;
    float _longitudeHint;
    unsigned int _scale;
    unsigned int _size;
    unsigned int _style;
    unsigned int _version;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    BOOL _preflight;
    struct {
        unsigned int lineId:1;
        unsigned int latitudeHint:1;
        unsigned int longitudeHint:1;
        unsigned int scale:1;
        unsigned int size:1;
        unsigned int style:1;
        unsigned int version:1;
        unsigned int x:1;
        unsigned int y:1;
        unsigned int z:1;
        unsigned int preflight:1;
    } _has;
}

@property (strong, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
@property (strong, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (readonly, nonatomic) BOOL hasAccessKey;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (nonatomic) BOOL hasLatitudeHint;
@property (nonatomic) BOOL hasLineId;
@property (nonatomic) BOOL hasLongitudeHint;
@property (nonatomic) BOOL hasPreflight;
@property (nonatomic) BOOL hasScale;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) BOOL hasX;
@property (nonatomic) BOOL hasY;
@property (nonatomic) BOOL hasZ;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (nonatomic) float latitudeHint; // @synthesize latitudeHint=_latitudeHint;
@property (nonatomic) unsigned long long lineId; // @synthesize lineId=_lineId;
@property (nonatomic) float longitudeHint; // @synthesize longitudeHint=_longitudeHint;
@property (nonatomic) BOOL preflight; // @synthesize preflight=_preflight;
@property (nonatomic) unsigned int scale; // @synthesize scale=_scale;
@property (nonatomic) unsigned int size; // @synthesize size=_size;
@property (nonatomic) unsigned int style; // @synthesize style=_style;
@property (nonatomic) unsigned int version; // @synthesize version=_version;
@property (nonatomic) unsigned int x; // @synthesize x=_x;
@property (nonatomic) unsigned int y; // @synthesize y=_y;
@property (nonatomic) unsigned int z; // @synthesize z=_z;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


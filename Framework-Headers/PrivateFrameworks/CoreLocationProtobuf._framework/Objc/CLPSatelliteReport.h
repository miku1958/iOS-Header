//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPSatelliteInfo;

@interface CLPSatelliteReport : PBCodable <NSCopying>
{
    CLPSatelliteInfo *_galileo;
    CLPSatelliteInfo *_glonass;
    CLPSatelliteInfo *_gps;
    CLPSatelliteInfo *_qzss;
}

@property (strong, nonatomic) CLPSatelliteInfo *galileo; // @synthesize galileo=_galileo;
@property (strong, nonatomic) CLPSatelliteInfo *glonass; // @synthesize glonass=_glonass;
@property (strong, nonatomic) CLPSatelliteInfo *gps; // @synthesize gps=_gps;
@property (readonly, nonatomic) BOOL hasGalileo;
@property (readonly, nonatomic) BOOL hasGlonass;
@property (readonly, nonatomic) BOOL hasGps;
@property (readonly, nonatomic) BOOL hasQzss;
@property (strong, nonatomic) CLPSatelliteInfo *qzss; // @synthesize qzss=_qzss;

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


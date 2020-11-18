//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _parameters;
    double _radius;
    int _status;
}

@property (readonly, nonatomic) double *parameters;
@property (readonly, nonatomic) unsigned long long parametersCount;
@property (nonatomic) double radius; // @synthesize radius=_radius;
@property (nonatomic) int status; // @synthesize status=_status;

- (int)StringAsStatus:(id)arg1;
- (void)addParameters:(double)arg1;
- (void)clearParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)parametersAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setParameters:(double *)arg1 count:(unsigned long long)arg2;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

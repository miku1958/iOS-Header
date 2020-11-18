//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDDeparturePredicate : PBCodable <NSCopying>
{
    struct GEOPDTimeRange _timeRange;
    unsigned int _numAdditionalDepartures;
    struct {
        unsigned int timeRange:1;
        unsigned int numAdditionalDepartures:1;
    } _has;
}

@property (nonatomic) BOOL hasNumAdditionalDepartures;
@property (nonatomic) BOOL hasTimeRange;
@property (nonatomic) unsigned int numAdditionalDepartures; // @synthesize numAdditionalDepartures=_numAdditionalDepartures;
@property (nonatomic) struct GEOPDTimeRange timeRange; // @synthesize timeRange=_timeRange;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithTraitsTransitModeFilter:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


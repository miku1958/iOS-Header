//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOUserPreferences;

@interface GEOAutomobileOptions : PBCodable <NSCopying>
{
    int _trafficType;
    GEOUserPreferences *_userPreferences;
    BOOL _includeHistoricTravelTime;
    BOOL _includeStaticTravelTime;
    struct {
        unsigned int trafficType:1;
        unsigned int includeHistoricTravelTime:1;
        unsigned int includeStaticTravelTime:1;
    } _has;
}

@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic) BOOL hasIncludeStaticTravelTime;
@property (nonatomic) BOOL hasTrafficType;
@property (readonly, nonatomic) BOOL hasUserPreferences;
@property (nonatomic) BOOL includeHistoricTravelTime; // @synthesize includeHistoricTravelTime=_includeHistoricTravelTime;
@property (nonatomic) BOOL includeStaticTravelTime; // @synthesize includeStaticTravelTime=_includeStaticTravelTime;
@property (nonatomic) int trafficType; // @synthesize trafficType=_trafficType;
@property (strong, nonatomic) GEOUserPreferences *userPreferences; // @synthesize userPreferences=_userPreferences;

- (int)StringAsTrafficType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)trafficTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

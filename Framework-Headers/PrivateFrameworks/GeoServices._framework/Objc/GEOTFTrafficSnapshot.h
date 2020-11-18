//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOTFTrafficSnapshot : PBCodable <NSCopying>
{
    long long _feedUpdateTime;
    NSString *_feedId;
    NSMutableArray *_incidents;
    NSMutableArray *_regions;
    NSMutableArray *_speeds;
    unsigned int _trafficVersion;
    struct {
        unsigned int feedUpdateTime:1;
        unsigned int trafficVersion:1;
    } _has;
}

@property (strong, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property (nonatomic) long long feedUpdateTime; // @synthesize feedUpdateTime=_feedUpdateTime;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedUpdateTime;
@property (nonatomic) BOOL hasTrafficVersion;
@property (strong, nonatomic) NSMutableArray *incidents; // @synthesize incidents=_incidents;
@property (strong, nonatomic) NSMutableArray *regions; // @synthesize regions=_regions;
@property (strong, nonatomic) NSMutableArray *speeds; // @synthesize speeds=_speeds;
@property (nonatomic) unsigned int trafficVersion; // @synthesize trafficVersion=_trafficVersion;

- (void)addIncidents:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)addSpeeds:(id)arg1;
- (void)clearIncidents;
- (void)clearRegions;
- (void)clearSpeeds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)regionAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionsCount;
- (id)speedsAtIndex:(unsigned long long)arg1;
- (unsigned long long)speedsCount;
- (void)writeTo:(id)arg1;

@end


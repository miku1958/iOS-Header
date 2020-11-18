//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBWidgetConfig : PBCodable <NSCopying>
{
    long long _forYouCutoffTime;
    double _parsecPopulationCeiling;
    double _parsecPopulationFloor;
    long long _topStoriesCutoffTime;
    long long _trendingCutoffTime;
    unsigned int _enabledSections;
    struct {
        unsigned int forYouCutoffTime:1;
        unsigned int parsecPopulationCeiling:1;
        unsigned int parsecPopulationFloor:1;
        unsigned int topStoriesCutoffTime:1;
        unsigned int trendingCutoffTime:1;
        unsigned int enabledSections:1;
    } _has;
}

@property (nonatomic) unsigned int enabledSections; // @synthesize enabledSections=_enabledSections;
@property (nonatomic) long long forYouCutoffTime; // @synthesize forYouCutoffTime=_forYouCutoffTime;
@property (nonatomic) BOOL hasEnabledSections;
@property (nonatomic) BOOL hasForYouCutoffTime;
@property (nonatomic) BOOL hasParsecPopulationCeiling;
@property (nonatomic) BOOL hasParsecPopulationFloor;
@property (nonatomic) BOOL hasTopStoriesCutoffTime;
@property (nonatomic) BOOL hasTrendingCutoffTime;
@property (nonatomic) double parsecPopulationCeiling; // @synthesize parsecPopulationCeiling=_parsecPopulationCeiling;
@property (nonatomic) double parsecPopulationFloor; // @synthesize parsecPopulationFloor=_parsecPopulationFloor;
@property (nonatomic) long long topStoriesCutoffTime; // @synthesize topStoriesCutoffTime=_topStoriesCutoffTime;
@property (nonatomic) long long trendingCutoffTime; // @synthesize trendingCutoffTime=_trendingCutoffTime;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

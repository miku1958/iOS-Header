//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineModelAlgorithmInstance : PBCodable <NSCopying>
{
    unsigned long long _addressComponentMatches;
    double _distanceFromTruth;
    double _uncertainty;
    unsigned int _efficacy;
    unsigned int _source;
    unsigned int _type;
    struct {
        unsigned int addressComponentMatches:1;
        unsigned int distanceFromTruth:1;
        unsigned int uncertainty:1;
        unsigned int efficacy:1;
        unsigned int source:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) unsigned long long addressComponentMatches; // @synthesize addressComponentMatches=_addressComponentMatches;
@property (nonatomic) double distanceFromTruth; // @synthesize distanceFromTruth=_distanceFromTruth;
@property (nonatomic) unsigned int efficacy; // @synthesize efficacy=_efficacy;
@property (nonatomic) BOOL hasAddressComponentMatches;
@property (nonatomic) BOOL hasDistanceFromTruth;
@property (nonatomic) BOOL hasEfficacy;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUncertainty;
@property (nonatomic) unsigned int source; // @synthesize source=_source;
@property (nonatomic) unsigned int type; // @synthesize type=_type;
@property (nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;

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

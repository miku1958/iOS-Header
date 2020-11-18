//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSString;

@interface GEOSignificantLocation : PBCodable <NSCopying>
{
    double _confidence;
    NSString *_identifier;
    GEOLocation *_location;
    unsigned int _locationIndex;
    unsigned int _numberOfVisitsBucket;
    struct {
        unsigned int confidence:1;
        unsigned int locationIndex:1;
        unsigned int numberOfVisitsBucket:1;
    } _has;
}

@property (nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasLocationIndex;
@property (nonatomic) BOOL hasNumberOfVisitsBucket;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property (nonatomic) unsigned int locationIndex; // @synthesize locationIndex=_locationIndex;
@property (nonatomic) unsigned int numberOfVisitsBucket; // @synthesize numberOfVisitsBucket=_numberOfVisitsBucket;

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


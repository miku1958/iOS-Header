//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitDepartureSequenceUsage, NSString;

@interface GEOTransitPlaceCard : PBCodable <NSCopying>
{
    NSString *_incidentType;
    int _transitCategory;
    GEOTransitDepartureSequenceUsage *_transitDepartureSequenceUsage;
    NSString *_transitSystemName;
    struct {
        unsigned int transitCategory:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasIncidentType;
@property (nonatomic) BOOL hasTransitCategory;
@property (readonly, nonatomic) BOOL hasTransitDepartureSequenceUsage;
@property (readonly, nonatomic) BOOL hasTransitSystemName;
@property (strong, nonatomic) NSString *incidentType; // @synthesize incidentType=_incidentType;
@property (nonatomic) int transitCategory; // @synthesize transitCategory=_transitCategory;
@property (strong, nonatomic) GEOTransitDepartureSequenceUsage *transitDepartureSequenceUsage; // @synthesize transitDepartureSequenceUsage=_transitDepartureSequenceUsage;
@property (strong, nonatomic) NSString *transitSystemName; // @synthesize transitSystemName=_transitSystemName;

- (void).cxx_destruct;
- (int)StringAsTransitCategory:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transitCategoryAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


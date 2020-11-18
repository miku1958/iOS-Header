//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDGeocodingResult : PBCodable <NSCopying>
{
    NSMutableArray *_disambiguationLabels;
}

@property (strong, nonatomic) NSMutableArray *disambiguationLabels; // @synthesize disambiguationLabels=_disambiguationLabels;

- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats : PBCodable <NSCopying>
{
    double _conversions;
    double _impressions;
    struct {
        unsigned int conversions:1;
        unsigned int impressions:1;
    } _has;
}

@property (nonatomic) double conversions; // @synthesize conversions=_conversions;
@property (nonatomic) BOOL hasConversions;
@property (nonatomic) BOOL hasImpressions;
@property (nonatomic) double impressions; // @synthesize impressions=_impressions;

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

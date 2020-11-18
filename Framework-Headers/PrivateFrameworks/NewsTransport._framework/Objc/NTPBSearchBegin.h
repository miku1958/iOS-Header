//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBSearchBegin : PBCodable <NSCopying>
{
    int _searchLocation;
    struct {
        unsigned int searchLocation:1;
    } _has;
}

@property (nonatomic) BOOL hasSearchLocation;
@property (nonatomic) int searchLocation; // @synthesize searchLocation=_searchLocation;

- (int)StringAsSearchLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchLocationAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

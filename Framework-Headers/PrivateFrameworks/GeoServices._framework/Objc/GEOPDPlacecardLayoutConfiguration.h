//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardLayoutConfiguration : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
}

@property (strong, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)entriesType;
+ (id)placecardLayoutConfigurationPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapItemAddressBookAttributes, GEOMapItemRoutineAttributes;

@interface GEOMapItemClientAttributes : PBCodable <NSCopying>
{
    GEOMapItemAddressBookAttributes *_addressBookAttributes;
    GEOMapItemRoutineAttributes *_routineAttributes;
}

@property (strong, nonatomic) GEOMapItemAddressBookAttributes *addressBookAttributes; // @synthesize addressBookAttributes=_addressBookAttributes;
@property (readonly, nonatomic) BOOL hasAddressBookAttributes;
@property (readonly, nonatomic) BOOL hasRoutineAttributes;
@property (strong, nonatomic) GEOMapItemRoutineAttributes *routineAttributes; // @synthesize routineAttributes=_routineAttributes;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


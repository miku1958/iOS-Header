//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDVenueItemList : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_items;
    NSString *_title;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)itemType;
- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


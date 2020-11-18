//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLOptions, NSMutableArray;

@interface GEOURLPresent : PBCodable <NSCopying>
{
    NSMutableArray *_items;
    GEOURLOptions *_options;
}

@property (readonly, nonatomic) BOOL hasOptions;
@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (strong, nonatomic) GEOURLOptions *options; // @synthesize options=_options;

+ (Class)itemType;
- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDirectionsOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


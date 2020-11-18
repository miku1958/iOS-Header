//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDTextItemDisplayConfig, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextItemContainer : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDTextItemDisplayConfig *_displayConf;
    NSMutableArray *_textItems;
}

@property (strong, nonatomic) GEOPDTextItemDisplayConfig *displayConf; // @synthesize displayConf=_displayConf;
@property (readonly, nonatomic) BOOL hasDisplayConf;
@property (strong, nonatomic) NSMutableArray *textItems; // @synthesize textItems=_textItems;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)textItemType;
- (void).cxx_destruct;
- (void)addTextItem:(id)arg1;
- (void)clearTextItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)textItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)textItemsCount;
- (void)writeTo:(id)arg1;

@end


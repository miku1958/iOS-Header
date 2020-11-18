//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEORegionalResourceTileData : PBCodable <NSCopying>
{
    NSMutableArray *_attributions;
    NSMutableArray *_icons;
}

@property (strong, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property (strong, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;

- (void)addAttribution:(id)arg1;
- (void)addIcon:(id)arg1;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (void)clearIcons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)iconAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


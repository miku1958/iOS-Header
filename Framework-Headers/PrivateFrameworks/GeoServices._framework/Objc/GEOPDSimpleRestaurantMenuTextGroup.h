//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDSimpleRestaurantMenuTextGroup : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_menuItems;
    NSString *_title;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (strong, nonatomic) NSMutableArray *menuItems; // @synthesize menuItems=_menuItems;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)menuItemType;
- (void).cxx_destruct;
- (void)addMenuItem:(id)arg1;
- (void)clearMenuItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)menuItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)menuItemsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBItemsTodaySectionSpecificConfig : PBCodable <NSCopying>
{
    unsigned long long _maxArticlesShown;
    NSMutableArray *_items;
    CDStruct_df5cdcef _has;
}

@property (nonatomic) BOOL hasMaxArticlesShown;
@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (nonatomic) unsigned long long maxArticlesShown; // @synthesize maxArticlesShown=_maxArticlesShown;

+ (Class)itemsType;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


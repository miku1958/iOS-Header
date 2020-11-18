//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _categoryIndexs;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    struct {
        unsigned int dayOfWeek:1;
        unsigned int hourOfDay:1;
    } _has;
}

@property (readonly, nonatomic) unsigned int *categoryIndexs;
@property (readonly, nonatomic) unsigned long long categoryIndexsCount;
@property (nonatomic) unsigned int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay; // @synthesize hourOfDay=_hourOfDay;

- (void)addCategoryIndex:(unsigned int)arg1;
- (unsigned int)categoryIndexAtIndex:(unsigned long long)arg1;
- (void)clearCategoryIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCategoryIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end


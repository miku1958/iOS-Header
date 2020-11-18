//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

@interface GEOLPRTimeCondition : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _dayOfMonths;
    CDStruct_95bda58d _dayOfWeeks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_dayOfMonths:1;
        unsigned int read_dayOfWeeks:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) unsigned int *dayOfMonths;
@property (readonly, nonatomic) unsigned long long dayOfMonthsCount;
@property (readonly, nonatomic) int *dayOfWeeks;
@property (readonly, nonatomic) unsigned long long dayOfWeeksCount;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsDayOfWeeks:(id)arg1;
- (void)addDayOfMonth:(unsigned int)arg1;
- (void)addDayOfWeek:(int)arg1;
- (void)clearDayOfMonths;
- (void)clearDayOfWeeks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)dayOfMonthAtIndex:(unsigned long long)arg1;
- (int)dayOfWeekAtIndex:(unsigned long long)arg1;
- (id)dayOfWeeksAsString:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDayOfMonths:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setDayOfWeeks:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

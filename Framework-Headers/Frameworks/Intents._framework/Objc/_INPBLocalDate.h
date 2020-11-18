//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBLocalDate-Protocol.h>

@class NSString;

@interface _INPBLocalDate : PBCodable <_INPBLocalDate, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int dayOfMonth:1;
        unsigned int dayOfWeek:1;
        unsigned int month:1;
        unsigned int year:1;
    } _has;
    int _dayOfWeek;
    long long _dayOfMonth;
    long long _month;
    long long _year;
}

@property (nonatomic) long long dayOfMonth; // @synthesize dayOfMonth=_dayOfMonth;
@property (nonatomic) int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDayOfMonth;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) BOOL hasYear;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long month; // @synthesize month=_month;
@property (readonly) Class superclass;
@property (nonatomic) long long year; // @synthesize year=_year;

- (int)StringAsDayOfWeek:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dayOfWeekAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


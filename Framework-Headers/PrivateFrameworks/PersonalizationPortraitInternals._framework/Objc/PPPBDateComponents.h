//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPPBDateComponents : PBCodable <NSCopying>
{
    NSString *_calendarIdentifier;
    int _day;
    int _month;
    NSString *_timeZoneName;
    int _year;
    struct {
        unsigned int day:1;
        unsigned int month:1;
        unsigned int year:1;
    } _has;
}

@property (strong, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property (nonatomic) int day; // @synthesize day=_day;
@property (readonly, nonatomic) BOOL hasCalendarIdentifier;
@property (nonatomic) BOOL hasDay;
@property (nonatomic) BOOL hasMonth;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) int month; // @synthesize month=_month;
@property (strong, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property (nonatomic) int year; // @synthesize year=_year;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@interface BLTPBDateComponents : PBCodable <NSCopying>
{
    int _hour;
    int _minute;
    int _second;
    int _weekday;
    struct {
        unsigned int hour:1;
        unsigned int minute:1;
        unsigned int second:1;
        unsigned int weekday:1;
    } _has;
}

@property (nonatomic) BOOL hasHour;
@property (nonatomic) BOOL hasMinute;
@property (nonatomic) BOOL hasSecond;
@property (nonatomic) BOOL hasWeekday;
@property (nonatomic) int hour; // @synthesize hour=_hour;
@property (nonatomic) int minute; // @synthesize minute=_minute;
@property (nonatomic) int second; // @synthesize second=_second;
@property (nonatomic) int weekday; // @synthesize weekday=_weekday;

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

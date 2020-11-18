//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBLocalTime-Protocol.h>

@class NSString;

@interface _INPBLocalTime : PBCodable <_INPBLocalTime, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int hourOfDay:1;
        unsigned int millisOfSecond:1;
        unsigned int minuteOfHour:1;
        unsigned int secondOfMinute:1;
    } _has;
    long long _hourOfDay;
    long long _millisOfSecond;
    long long _minuteOfHour;
    long long _secondOfMinute;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasHourOfDay;
@property (nonatomic) BOOL hasMillisOfSecond;
@property (nonatomic) BOOL hasMinuteOfHour;
@property (nonatomic) BOOL hasSecondOfMinute;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hourOfDay; // @synthesize hourOfDay=_hourOfDay;
@property (nonatomic) long long millisOfSecond; // @synthesize millisOfSecond=_millisOfSecond;
@property (nonatomic) long long minuteOfHour; // @synthesize minuteOfHour=_minuteOfHour;
@property (nonatomic) long long secondOfMinute; // @synthesize secondOfMinute=_secondOfMinute;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


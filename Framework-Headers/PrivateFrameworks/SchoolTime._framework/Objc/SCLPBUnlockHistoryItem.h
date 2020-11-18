//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SchoolTime/NSCopying-Protocol.h>

@class NSString;

@interface SCLPBUnlockHistoryItem : PBCodable <NSCopying>
{
    double _duration;
    double _startTimeIntervalSinceReferenceDate;
    NSString *_calendarIdentifier;
    unsigned int _scheduleEndHour;
    unsigned int _scheduleEndMinute;
    unsigned int _scheduleStartHour;
    unsigned int _scheduleStartMinute;
    NSString *_timeZoneName;
    struct {
        unsigned int duration:1;
        unsigned int startTimeIntervalSinceReferenceDate:1;
        unsigned int scheduleEndHour:1;
        unsigned int scheduleEndMinute:1;
        unsigned int scheduleStartHour:1;
        unsigned int scheduleStartMinute:1;
    } _has;
}

@property (strong, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) BOOL hasCalendarIdentifier;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasScheduleEndHour;
@property (nonatomic) BOOL hasScheduleEndMinute;
@property (nonatomic) BOOL hasScheduleStartHour;
@property (nonatomic) BOOL hasScheduleStartMinute;
@property (nonatomic) BOOL hasStartTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (nonatomic) unsigned int scheduleEndHour; // @synthesize scheduleEndHour=_scheduleEndHour;
@property (nonatomic) unsigned int scheduleEndMinute; // @synthesize scheduleEndMinute=_scheduleEndMinute;
@property (nonatomic) unsigned int scheduleStartHour; // @synthesize scheduleStartHour=_scheduleStartHour;
@property (nonatomic) unsigned int scheduleStartMinute; // @synthesize scheduleStartMinute=_scheduleStartMinute;
@property (nonatomic) double startTimeIntervalSinceReferenceDate; // @synthesize startTimeIntervalSinceReferenceDate=_startTimeIntervalSinceReferenceDate;
@property (strong, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;

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

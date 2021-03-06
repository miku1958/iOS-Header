//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBLocalDate, _INPBLocalTime;

@protocol _INPBDateTime <NSObject>

@property (nonatomic) int calendarSystem;
@property (strong, nonatomic) _INPBLocalDate *date;
@property (nonatomic) BOOL hasCalendarSystem;
@property (readonly, nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasTime;
@property (readonly, nonatomic) BOOL hasTimeZoneID;
@property (strong, nonatomic) _INPBLocalTime *time;
@property (copy, nonatomic) NSString *timeZoneID;

- (int)StringAsCalendarSystem:(NSString *)arg1;
- (NSString *)calendarSystemAsString:(int)arg1;
@end


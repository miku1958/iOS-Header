//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADPredicate.h>

#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, NSTimeZone;

@interface EKPredicate : CADPredicate <NSSecureCoding>
{
    NSString *_uuid;
    NSTimeZone *_timeZone;
    BOOL _shouldLoadDefaultProperties;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_calendars;
    NSString *_title;
    NSSet *_restrictedCalendarRowIDs;
}

@property (strong, nonatomic) NSArray *calendars; // @synthesize calendars=_calendars;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) NSSet *restrictedCalendarRowIDs; // @synthesize restrictedCalendarRowIDs=_restrictedCalendarRowIDs;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalendars:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;

@end


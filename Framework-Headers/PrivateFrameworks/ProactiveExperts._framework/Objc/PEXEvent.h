//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEvent, NSDate, NSString;

@interface PEXEvent : NSObject
{
    BOOL _isUnscheduledFreeTime;
    NSString *_identifier;
    NSString *_title;
    NSString *_calendarTitle;
    NSDate *_start;
    NSDate *_end;
    EKEvent *_event;
}

@property (strong, nonatomic) NSString *calendarTitle; // @synthesize calendarTitle=_calendarTitle;
@property (strong, nonatomic) NSDate *end; // @synthesize end=_end;
@property (strong, nonatomic) EKEvent *event; // @synthesize event=_event;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isUnscheduledFreeTime; // @synthesize isUnscheduledFreeTime=_isUnscheduledFreeTime;
@property (strong, nonatomic) NSDate *start; // @synthesize start=_start;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)eventFromEKEvent:(id)arg1;
- (void).cxx_destruct;
- (long long)compareStartDateWithEvent:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 calendarTitle:(id)arg3 start:(id)arg4 end:(id)arg5 isUnscheduledFreeTime:(BOOL)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;

@end


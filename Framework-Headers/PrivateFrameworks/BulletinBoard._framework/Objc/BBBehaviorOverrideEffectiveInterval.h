//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBBehaviorOverrideEffectivePeriod-Protocol.h>

@class NSCalendar, NSDateComponents, NSString, NSUUID;

@interface BBBehaviorOverrideEffectiveInterval : NSObject <BBBehaviorOverrideEffectivePeriod>
{
    NSDateComponents *_startComponents;
    NSDateComponents *_endComponents;
    NSString *_calendarIdentifier;
    NSCalendar *_calendar;
    unsigned long long _repeatInterval;
    NSUUID *_identifier;
}

@property (copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDateComponents *endComponents; // @synthesize endComponents=_endComponents;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property (copy, nonatomic) NSDateComponents *startComponents; // @synthesize startComponents=_startComponents;
@property (readonly) Class superclass;

+ (long long)_dateComponentWithProvidedComponent:(long long)arg1 andBaseComponent:(long long)arg2;
+ (id)adjustComponentsForRepeatInterval:(unsigned long long)arg1 earlier:(BOOL)arg2;
+ (id)dateWithComponents:(id)arg1 closestToDate:(id)arg2 earlierThanDate:(BOOL)arg3 calendar:(id)arg4 repeatInterval:(unsigned long long)arg5;
+ (id)dateWithComponents:(id)arg1 immediatelyFollowingDate:(id)arg2 calendar:(id)arg3 repeatInterval:(unsigned long long)arg4;
+ (id)dateWithComponents:(id)arg1 immediatelyPriorToDate:(id)arg2 calendar:(id)arg3 repeatInterval:(unsigned long long)arg4;
+ (unsigned long long)relevantUnitsForRepeatInterval:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_configuredCalendarWithIdentifier:(id)arg1;
- (void)_synchronizeTimeZone;
- (BOOL)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4;
- (id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4 identifier:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)nextTransitionDateAfterDate:(id)arg1;

@end


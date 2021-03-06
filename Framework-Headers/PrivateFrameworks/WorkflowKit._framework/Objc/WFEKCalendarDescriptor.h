//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface WFEKCalendarDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allCalendars;
    NSString *_calendarTitle;
    NSString *_calendarIdentifier;
    NSNumber *_calendarRGBAValue;
}

@property (readonly, nonatomic) BOOL allCalendars; // @synthesize allCalendars=_allCalendars;
@property (readonly, copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property (readonly, nonatomic) NSNumber *calendarRGBAValue; // @synthesize calendarRGBAValue=_calendarRGBAValue;
@property (readonly, copy, nonatomic) NSString *calendarTitle; // @synthesize calendarTitle=_calendarTitle;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAllCalendars;
- (id)initWithCalendarTitle:(id)arg1 identifier:(id)arg2 RGBAValue:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)matchingCalendarsFromArray:(id)arg1;
- (id)matchingRemindersListsFromArray:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@interface DNDModeAssertionLifetime : NSObject <NSCopying, NSSecureCoding>
{
}

@property (readonly, nonatomic) unsigned long long lifetimeType; // @dynamic lifetimeType;

+ (id)_secureCodingLifetimeClasses;
+ (id)lifetimeForUserRequest;
+ (id)lifetimeMatchingScheduleWithIdentifier:(id)arg1;
+ (id)lifetimeUntilEndOfCalendarEventWithUniqueID:(id)arg1 occurrenceDate:(id)arg2;
+ (id)lifetimeUntilEndOfScheduleWithIdentifier:(id)arg1;
+ (id)lifetimeWithCalendarEventUniqueID:(id)arg1 occurrenceDate:(id)arg2;
+ (id)lifetimeWithCurrentLocation;
+ (id)lifetimeWithDateInterval:(id)arg1;
+ (id)lifetimeWithDuration:(double)arg1;
+ (BOOL)supportsSecureCoding;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


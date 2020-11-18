//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

@class NSSet;

@interface CADContactEventsPredicate : EKPredicate
{
    NSSet *_contactEmailAddresses;
    NSSet *_contactNameComponents;
}

@property (strong) NSSet *contactEmailAddresses; // @synthesize contactEmailAddresses=_contactEmailAddresses;
@property (strong) NSSet *contactNameComponents; // @synthesize contactNameComponents=_contactNameComponents;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_isCandidate:(void *)arg1 allowAllDayEvent:(BOOL)arg2;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contacts:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;

@end


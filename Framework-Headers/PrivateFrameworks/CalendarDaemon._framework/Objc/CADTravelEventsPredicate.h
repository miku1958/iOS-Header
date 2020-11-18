//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

@interface CADTravelEventsPredicate : EKPredicate
{
}

+ (BOOL)supportsSecureCoding;
- (id)_fetchTravelEventsWithDatabase:(struct CalDatabase *)arg1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;

@end


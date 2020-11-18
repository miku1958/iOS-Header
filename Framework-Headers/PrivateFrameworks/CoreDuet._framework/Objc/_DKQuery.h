//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _DKQuery : NSObject <NSSecureCoding>
{
}

+ (id)endDateSortDescriptorAscending:(BOOL)arg1;
+ (id)exectuableQueryForQuery:(id)arg1;
+ (id)predicateForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)arg1 endSecondOfDay:(unsigned long long)arg2;
+ (id)predicateForEventsContainingDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsIntersectingDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithCategoryValue:(id)arg1;
+ (id)predicateForEventsWithDayOfWeek:(unsigned long long)arg1;
+ (id)predicateForEventsWithDoubleValue:(double)arg1;
+ (id)predicateForEventsWithDoubleValueBetween:(double)arg1 and:(double)arg2;
+ (id)predicateForEventsWithEndInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithIdentifierValue:(id)arg1;
+ (id)predicateForEventsWithIntegerValue:(long long)arg1;
+ (id)predicateForEventsWithQuantityValue:(id)arg1;
+ (id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStreamName:(id)arg1;
+ (id)predicateForEventsWithStreamNames:(id)arg1;
+ (id)predicateForEventsWithStringValue:(id)arg1;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)queryNotExecutableError;
+ (id)startDateSortDescriptorAscending:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

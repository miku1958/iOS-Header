//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>
#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CADEventTimeWindowPredicate : CADPredicate <NSSecureCoding, EKDefaultPropertiesLoading>
{
    BOOL _mustStartInInterval;
    CADPredicate *_wrappedPredicate;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL mustStartInInterval; // @synthesize mustStartInInterval=_mustStartInInterval;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CADPredicate *wrappedPredicate; // @synthesize wrappedPredicate=_wrappedPredicate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1 limitWithStartDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4;
- (id)predicateFormat;
- (BOOL)shouldLoadDefaultProperties;

@end


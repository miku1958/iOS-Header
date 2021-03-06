//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents, NSString;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventDateRule : NSObject
{
    id<CLSHolidayCalendarEventDateRuleDelegate> _delegate;
    NSDateComponents *_simpleRuleComponents;
    long long _startYear;
    long long _endYear;
    long long _offsetDays;
    NSString *_relativeToRuleUUID;
}

@property (weak, nonatomic) id<CLSHolidayCalendarEventDateRuleDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long endYear; // @synthesize endYear=_endYear;
@property (nonatomic) long long offsetDays; // @synthesize offsetDays=_offsetDays;
@property (copy, nonatomic) NSString *relativeToRuleUUID; // @synthesize relativeToRuleUUID=_relativeToRuleUUID;
@property (copy, nonatomic) NSDateComponents *simpleRuleComponents; // @synthesize simpleRuleComponents=_simpleRuleComponents;
@property (nonatomic) long long startYear; // @synthesize startYear=_startYear;

- (void).cxx_destruct;
- (id)_stringDescriptionForDateRuleComponentValue:(long long)arg1;
- (id)debugDescription;
- (BOOL)hasEndYear;
- (BOOL)hasExplicitYear;
- (BOOL)hasStartYear;
- (id)initWithEventDescription:(id)arg1;
- (id)localDateByEvaluatingRuleForYear:(long long)arg1;
- (BOOL)matchesExplicitYear:(long long)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADFilter.h>

@class NSDate, NSString;

@interface CADPropertyFilter : CADFilter
{
    long long _property;
    long long _comparison;
    NSString *_stringValue;
    long long _integerValue;
    NSDate *_dateValue;
}

@property (readonly, nonatomic) long long comparison; // @synthesize comparison=_comparison;
@property (readonly, nonatomic) NSDate *dateValue; // @synthesize dateValue=_dateValue;
@property (readonly, nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property (readonly, nonatomic) BOOL isDate;
@property (readonly, nonatomic) BOOL isInteger;
@property (readonly, nonatomic) BOOL isString;
@property (readonly, nonatomic) long long property; // @synthesize property=_property;
@property (readonly, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)applicableToEntityType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(long long)arg1 comparison:(long long)arg2 dateValue:(id)arg3;
- (id)initWithProperty:(long long)arg1 comparison:(long long)arg2 integerValue:(long long)arg3;
- (id)initWithProperty:(long long)arg1 comparison:(long long)arg2 stringValue:(id)arg3;
- (BOOL)validate;
- (BOOL)validateWithRequiredPropertyType:(int)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SADataSourceInfo;

@interface SAAlarmObject : SADomainObject
{
}

@property (strong, nonatomic) SADataSourceInfo *dataSourceInfo;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *firing;
@property (copy, nonatomic) NSArray *frequency;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSNumber *relativeOffsetMinutes;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

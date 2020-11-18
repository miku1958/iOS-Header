//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/SAAlarmAlarmAction-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmUpdate : SADomainCommand <SAAlarmAlarmAction>
{
}

@property (copy, nonatomic) NSArray *addedFrequency;
@property (copy, nonatomic) NSURL *alarmId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *enabled;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSArray *modifications;
@property (copy, nonatomic) NSArray *removedFrequency;
@property (readonly) Class superclass;

+ (id)update;
+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

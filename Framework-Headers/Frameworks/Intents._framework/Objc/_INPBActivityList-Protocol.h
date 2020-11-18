//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBActivity, _INPBCondition;

@protocol _INPBActivityList <NSObject>

@property (copy, nonatomic) NSArray *activities;
@property (readonly, nonatomic) unsigned long long activitiesCount;
@property (strong, nonatomic) _INPBCondition *condition;
@property (readonly, nonatomic) BOOL hasCondition;

+ (Class)activityType;
- (_INPBActivity *)activityAtIndex:(unsigned long long)arg1;
- (void)addActivity:(_INPBActivity *)arg1;
- (void)clearActivities;
@end

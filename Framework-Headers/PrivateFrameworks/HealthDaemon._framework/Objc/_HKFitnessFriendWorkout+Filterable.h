//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFitnessFriendWorkout.h>

#import <HealthDaemon/HDFitnessFriendsFilterableSample-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface _HKFitnessFriendWorkout (Filterable) <HDFitnessFriendsFilterableSample>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *filter_date;
@property (readonly, nonatomic) NSUUID *filter_friendUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

@end


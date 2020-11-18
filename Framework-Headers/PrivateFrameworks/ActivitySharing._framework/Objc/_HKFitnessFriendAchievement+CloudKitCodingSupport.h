//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFitnessFriendAchievement.h>

#import <ActivitySharing/ASCloudKitCodable-Protocol.h>

@class ASCodableCloudKitAchievement, NSString;

@interface _HKFitnessFriendAchievement (CloudKitCodingSupport) <ASCloudKitCodable>

@property (readonly, nonatomic) ASCodableCloudKitAchievement *codableAchievement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (struct _HKFitnessFriendAchievement *)fitnessFriendAchievementWithRecord:(id)arg1 friendUUID:(id)arg2;
- (id)recordWithZoneID:(id)arg1;
@end

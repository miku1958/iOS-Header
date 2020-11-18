//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSUUID, _HKFitnessFriendContact;

@interface _HKFitnessFriend : NSObject <NSSecureCoding, NSCopying>
{
    NSNumber *_currentCacheIndex;
    NSDictionary *_snapshots;
    NSDictionary *_friendAchievements;
    NSDictionary *_friendWorkouts;
    _HKFitnessFriendContact *_contact;
}

@property (readonly, nonatomic) BOOL canSeeMyActivityData;
@property (strong, nonatomic) _HKFitnessFriendContact *contact; // @synthesize contact=_contact;
@property (readonly, nonatomic) NSDate *dateForLatestDataHidden;
@property (readonly, nonatomic) NSDate *dateForLatestDataHiddenFromMe;
@property (readonly, nonatomic) NSDate *dateForLatestDataShown;
@property (readonly, nonatomic) NSDate *dateForLatestDataShownToMe;
@property (readonly, nonatomic) NSDate *dateForLatestOutgoingInviteRequest;
@property (readonly, nonatomic) NSDate *dateForLatestRelationshipStart;
@property (strong, nonatomic) NSDictionary *friendAchievements; // @synthesize friendAchievements=_friendAchievements;
@property (readonly) NSUUID *friendUUID;
@property (strong, nonatomic) NSDictionary *friendWorkouts; // @synthesize friendWorkouts=_friendWorkouts;
@property (readonly, nonatomic) BOOL hasInviteRequestFromMe;
@property (readonly, nonatomic) BOOL inviteRequestToMeWasAccepted;
@property (readonly, nonatomic) BOOL isActivityDataCurrentlyVisibleToMe;
@property (readonly, nonatomic) BOOL isAwaitingInviteResponseFromMe;
@property (readonly, nonatomic) BOOL isFriendshipCurrentlyActive;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) BOOL sentInviteRequestToMe;
@property (strong, nonatomic) NSDictionary *snapshots; // @synthesize snapshots=_snapshots;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_mostRecentSnapshot;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentDateComponents;
- (id)currentSnapshot;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 contact:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isActivityDataVisibleToMeForDate:(id)arg1;
- (id)timeZone;

@end


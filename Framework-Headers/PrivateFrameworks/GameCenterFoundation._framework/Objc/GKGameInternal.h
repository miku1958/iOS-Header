//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKGameDescriptor.h>

@class GKStoreItemInternal, NSDictionary, NSSet, NSString;

@interface GKGameInternal : GKGameDescriptor
{
    NSString *_name;
    NSDictionary *_icons;
    NSString *_defaultLeaderboardIdentifier;
    GKStoreItemInternal *_storeItem;
    union {
        struct {
            unsigned int _platform_unused:8;
            unsigned int _prerendered:1;
            unsigned int _supportsLeaderboards:1;
            unsigned int _supportsLeaderboardSets:1;
            unsigned int _hasAggregateLeaderboard:1;
            unsigned int _supportsAchievements:1;
            unsigned int _supportsMultiplayer:1;
            unsigned int _valid:1;
            unsigned int _unused:1;
            unsigned int _supportsTurnBasedMultiplayer:1;
            unsigned int _isArcadeGame:1;
            unsigned int _supportsChallenges:1;
            unsigned int _reserved:13;
        } ;
        unsigned int _value;
    } _flags;
    unsigned short _numberOfLeaderboards;
    unsigned short _numberOfLeaderboardSets;
    unsigned short _numberOfAchievements;
    unsigned short _maxAchievementPoints;
    NSSet *_compatiblePlatforms;
}

@property (readonly, nonatomic) BOOL canBeIndexed;
@property (strong, nonatomic) NSSet *compatiblePlatforms; // @synthesize compatiblePlatforms=_compatiblePlatforms;
@property (strong, nonatomic) NSString *defaultLeaderboardIdentifier; // @synthesize defaultLeaderboardIdentifier=_defaultLeaderboardIdentifier;
@property (nonatomic) unsigned int flags; // @dynamic flags;
@property (readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property (nonatomic) BOOL hasAggregateLeaderboard;
@property (strong, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;
@property (nonatomic) BOOL isArcadeGame; // @dynamic isArcadeGame;
@property (nonatomic) unsigned short maxAchievementPoints; // @synthesize maxAchievementPoints=_maxAchievementPoints;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) unsigned short numberOfAchievements; // @synthesize numberOfAchievements=_numberOfAchievements;
@property (nonatomic) unsigned short numberOfLeaderboardSets; // @synthesize numberOfLeaderboardSets=_numberOfLeaderboardSets;
@property (nonatomic) unsigned short numberOfLeaderboards; // @synthesize numberOfLeaderboards=_numberOfLeaderboards;
@property (nonatomic, getter=isPrerendered) BOOL prerendered; // @dynamic prerendered;
@property (strong, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property (nonatomic) BOOL supportsAchievements; // @dynamic supportsAchievements;
@property (nonatomic) BOOL supportsChallenges; // @dynamic supportsChallenges;
@property (nonatomic) BOOL supportsLeaderboardSets; // @dynamic supportsLeaderboardSets;
@property (nonatomic) BOOL supportsLeaderboards; // @dynamic supportsLeaderboards;
@property (nonatomic) BOOL supportsMultiplayer; // @dynamic supportsMultiplayer;
@property (nonatomic) BOOL supportsTurnBasedMultiplayer; // @dynamic supportsTurnBasedMultiplayer;
@property (nonatomic, getter=isValid) BOOL valid; // @dynamic valid;

+ (id)secureCodedPropertyKeys;
- (void)dealloc;
- (id)defaultCategory;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned short)numberOfCategories;
- (id)serverRepresentation;

@end


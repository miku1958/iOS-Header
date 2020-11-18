//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKGameInternal, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface GKPlayerInternal : GKInternalRepresentation
{
    NSString *_playerID;
    NSString *_gamePlayerID;
    NSString *_teamPlayerID;
    NSString *_alias;
    NSDictionary *_photos;
    NSString *_messagesID;
    NSString *_friendLevel;
    unsigned short _numberOfFriends;
    unsigned short _numberOfGames;
    unsigned short _numberOfFriendsInCommon;
    unsigned short _numberOfGamesInCommon;
    unsigned int _numberOfAchievements;
    unsigned int _numberOfAchievementPoints;
    union {
        struct {
            unsigned int _unused:8;
            unsigned int _purpleBuddyAccount:1;
            unsigned int _underage:1;
            unsigned int _photoPending:1;
            unsigned int _findable:1;
            unsigned int _reserved:18;
        } ;
        unsigned int _value;
    } _flags;
}

@property (strong, nonatomic) NSString *accountName; // @dynamic accountName;
@property (strong, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property (strong, nonatomic) NSString *compositeName; // @dynamic compositeName;
@property (strong, nonatomic) NSArray *emailAddresses; // @dynamic emailAddresses;
@property (strong, nonatomic) NSString *facebookUserID; // @dynamic facebookUserID;
@property (nonatomic, getter=isFindable) BOOL findable; // @dynamic findable;
@property (strong, nonatomic) NSString *firstName; // @dynamic firstName;
@property (nonatomic) unsigned int flags; // @dynamic flags;
@property (strong, nonatomic) NSString *friendLevel; // @synthesize friendLevel=_friendLevel;
@property (strong, nonatomic) NSArray *friends; // @dynamic friends;
@property (strong, nonatomic) NSString *gamePlayerID; // @synthesize gamePlayerID=_gamePlayerID;
@property (strong, nonatomic) NSString *guestIdentifier; // @dynamic guestIdentifier;
@property (strong, nonatomic) NSNumber *iCloudUserID; // @dynamic iCloudUserID;
@property (readonly, nonatomic) BOOL isAnonymousPlayer;
@property (readonly, nonatomic) BOOL isAutomatchPlayer;
@property (readonly, nonatomic) BOOL isFriend;
@property (readonly, nonatomic) BOOL isGuestPlayer;
@property (readonly, nonatomic) BOOL isLoaded;
@property (readonly, nonatomic) BOOL isLocalPlayer;
@property (readonly, nonatomic) BOOL isUnknownPlayer;
@property (strong, nonatomic) NSString *lastName; // @dynamic lastName;
@property (strong, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property (strong, nonatomic) GKGameInternal *lastPlayedGame; // @dynamic lastPlayedGame;
@property (strong, nonatomic) NSString *messagesID; // @synthesize messagesID=_messagesID;
@property (nonatomic) unsigned int numberOfAchievementPoints; // @synthesize numberOfAchievementPoints=_numberOfAchievementPoints;
@property (nonatomic) unsigned int numberOfAchievements; // @synthesize numberOfAchievements=_numberOfAchievements;
@property (nonatomic) unsigned short numberOfChallenges; // @dynamic numberOfChallenges;
@property (nonatomic) unsigned short numberOfFriends; // @synthesize numberOfFriends=_numberOfFriends;
@property (nonatomic) unsigned short numberOfFriendsInCommon; // @synthesize numberOfFriendsInCommon=_numberOfFriendsInCommon;
@property (nonatomic) unsigned short numberOfGames; // @synthesize numberOfGames=_numberOfGames;
@property (nonatomic) unsigned short numberOfGamesInCommon; // @synthesize numberOfGamesInCommon=_numberOfGamesInCommon;
@property (nonatomic) unsigned short numberOfRequests; // @dynamic numberOfRequests;
@property (nonatomic) unsigned short numberOfTurns; // @dynamic numberOfTurns;
@property (nonatomic, getter=isPhotoPending) BOOL photoPending; // @dynamic photoPending;
@property (strong, nonatomic) NSDictionary *photos; // @synthesize photos=_photos;
@property (strong, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property (nonatomic, getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount; // @dynamic purpleBuddyAccount;
@property (strong, nonatomic) NSString *status; // @dynamic status;
@property (strong, nonatomic) NSString *teamPlayerID; // @synthesize teamPlayerID=_teamPlayerID;
@property (nonatomic, getter=isUnderage) BOOL underage; // @dynamic underage;

+ (Class)classForFamiliarity:(int)arg1;
+ (id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2;
+ (id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3;
+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
- (BOOL)_gkIsSameAsPlayer:(id)arg1;
- (BOOL)allowNearbyMultiplayer;
- (id)cacheKey;
- (id)conciseDescription;
- (void)dealloc;
- (int)defaultFamiliarity;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)minimalInternal;
- (id)serverRepresentation;
- (void)setAllowNearbyMultiplayer:(BOOL)arg1;

@end


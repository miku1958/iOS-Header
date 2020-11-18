//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface GKMatchRequestInternal : GKInternalRepresentation
{
    unsigned long long _matchType;
    NSArray *_recipients;
    NSArray *_recipientPlayerIDs;
    NSString *_inviteMessage;
    NSDictionary *_localizableInviteMessage;
    NSData *_sessionToken;
    NSString *_rid;
    unsigned int _version;
    int _playerGroup;
    unsigned int _playerAttributes;
    unsigned char _minPlayers;
    unsigned char _maxPlayers;
    unsigned char _defaultNumberOfPlayers;
}

@property (nonatomic) unsigned char defaultNumberOfPlayers; // @synthesize defaultNumberOfPlayers=_defaultNumberOfPlayers;
@property (copy, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property (strong, nonatomic) NSDictionary *localizableInviteMessage; // @synthesize localizableInviteMessage=_localizableInviteMessage;
@property (nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property (nonatomic) unsigned char maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property (nonatomic) unsigned char minPlayers; // @synthesize minPlayers=_minPlayers;
@property (nonatomic) unsigned int playerAttributes; // @synthesize playerAttributes=_playerAttributes;
@property (nonatomic) int playerGroup; // @synthesize playerGroup=_playerGroup;
@property (strong, nonatomic) NSArray *recipientPlayerIDs; // @synthesize recipientPlayerIDs=_recipientPlayerIDs;
@property (strong, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property (strong, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property (strong, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property (nonatomic) unsigned int version; // @synthesize version=_version;

+ (id)secureCodedPropertyKeys;
- (void)dealloc;
- (BOOL)hasGuestPlayers;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end


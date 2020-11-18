//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKLeaderboardInternal, GKPlayerInternal, GKScoreInternal, GKTournamentDefinitionInternal, GKTournamentParticipantInternal, NSDate, NSString, NSURL;

@interface GKTournamentInternal : GKInternalRepresentation
{
    NSString *_tournamentID;
    GKTournamentDefinitionInternal *_tournamentDefinition;
    NSString *_tournamentName;
    long long _maxReplays;
    long long _minPlayers;
    long long _maxPlayers;
    long long _scoringMethod;
    double _duration;
    long long _randomSeed;
    NSDate *_registrationBeginDate;
    NSDate *_registrationEndDate;
    NSDate *_tournamentBeginDate;
    NSDate *_tournamentEndDate;
    long long _tournamentState;
    GKScoreInternal *_bestScore;
    GKPlayerInternal *_winningPlayer;
    long long _playerCount;
    GKTournamentParticipantInternal *_localParticipant;
    GKLeaderboardInternal *_leaderboard;
    long long _tournamentError;
    NSURL *_inviteURLForMessages;
    long long _tournamentNumber;
    long long _seedingMethod;
    GKPlayerInternal *_customTournamentCreator;
    NSString *_nextTournamentID;
    NSDate *_nextTournamentBeginDate;
}

@property (strong, nonatomic) GKScoreInternal *bestScore; // @synthesize bestScore=_bestScore;
@property (strong, nonatomic) GKPlayerInternal *customTournamentCreator; // @synthesize customTournamentCreator=_customTournamentCreator;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) NSURL *inviteURLForMessages; // @synthesize inviteURLForMessages=_inviteURLForMessages;
@property (strong, nonatomic) GKLeaderboardInternal *leaderboard; // @synthesize leaderboard=_leaderboard;
@property (strong, nonatomic) GKTournamentParticipantInternal *localParticipant; // @synthesize localParticipant=_localParticipant;
@property (nonatomic) long long maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property (nonatomic) long long maxReplays; // @synthesize maxReplays=_maxReplays;
@property (nonatomic) long long minPlayers; // @synthesize minPlayers=_minPlayers;
@property (strong, nonatomic) NSDate *nextTournamentBeginDate; // @synthesize nextTournamentBeginDate=_nextTournamentBeginDate;
@property (strong, nonatomic) NSString *nextTournamentID; // @synthesize nextTournamentID=_nextTournamentID;
@property (nonatomic) long long playerCount; // @synthesize playerCount=_playerCount;
@property (nonatomic) long long randomSeed; // @synthesize randomSeed=_randomSeed;
@property (strong, nonatomic) NSDate *registrationBeginDate; // @synthesize registrationBeginDate=_registrationBeginDate;
@property (strong, nonatomic) NSDate *registrationEndDate; // @synthesize registrationEndDate=_registrationEndDate;
@property (nonatomic) long long scoringMethod; // @synthesize scoringMethod=_scoringMethod;
@property (nonatomic) long long seedingMethod; // @synthesize seedingMethod=_seedingMethod;
@property (strong, nonatomic) NSDate *tournamentBeginDate; // @synthesize tournamentBeginDate=_tournamentBeginDate;
@property (strong, nonatomic) GKTournamentDefinitionInternal *tournamentDefinition; // @synthesize tournamentDefinition=_tournamentDefinition;
@property (strong, nonatomic) NSDate *tournamentEndDate; // @synthesize tournamentEndDate=_tournamentEndDate;
@property (nonatomic) long long tournamentError; // @synthesize tournamentError=_tournamentError;
@property (strong, nonatomic) NSString *tournamentID; // @synthesize tournamentID=_tournamentID;
@property (strong, nonatomic) NSString *tournamentName; // @synthesize tournamentName=_tournamentName;
@property (nonatomic) long long tournamentNumber; // @synthesize tournamentNumber=_tournamentNumber;
@property (nonatomic) long long tournamentState; // @synthesize tournamentState=_tournamentState;
@property (strong, nonatomic) GKPlayerInternal *winningPlayer; // @synthesize winningPlayer=_winningPlayer;

+ (id)defaultCustomTournamentForTournamentDefinition:(id)arg1;
+ (id)secureCodedPropertyKeys;
- (void).cxx_destruct;

@end

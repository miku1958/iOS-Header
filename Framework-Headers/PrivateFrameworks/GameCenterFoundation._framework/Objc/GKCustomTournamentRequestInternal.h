//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, GKTournamentDefinitionInternal, NSDate, NSString;

@interface GKCustomTournamentRequestInternal : GKInternalRepresentation
{
    BOOL _isCreatorInTournament;
    GKTournamentDefinitionInternal *_tournamentDefinition;
    GKPlayerInternal *_tournamentCreator;
    NSString *_tournamentName;
    NSString *_icon;
    long long _seedingMethod;
    long long _scoringMethod;
    long long _maxPlayers;
    long long _minPlayers;
    double _duration;
    NSDate *_startTime;
    long long _maxReplays;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property (nonatomic) BOOL isCreatorInTournament; // @synthesize isCreatorInTournament=_isCreatorInTournament;
@property (nonatomic) long long maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property (nonatomic) long long maxReplays; // @synthesize maxReplays=_maxReplays;
@property (nonatomic) long long minPlayers; // @synthesize minPlayers=_minPlayers;
@property (nonatomic) long long scoringMethod; // @synthesize scoringMethod=_scoringMethod;
@property (nonatomic) long long seedingMethod; // @synthesize seedingMethod=_seedingMethod;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) GKPlayerInternal *tournamentCreator; // @synthesize tournamentCreator=_tournamentCreator;
@property (strong, nonatomic) GKTournamentDefinitionInternal *tournamentDefinition; // @synthesize tournamentDefinition=_tournamentDefinition;
@property (strong, nonatomic) NSString *tournamentName; // @synthesize tournamentName=_tournamentName;

+ (id)customTournamentRequestWithTournamentDefinition:(id)arg1 player:(id)arg2;
+ (id)secureCodedPropertyKeys;
- (void).cxx_destruct;

@end


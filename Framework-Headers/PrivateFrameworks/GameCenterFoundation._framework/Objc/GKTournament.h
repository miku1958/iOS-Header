//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKLeaderboard, GKPlayer, GKScore, GKTournamentDefinition, GKTournamentInternal, GKTournamentParticipant, NSDate, NSString, NSURL;
@protocol GKCustomTournamentDelegate;

@interface GKTournament : NSObject <NSSecureCoding>
{
    GKTournamentDefinition *_tournamentDefinition;
    GKScore *_bestScore;
    GKPlayer *_winningPlayer;
    GKTournamentParticipant *_localParticipant;
    GKLeaderboard *_leaderboard;
    NSObject<GKCustomTournamentDelegate> *_customTournamentDelegate;
    GKTournamentInternal *_internal;
}

@property (strong, nonatomic) GKScore *bestScore; // @synthesize bestScore=_bestScore;
@property (strong, nonatomic) NSObject<GKCustomTournamentDelegate> *customTournamentDelegate; // @synthesize customTournamentDelegate=_customTournamentDelegate;
@property (readonly, nonatomic) double duration; // @dynamic duration;
@property (strong) GKTournamentInternal *internal; // @synthesize internal=_internal;
@property (strong, nonatomic) NSURL *inviteURLForMessages; // @dynamic inviteURLForMessages;
@property (strong, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property (strong, nonatomic) GKTournamentParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property (readonly, nonatomic) long long maxPlayers; // @dynamic maxPlayers;
@property (readonly, nonatomic) long long maxReplays; // @dynamic maxReplays;
@property (readonly, nonatomic) long long minPlayers; // @dynamic minPlayers;
@property (readonly, nonatomic) NSDate *nextTournamentBeginDate; // @dynamic nextTournamentBeginDate;
@property (readonly, nonatomic) NSString *nextTournamentID; // @dynamic nextTournamentID;
@property (readonly, nonatomic) long long playerCount; // @dynamic playerCount;
@property (readonly, nonatomic) long long randomSeed; // @dynamic randomSeed;
@property (readonly, nonatomic) NSDate *registrationBeginDate; // @dynamic registrationBeginDate;
@property (readonly, nonatomic) NSDate *registrationEndDate; // @dynamic registrationEndDate;
@property (readonly, nonatomic) BOOL registrationOpen;
@property (readonly, nonatomic) long long scoringMethod; // @dynamic scoringMethod;
@property (readonly, nonatomic) NSDate *tournamentBeginDate; // @dynamic tournamentBeginDate;
@property (strong, nonatomic) GKTournamentDefinition *tournamentDefinition; // @synthesize tournamentDefinition=_tournamentDefinition;
@property (readonly, nonatomic) NSDate *tournamentEndDate; // @dynamic tournamentEndDate;
@property (readonly, nonatomic) long long tournamentError; // @dynamic tournamentError;
@property (readonly, nonatomic) NSString *tournamentID; // @dynamic tournamentID;
@property (readonly, nonatomic) NSString *tournamentName; // @dynamic tournamentName;
@property (readonly, nonatomic) long long tournamentState; // @dynamic tournamentState;
@property (strong, nonatomic) GKPlayer *winningPlayer; // @synthesize winningPlayer=_winningPlayer;

+ (id)defaultCustomTournamentForTournamentDefinition:(id)arg1;
+ (void)loadTournamentWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)lookForAcceptedCustomTournament;
+ (void)notifyPlayerForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)acceptInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginPlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)declineInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)getFriendCountForGroup:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLocalParticipantWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getShareURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTotalPlayerCountForGroup:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTournamentStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)loadParticipantsWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadScoresWithScope:(long long)arg1 range:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerPlayerInGroup:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reportScore:(long long)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resignFromTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumePlayWithTryToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)verifyPlayerForMatchmaking:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

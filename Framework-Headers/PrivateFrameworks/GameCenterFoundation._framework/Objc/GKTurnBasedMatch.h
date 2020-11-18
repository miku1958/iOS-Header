//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/GKSessionDelegate-Protocol.h>

@class GKGame, GKPlayer, GKTurnBasedMatchInternal, GKTurnBasedParticipant, NSArray, NSData, NSDate, NSString;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate>
{
    unsigned int _state;
    GKTurnBasedMatchInternal *_internal;
    NSArray *_participants;
    NSArray *_exchanges;
}

@property (readonly, strong, nonatomic) NSArray *activeExchanges;
@property (strong, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property (strong, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property (readonly, strong, nonatomic) NSArray *completedExchanges;
@property (readonly, strong, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (strong, nonatomic) GKTurnBasedParticipant *currentParticipant;
@property (readonly, nonatomic) GKPlayer *currentPlayer; // @dynamic currentPlayer;
@property (readonly, nonatomic) NSDate *dateSortKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long exchangeDataMaximumSize; // @dynamic exchangeDataMaximumSize;
@property (readonly, nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer; // @dynamic exchangeMaxInitiatedExchangesPerPlayer;
@property (readonly, strong, nonatomic) NSArray *exchanges; // @synthesize exchanges=_exchanges;
@property (readonly, nonatomic) GKTurnBasedParticipant *firstWinnerOrTiedOrLastLoser;
@property (readonly, nonatomic) GKGame *game; // @dynamic game;
@property (readonly) unsigned long long hash;
@property (strong) GKTurnBasedMatchInternal *internal; // @synthesize internal=_internal;
@property (readonly, nonatomic) BOOL isMyTurn; // @dynamic isMyTurn;
@property (copy, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property (readonly, nonatomic) BOOL localPlayerHasRecentTurn;
@property (readonly, nonatomic) GKTurnBasedParticipant *localPlayerParticipant;
@property (readonly, strong, nonatomic) NSData *matchData; // @dynamic matchData;
@property (nonatomic) unsigned long long matchDataMaximumSize; // @dynamic matchDataMaximumSize;
@property (readonly, strong, nonatomic) NSString *matchID; // @dynamic matchID;
@property (copy, nonatomic) NSString *message;
@property (readonly, strong, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property (readonly, nonatomic) GKTurnBasedParticipant *playingWithParticipantOrFirstKnownPlayer;
@property (readonly, nonatomic) GKTurnBasedParticipant *previousParticipant;
@property (readonly, nonatomic) GKTurnBasedParticipant *previousParticipantOrFirstKnownPlayer;
@property (readonly, nonatomic) GKPlayer *showcasePlayer;
@property (nonatomic) unsigned int state; // @synthesize state=_state;
@property (readonly, nonatomic) long long status; // @dynamic status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long turnNumber; // @dynamic turnNumber;

+ (id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3;
+ (void)findMatchForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)getTurnBasedBadgeCountWithHandler:(CDUnknownBlockType)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)loadMatchWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadMatchesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadMatchesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)loadTurnBasedMatchSummaries:(CDUnknownBlockType)arg1;
+ (void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)matchesWithInternalRepresentations:(id)arg1;
- (id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2;
- (id)_participantsForInternalRepresentation:(id)arg1;
- (void)_updateWithInternal:(id)arg1;
- (void)acceptInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (void)declineInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)exchangeForID:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)indexesForParticipants:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)loadMatchDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)participantQuitOutOfTurnWithOutcome:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)rematchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end


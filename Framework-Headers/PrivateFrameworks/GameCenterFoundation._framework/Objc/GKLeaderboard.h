//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKLeaderboardInternal, GKScore, NSArray, NSDate, NSString;
@protocol GKLeaderboardDelegate;

@interface GKLeaderboard : NSObject
{
    struct os_unfair_lock_s _lock;
    int _loadingCount;
    NSArray *_players;
    NSArray *_scores;
    long long _timeScope;
    long long _playerScope;
    GKLeaderboardInternal *_internal;
    id<GKLeaderboardDelegate> _delegate;
    GKScore *_localPlayerScore;
    struct _NSRange _range;
}

@property (readonly, nonatomic) NSString *baseLeaderboardID; // @dynamic baseLeaderboardID;
@property (copy, nonatomic) NSString *category; // @dynamic category;
@property (weak, nonatomic) id<GKLeaderboardDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) double duration; // @dynamic duration;
@property (readonly, nonatomic) long long friendRank; // @dynamic friendRank;
@property (readonly, nonatomic) long long friendRankCount; // @dynamic friendRankCount;
@property (readonly, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property (copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property (strong) GKLeaderboardInternal *internal; // @synthesize internal=_internal;
@property (readonly, getter=isLoading) BOOL loading;
@property (nonatomic) int loadingCount; // @synthesize loadingCount=_loadingCount;
@property (strong, nonatomic) GKScore *localPlayerScore; // @synthesize localPlayerScore=_localPlayerScore;
@property (readonly, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property (nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property (readonly, nonatomic) unsigned long long maxRange; // @dynamic maxRange;
@property (readonly, nonatomic) NSDate *nextStartDate; // @dynamic nextStartDate;
@property (readonly, nonatomic) long long overallRank; // @dynamic overallRank;
@property (readonly, nonatomic) long long overallRankCount; // @dynamic overallRankCount;
@property (nonatomic) long long playerScope; // @synthesize playerScope=_playerScope;
@property (strong, nonatomic) NSArray *players; // @synthesize players=_players;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (strong, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property (readonly, nonatomic) NSDate *startDate; // @dynamic startDate;
@property (nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property (readonly, copy, nonatomic) NSString *title; // @dynamic title;
@property (readonly, nonatomic) long long type; // @dynamic type;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadHighlightsWithPlayerScope:(long long)arg1 timeScope:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)loadLeaderboardsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadLeaderboardsWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadLeaderboardsWithIDs:(id)arg1 setIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)submitScore:(long long)arg1 context:(unsigned long long)arg2 player:(id)arg3 leaderboardIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (id)creator;
- (void)decrementLoadingCountAtomically;
- (void)deleteWithHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (void)endWithHandler:(CDUnknownBlockType)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (void)incrementLoadingCountAtomically;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithPlayerIDs:(id)arg1;
- (id)initWithPlayers:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)loadEntriesForPlayerScope:(long long)arg1 timeScope:(long long)arg2 range:(struct _NSRange)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadEntriesForPlayers:(id)arg1 timeScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadEntriesWithGameDescriptor:(id)arg1 playerScope:(long long)arg2 timeScope:(long long)arg3 range:(struct _NSRange)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadPreviousOccurrenceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadScoresForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadScoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadSummaryWithTimeScope:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)scoreRequestForGame:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)startWithHandler:(CDUnknownBlockType)arg1;
- (void)submitScore:(long long)arg1 context:(unsigned long long)arg2 player:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)valueForUndefinedKey:(id)arg1;

@end

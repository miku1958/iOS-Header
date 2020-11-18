//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKChallenge.h>

@class GKLeaderboard, GKScore;

@interface GKScoreChallenge : GKChallenge
{
    GKScore *_score;
}

@property (readonly, nonatomic) GKLeaderboard *leaderboard; // @dynamic leaderboard;
@property (strong, nonatomic) GKScore *score; // @synthesize score=_score;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
- (void)dealloc;
- (id)description;
- (id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2;
- (BOOL)detailsLoaded;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)loadDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setInternal:(id)arg1;
- (id)titleText;

@end
